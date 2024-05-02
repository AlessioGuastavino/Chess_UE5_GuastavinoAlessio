
#include "Chess_GameMode.h"
#include "Chess_PlayerController.h"
#include "Chess_RandomPlayer.h"
#include "Chess_MinimaxPlayer.h"
#include "EngineUtils.h"


AChess_GameMode::AChess_GameMode()
{
	PlayerControllerClass = AChess_PlayerController::StaticClass();
	DefaultPawnClass = AChess_HumanPlayer::StaticClass();

	BoardSize = 8;
	CameraPos = FVector(0, 0, 1000.f);

	MoveCount = 0;

	IsGameOver = false;
	IsAIWorking = false;
}

void AChess_GameMode::BeginPlay()
{
	Super::BeginPlay();

	Human = Cast<AChess_HumanPlayer>(*TActorIterator<AChess_HumanPlayer>(GetWorld()));

	if (GameFieldClass != nullptr) {
		GameField = GetWorld()->SpawnActor<AChess_GameField>(GameFieldClass);
		GameField->BoardSize = BoardSize;
		GameField->SpawnChessBoard();


		if (MatchHistoryClass != nullptr) {
			MatchHistory = GetWorld()->SpawnActor<AHistorical>(MatchHistoryClass, FVector(0, 0, 0), FRotator::ZeroRotator);
			
			float placement = (GameField->SquareSize * GameField->NormalizedPadding) * (BoardSize - 1);
			FVector Location = GameField->GetActorLocation() + FVector(placement + (placement/(2*BoardSize)), placement + MatchHistory->Displacement, 0);
			MatchHistory->SetActorLocation(Location);
			MatchHistory->GameField = GameField;
		}
		else {
			UE_LOG(LogTemp, Error, TEXT("MatchHistory is null"));
		}

	}
	else {
		UE_LOG(LogTemp, Error, TEXT("GameField is null"));
	}
	
	const float CameraPosX = (((GameField->BoardSize-1)*(GameField->SquareSize+GameField->Padding))/2);
	const float CameraPosY = CameraPosX + (0.5 * (MatchHistory->Displacement + MatchHistory->Padding[1] + (GameField->SquareSize / 2)));
	Human->SetActorLocationAndRotation(CameraPos + FVector(CameraPosX, CameraPosY, 0), FRotationMatrix::MakeFromX(FVector(0, 0, -1)).Rotator());

		// Random
	//auto* AI = GetWorld()->SpawnActor<AChess_RandomPlayer>(FVector(), FRotator() );
		
		// Minimax
	auto* AI = GetWorld()->SpawnActor<AChess_MinimaxPlayer>(FVector(), FRotator());

	//Adding players
	Players.Add(Human);
	Players.Add(AI);

	this->StartGame();
}

void AChess_GameMode::StartGame()
{
	MoveCount += 1;

	for (int i = 0; i < Players.Num(); i++) {
		Players[i]->Number = i;
	}

	CurrentPlayer = 0;
	Players[CurrentPlayer]->OnTurn();
}

void AChess_GameMode::ResetField()
{
	GameField->ResetChessBoard();
	MatchHistory->ResetHistorical();

	StartGame();
}

void AChess_GameMode::StartNextTurn()
{
	// getting match finish parameter
	int32 Loser = IsMatchOver();

	if (Loser != -1) 
	{
		// setting lose message
		Players[Loser]->OnLose();
		// setting win message
		for (int32 k = 0; k < Players.Num(); k++)
		{
			if (k != Loser) {
				Players[k]->OnWin();
			}
		}

		// calling field reset
		FTimerHandle TimerHandle;
		GetWorld()->GetTimerManager().SetTimer(TimerHandle, [&]() {
			ResetField();
			}, 7, false); 
	}
	else {
		GetNextPlayer();
		MoveCount += 1;

		Players[CurrentPlayer]->OnTurn();
	}
	
}

void AChess_GameMode::GetNextPlayer()
{
	CurrentPlayer += 1;

	if (!Players.IsValidIndex(CurrentPlayer)) {
		CurrentPlayer = 0;
	}

}

int32 AChess_GameMode::IsMatchOver()
{
	int32 Loser = -1;

	// this bools are used for exclude a king from chessmate search if has no move
	// due to the position of its own pieces
	bool isHumanKingExcluded = false;
	bool isAIKingExcluded = false;

	// references to both kings
	ADynamicPiece* HumanKing = GameField->HumanKing;
	ADynamicPiece* AIKing = GameField->AIKing;

	if (HumanKing == nullptr) {
		return 0;
	}

	if (AIKing == nullptr) {
		return 1;
	}

	// taking all possible moves for both king
	TArray<FVector2D> HumanKingMoves = HumanKing->GetPossibleMoves();
	TArray<FVector2D> AIKingMoves = AIKing->GetPossibleMoves();

	// parse of human king moves
	int32 HumanSize = HumanKingMoves.Num();
	for (int32 j = (HumanSize-1); j >= 0; j -= 1) 
	{
		if (!GameField->IsValidMove(HumanKing, HumanKingMoves[j]))
		{
			HumanKingMoves.RemoveAt(j);
		}
	}

	// parse of AI king moves
	int32 AISize = AIKingMoves.Num();
	for (int32 k = (AISize - 1); k >= 0; k -= 1) 
	{
		//FVector2D CurrentMove = AIKingMoves[k];
		if (!GameField->IsValidMove(AIKing, AIKingMoves[k]))
		{
			AIKingMoves.RemoveAt(k);
		}
	}

	// at this point I have every possible move of both king

	// check if one or both king are exluded from checkmate search
	isHumanKingExcluded = (HumanKingMoves.Num() == 0);
	isAIKingExcluded = (AIKingMoves.Num() == 0);

	if (!isHumanKingExcluded)
	{// search for human king under AI checkmate
		
		int32 i = 0;

		// Interrupt when I run through each piece or I found a free move
		while (i < HumanKingMoves.Num() && GameField->IsMoveBlocked(HumanKingMoves[i], 0)) {
			i += 1;
		}

		if (i == HumanKingMoves.Num()) {
			// Human king is blocked, human loss.
			Loser = 0;
			// I already found a loser player, it's not necessary look also for other king
			isAIKingExcluded = true;
		}

	}

	if (!isAIKingExcluded)
	{// search for AI king under human checkmate
		
		int32 i = 0;

		// Interrupt when I run through each piece or I found a free move
		while (i < AIKingMoves.Num() &&		GameField->IsMoveBlocked(AIKingMoves[i], 1)) {
			i += 1;
		}

		if (i == AIKingMoves.Num()) {
			// AI lose
			Loser = 1;
		}
	}
 
	return Loser;
}

void AChess_GameMode::OnClick()
{
	FHitResult Hit = FHitResult(ForceInit);
	GetWorld()->GetFirstPlayerController()->GetHitResultUnderCursor(ECollisionChannel::ECC_Pawn, true, Hit);

	if(Hit.bBlockingHit)
	{
		if (ADynamicPiece* Piece = Cast<ADynamicPiece>(Hit.GetActor()))
		{
			Human->OnClick(Piece);
		}
		else if (AMove* Move = Cast<AMove>(Hit.GetActor())) 
		{
			MatchHistory->OnClick(Move);
			CurrentPlayer = MatchHistory->CurrentTurnHolder;

			if (CurrentPlayer == 0) {
				Human->SetMyTurnOver();
			}

			StartNextTurn();
		}
	}


}
