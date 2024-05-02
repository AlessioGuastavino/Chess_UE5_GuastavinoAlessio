
#include "Historical.h"

AHistorical::AHistorical()
{
	CurrentMove = 0;

 	PrimaryActorTick.bCanEverTick = false;

	MoveSize = FVector(180, 100, 10);
	Padding = FVector(30, 10, 0);

	Displacement = 425;
}

void AHistorical::OnConstruction(const FTransform& Transform)
{
	Super::OnConstruction(Transform);

	MoveScale = MoveSize / 100;
}

void AHistorical::BeginPlay()
{
	Super::BeginPlay();

}

void AHistorical::OnClick(AMove* Move)
{
	if (Move == nullptr) {
		return;
	}

	// Index contains position in MoveArray of the clicked move
	int32 Index = MoveArray.Find(Move);	

	// check if Index is not in under or overflow
	if (Index >= 0 && Index < MoveArray.Num()) {
		(Index < CurrentMove) ? BackwardReplay(Index) : ForwardReplay(Index);
	}

	// CurrentTurnHolder contains Number of current player
	CurrentTurnHolder = (CurrentMove + 1) % 2;
}

void AHistorical::AddMove(ADynamicPiece* Piece, FVector2D Source, EPiece WhatHasBeenEated)
{
	int32 Size = MoveArray.Num();
	
	// removing future move that will be override by the incoming one
	if (CurrentMove < Size) 
	{
		for (int j = 0; j < (Size - CurrentMove); j++) {
			AMove* Move = MoveArray.Pop();
			Move->Destroy();
		}
	}

	// spawning move
	AMove* newMove = GetWorld()->SpawnActor<AMove>(MoveClass, GetSpawnLocation(), FRotator::ZeroRotator);	
	
	if (newMove)
	{
		FString Info = GetText(Piece, newMove, Source, WhatHasBeenEated);	// define text
		newMove->TextComponent->SetText(FText::FromString(Info));	// attach text	
		newMove->SetText(Info);		// set text property of this move instance

		newMove->SetPiece(GetPieceSymbol(Piece->GetPiece()));	// setting symbol of the piece moved
	
		if (WhatHasBeenEated != EPiece::ANY)
		{
			newMove->EatenPiece = (WhatHasBeenEated == EPiece::PAWN) ? 'P' : GetPieceSymbol(WhatHasBeenEated);
			newMove->EatedPlayerIndex = (Piece->GetPlayer() == 0) ? 1 : 0;
		}
		else {
			newMove->EatenPiece = '\0';
			newMove->EatedPlayerIndex = -1;
		}
		
		newMove->SetStartingPosition(Source);		// setting starting position of the move
		newMove->SetFinalPosition(Piece->GetGridPosition());	// setting final position of the move
		
		newMove->SetActorScale3D(MoveScale);

		MoveArray.Add(newMove);
		CurrentMove += 1;
	}

	Piece->IsOpeningMove = false;
}

void AHistorical::ResetHistorical()
{
	int32 Size = MoveArray.Num();

	for (int32 i = 0; i < Size; i++) 
	{
		AMove* Move = MoveArray.Pop();
		Move->Destroy();
	}
}

void AHistorical::BackwardReplay(const int32 Selected)
{
	// Go backwards into the moves
	for (int32 k = (CurrentMove - 1); k > Selected; k -= 1) {
		AMove* Item = MoveArray[k];

		if (Item) {
			if (ADynamicPiece* Piece = GameField->GetPieceByCoordinates(Item->GetFinalPosition())) {
				GameField->MakeMove(Piece, Item->GetStartingPosition());

				if (Piece->GetPiece() == EPiece::PAWN)
				{
					if (Piece->GetPlayer() == 0 && Piece->GetGridPosition().X == 1)
					{
						Piece->IsOpeningMove = true;
					}

					if (Piece->GetPlayer() == 1 && Piece->GetGridPosition().X == 6)
					{
						Piece->IsOpeningMove = true;
					}
				}
			}

			// Check if the current move is eat one, for respawn piece
			if ((Item->GetText()).Contains("x")) 
			{
				RespawnEatenPiece(Item);
			}
		}

		CurrentMove = k;
	}
}

void AHistorical::ForwardReplay(const int32 Selected)
{
	// Go forwards into the moves
	for (int32 k = CurrentMove; k <= Selected; k++)
	{
		if (MoveArray.IsValidIndex(k)) {
			AMove* Item = MoveArray[k];

			if (ADynamicPiece* Piece = GameField->GetPieceByCoordinates(Item->GetStartingPosition())) {
				GameField->MakeMove(Piece, Item->GetFinalPosition());
			}

			// if move was eat one, than replicate it
			if ((Item->GetText()).Contains("x")) {
				ADynamicPiece* Eaten = GameField->GetPieceByCoordinates(Item->GetFinalPosition());

				if (Eaten) {
					GameField->PieceArray.Remove(Eaten);
					GameField->PieceMap.Remove(Eaten->GetGridPosition());

					Eaten->Destroy();
				}
			}
		}
	}

	CurrentMove = Selected;

}

void AHistorical::RespawnEatenPiece(AMove* Move)
{
	// player could need to be modified
	int32 Player = Move->EatedPlayerIndex;		// define the player who suffered the eat
	FVector2D FinalPosition = Move->GetFinalPosition();		// taking piece last grid position

	// define respawn location and rotation (necessary because it's different from Human to AI)
	FVector Location = GameField->GetLocationFromCoordinates(FinalPosition) + FVector(0, 0, GameField->OverSquareHeight);
	FRotator Rotation = (Player == 0) ? FRotator(0, 90, 0) : FRotator(0, -90, 0);

	// taking a reference to the type of previously eaten piece
	TCHAR PieceSymbol = Move->EatenPiece;
	if (PieceSymbol == '\0') {
		PieceSymbol = 'P';
	}

	// getting class to spawn and type of the piece
	TPair<TSubclassOf<ADynamicPiece>, EPiece> Pair = GameField->GetPieceClassAndType(PieceSymbol, Player);
	
	TSubclassOf<ADynamicPiece> Class = Pair.Key;
	EPiece Type = Pair.Value;

	// respawn
	if (ADynamicPiece* Respawned = GetWorld()->SpawnActor<ADynamicPiece>(Class, Location, Rotation)) {
		// set back pre-eat properties
		Respawned->BoardSize = GameField->BoardSize;
		Respawned->IsOpeningMove = false;

		if (Type == EPiece::PAWN) 
		{
			if (Player == 0 && FinalPosition.X == 1) {
				// human piece was eaten on his starting position, so has never made his first move
				Respawned->IsOpeningMove = true;
			}
			if (Player == 1 && FinalPosition.X == 6) {
				// AI piece was eaten on his starting position, so has never made his first move
				Respawned->IsOpeningMove = true;
			}
		}
		

		Respawned->SetPiece(Type);
		Respawned->SetCategory(ECategory::PIECE);
		Respawned->SetPlayer(Player);
		Respawned->SetGridPosition(FinalPosition);

		Respawned->SetActorScale3D(GameField->SquareScale * GameField->PieceRelativeScale);

		GameField->PieceArray.Add(Respawned);
		GameField->PieceMap.Add(FinalPosition, Respawned);
	}
	
}

FVector AHistorical::GetSpawnLocation()
{
	int32 Size = MoveArray.Num();
	FVector Location = GetActorLocation();

	float InX = Location[0] - ((MoveSize[0] + Padding[0]) * (Size - (Size % 2)) / 2);
	float InY = Location[1] + ((MoveSize[1] + Padding[1]) * (MoveArray.Num() % 2));

	return FVector(InX, InY, 10);

}

TCHAR AHistorical::GetPieceSymbol(EPiece Type)
{
	TCHAR Symbol = '\0';

	switch (Type) {
		// Pawn not handled because it's already default value for Symbol

		case EPiece::ROOK: {
			Symbol = 'R';
			break;
		}

		case EPiece::KNIGHT: {
			Symbol = 'N';
			break;
		}

		case EPiece::BISHOP: {
			Symbol = 'B';
			break;
		}

		case EPiece::QUEEN: {
			Symbol = 'Q';
			break;
		}

		case EPiece::KING: {
			Symbol = 'K';
			break;
		}
	}

	return Symbol;

}

FString AHistorical::GetText(ADynamicPiece* Piece, AMove* Move, FVector2D Source, EPiece EatedType) {
	FString text = "\0";

	// define text for display which piece has been moved
	text.AppendChar(GetPieceSymbol(Piece->GetPiece()));

	// check if there has been an eat
	if (EatedType != EPiece::ANY)	// ANY is the used for display there has been no eat
	{
		// handle pawn case 
		if (Piece->GetPiece() == EPiece::PAWN)
		{
			// set starting column 
			TCHAR column = TEXT('a' + (Source.Y));
			text.Append(FString::Printf(TEXT("%c"), column));
		}

		// append "x" marker for show eat occurance
		text.Append("x");
	}
			
	// define final position
	TCHAR StartingColumn = TEXT('a' + (Piece->GetGridPosition().Y));
	text.Append(FString::Printf(TEXT("%c"), StartingColumn));	// y
	text.AppendInt(Piece->GetGridPosition().X + 1);	// x
	
	return text;
}