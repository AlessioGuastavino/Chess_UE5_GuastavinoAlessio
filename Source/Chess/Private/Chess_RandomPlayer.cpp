
#include "Chess_RandomPlayer.h"


AChess_RandomPlayer::AChess_RandomPlayer()
{
	PrimaryActorTick.bCanEverTick = false;

	GameInstance = Cast<UChess_GameInstance>(UGameplayStatics::GetGameInstance(GetWorld()));
}

void AChess_RandomPlayer::BeginPlay()
{
	Super::BeginPlay();

}

void AChess_RandomPlayer::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);
}

void AChess_RandomPlayer::OnTurn()
{
	GameInstance->SetTurnMessage(TEXT("Random IA turn"));
	GameInstance->SetInfoMessage(TEXT(""));

	FTimerHandle TimerHandle;

	GetWorld()->GetTimerManager().SetTimer(TimerHandle, [&]() 
		{
			if (AChess_GameMode* GameMode = Cast<AChess_GameMode>(GetWorld()->GetAuthGameMode()))
			{
				// using a semaphore for blocking other possible execution of IA players
				if (GameMode->IsAIWorking) {
					return;
				}
				
				GameMode->IsAIWorking = true;

				// get every pieces owned by AI 
				TArray<ADynamicPiece*> AIPieces = GameMode->GameField->GetAIPieces();
				// array of moves allowed based not only on piece's type but also on ChessBoard current configuration
				TArray<FVector2D> Moves;

				// reference to the piece the AI decide to move
				ADynamicPiece* MovableObj;

				// index of the piece AI decide to move
				int32 RandomPiece;
				// index of the move (at setted piece) AI wants to fulfill 
				int32 RandomMove;

				// finding a piece with at least one move really executable
				do {
					RandomPiece = FMath::Rand() % AIPieces.Num();
					MovableObj = AIPieces[RandomPiece];

					// array of moves allowed based on piece's type
					TArray<FVector2D> TheoricalMoves = MovableObj->GetPossibleMoves();

					// there are removed all illegal moves based on ChessBoard current configuration
					for (int32 i = 0; i < TheoricalMoves.Num(); i++)
					{
						if (GameMode->GameField->IsValidMove(MovableObj, TheoricalMoves[i])) {
							// if the move is valid, I add it
							Moves.Add(TheoricalMoves[i]);
						}
					}

				// repeat this instruction until piece chose can go somewhere
				} while (Moves.Num() == 0);
				
				// I take note of the position from which the move starts
				FVector2D StartingPosition = MovableObj->GetGridPosition();

				// selecting where to go from the moves I can fullfill
				RandomMove = FMath::Rand() % Moves.Num();
				
				// making the move
				EPiece WhatHasBeenEated = GameMode->GameField->MakeMove(MovableObj, Moves[RandomMove]);
			
				if (MovableObj->IsPromotionPosition()) 
				{	// piece can be promoted, randomly selecting into which type promote
					int32 PieceIndex = FMath::Rand() % 4;
					EPiece NewPieceKind = EPiece::ROOK;

					switch (PieceIndex) {
						case 0: {
							NewPieceKind = EPiece::ROOK;
							break;
						}
						case 1: {
							NewPieceKind = EPiece::KNIGHT;
							break;
						}

						case 2: {
							NewPieceKind = EPiece::BISHOP;
							break;
						}

						case 3: {
							NewPieceKind = EPiece::QUEEN;
							break;
						}
					}
					// applying promotion
					GameMode->GameField->PromotePiece(MovableObj, NewPieceKind);
				}
				// add just completed move to history
				GameMode->MatchHistory->AddMove(MovableObj, StartingPosition, WhatHasBeenEated);
				
				// freeing AI execution
				GameMode->IsAIWorking = false;

				GameMode->StartNextTurn();
			}
			else {
				GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Black, TEXT("No GameMode"));
			}
		}, 4, false);

}

void AChess_RandomPlayer::OnWin()
{
	GameInstance->SetTurnMessage(TEXT("Random AI wins!"));
	GameInstance->IncrementAIScore();
}

void AChess_RandomPlayer::OnLose()
{

}



