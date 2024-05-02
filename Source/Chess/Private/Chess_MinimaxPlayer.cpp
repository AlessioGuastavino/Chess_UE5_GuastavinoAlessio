
#include "Chess_MinimaxPlayer.h"


AChess_MinimaxPlayer::AChess_MinimaxPlayer()
{
 	PrimaryActorTick.bCanEverTick = false;
	GameInstance = Cast<UChess_GameInstance>(UGameplayStatics::GetGameInstance(GetWorld()));

	MaxDepth = 2;
	MAX_VALUE = 1000;

	update_couter = 0;
}

void AChess_MinimaxPlayer::BeginPlay()
{
	Super::BeginPlay();

}

void AChess_MinimaxPlayer::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

bool AChess_MinimaxPlayer::IsInEatDanger(FVector2D Position, int32 Player)
{
	// Players indicates vulnerable player 
	// if it's human I must take AI piece and viceversa
	TArray<ADynamicPiece*> Opponent;
	Opponent = (Player == 1) ? GameMode->GameField->GetHumanPieces() : GameMode->GameField->GetAIPieces();

	for (int32 i = 0; i < Opponent.Num(); i++)
	{
		// taking all moves for this piece and removing unlegal ones
		TArray<FVector2D> Moves = Opponent[i]->GetPossibleMoves();

		for (int32 j = (Moves.Num() - 1); j >= 0; j--) 
		{
			if (!GameMode->GameField->IsValidMove(Opponent[i], Moves[j])) {
				Moves.RemoveAt(j);
			}
		}

		// Search trough all the moves
		for (int32 k = 0; k < Moves.Num(); k++)
		{
			// if one matches the position I'm looking into, it means there is an eat
			if (Moves[k].Equals(Position)) {
				return true;
			}
   		}
	}
	
	return false;
}

int32 AChess_MinimaxPlayer::EvaluateMove(ADynamicPiece* Piece, FVector2D Move) 
{
	int32 Score = 0;

	// return minimun value if AI king became under check mate
	ADynamicPiece* MyKing = GameMode->GameField->AIKing;
	if (MyKing)
	{
		TArray<FVector2D> KingMoves = MyKing->GetPossibleMoves();	// getting all positions
		for (int32 j = (KingMoves.Num() - 1); j >= 0; j--)
		{	//removing unlegal moves
			if (!GameMode->GameField->IsValidMove(MyKing, KingMoves[j])) {
				KingMoves.RemoveAt(j);
			}
		}
		
		// if there are no legal moves, means king is surrounded by your own pieces, search will lead to errors
		if (KingMoves.Num() > 0) 
		{
			KingMoves.Add(MyKing->GetGridPosition());
			int32 i = 0;
			while (i < KingMoves.Num() && GameMode->GameField->IsMoveBlocked(KingMoves[i], 1)) {
				i++;
			}

			if (i == KingMoves.Num()) {
				Score = (-1) * MAX_VALUE;
				return Score;
			}
		}
	}

	// return maximum value if you make human king under check mate
	ADynamicPiece* HumanKing = GameMode->GameField->HumanKing;
	if (HumanKing) 
	{
		TArray<FVector2D> KingMoves = HumanKing->GetPossibleMoves();	// getting all positions
		for (int32 j = (KingMoves.Num() - 1); j >= 0; j--)
		{	//removing unlegal moves
			if (!GameMode->GameField->IsValidMove(HumanKing, KingMoves[j])) {
				KingMoves.RemoveAt(j);
			}
		}

		if (KingMoves.Num() > 0)
		{	
			KingMoves.Add(HumanKing->GetGridPosition());
			int32 i = 0;
			while (i < KingMoves.Num() && GameMode->GameField->IsMoveBlocked(KingMoves[i], 0)) {
				i++;
			}

			if (i == KingMoves.Num()) {
				Score = MAX_VALUE;
				return Score;
			}
		}		
	}
	
	// return a negative value if it imply suffering an hit
	if (IsInEatDanger(Move, 1)) 
	{	
		Score = (-1) * Piece->GetValue();
		return Score;
	}

	// return a positive value if it imply scoring an hit
	if (IsInEatDanger(Move, 0))
	{
		Score = Piece->GetValue();
		return Score;
	}

	// this move can't do so much, return 0
	return Score;
}

int32 AChess_MinimaxPlayer::Minimax(ADynamicPiece* Piece, FVector2D Move, int32 Depth, bool IsMax, int32 alpha, int32 beta)
{
	int32 Score = EvaluateMove(Piece, Move);

	// win move
	if (Score == MAX_VALUE) {
		return Score;
	}

	// on lose move
	if (Score == (-1) * MAX_VALUE) {
		return Score;
	}

	if (Depth < 0) {
		return Score;
	}

	// Get starting position
	FVector2D Source = Piece->GetGridPosition();
	
	// updating piece grid position
	Piece->SetGridPosition(Move);

	// Maximizer move
	if (IsMax) {
		int32 Best = (-1) * MAX_VALUE;

		TArray<ADynamicPiece*> MyPieces = GameMode->GameField->GetAIPieces();

		for (int32 k = 0; k < MyPieces.Num(); k++) 
		{
			// getting all possible moves
			TArray<FVector2D> Moves = MyPieces[k]->GetPossibleMoves();

			// removing unlegal one
			for (int32 j = (Moves.Num() - 1); j >= 0; j--)
			{
				if (!GameMode->GameField->IsValidMove(MyPieces[k], Moves[j])) {
					Moves.RemoveAt(j);
				}
			}

			if (Moves.Num() == 0) {
				continue;
			}

			// traverse all moves
			for (int32 i = 0; i < Moves.Num(); i++)
			{
				Best = FMath::Max(Best, Minimax(MyPieces[k], Moves[i], (Depth - 1), !IsMax, alpha, beta));

				// alpha-beta pruning
				if (Best >= beta) {
					// restoring piece grid position
					Piece->SetGridPosition(Source);

					return Best;
				}

				alpha = FMath::Max(alpha, Best);
			}
		}

		// restoring piece grid position

		Piece->SetGridPosition(Source);
	
		return Best;
	}
	else {	// Minimizer move
		int32 Best = MAX_VALUE;
		
		// taking reference to the human pieces for evaluate worst possible moves.
		// worst as the point of view of how much "damage" can do to AI
		TArray<ADynamicPiece*> Opponent = GameMode->GameField->GetHumanPieces();

		for (int32 i = 0; i < Opponent.Num(); i++) 
		{
			// getting all this piece possible moves
			TArray<FVector2D> Moves = Opponent[i]->GetPossibleMoves();

			// removing unlegal one
			for (int32 j = (Moves.Num() - 1); j >= 0; j--)
			{
				if (!GameMode->GameField->IsValidMove(Opponent[i], Moves[j])) {
					Moves.RemoveAt(j);
				}
			}

			if (Moves.Num() == 0) {
				continue;
			}

			for (int32 k = 0; k < Moves.Num(); k++)
			{		
				Best = FMath::Min(Best, Minimax(Opponent[i], Moves[k], (Depth - 1), !IsMax, alpha, beta));

				// alpha-beta pruning
				if (Best <= alpha) {
					// restoring piece grid position
					Piece->SetGridPosition(Source);

					return Best;
				}

				beta = FMath::Min(Best, beta);
			}
		}

		// restoring piece grid position
		Piece->SetGridPosition(Source);

		return Best;

	}
}

TPair<int32, FVector2D> AChess_MinimaxPlayer::FindPieceBestMove(ADynamicPiece* Piece, TArray<FVector2D> Moves)
{
	int32 MIN_VALUE = (-1) * MAX_VALUE;
	
	// This variable is used for specify destination grid position (field Key) and the score gained by the move (field Value)
	TPair<int32, FVector2D> Best(MIN_VALUE, FVector2D(-1, -1));
	
	// store starting grid position
	FVector2D Source = Piece->GetGridPosition();

	for (int32 k = 0; k < Moves.Num(); k++) 
	{
		int32 score = Minimax(Piece, Moves[k], MaxDepth, false, Best.Key, MAX_VALUE);
			
		// update best score if necessary
		if (score > Best.Key) {
			Best.Key = score;
			Best.Value = Moves[k];
		}
	}

	return Best;
}

void AChess_MinimaxPlayer::OnTurn()
{
	GameInstance->SetTurnMessage(TEXT("Minimax IA turn"));
	GameInstance->SetInfoMessage(TEXT(""));

	FTimerHandle TimerHandle;

	GetWorld()->GetTimerManager().SetTimer(TimerHandle, [&]() 
		{
			ADynamicPiece* bestPiece;
			FVector2D bestDestination(0, 0);
			int32 bestScore = (-1)*MAX_VALUE;

			// contains moves with all max score
			TArray<FVector2D> EqualValuedMove;
			// contains pieces with equals move score
			TArray<ADynamicPiece*> EqualValuedPiece;

			// test on GameMode cast
			if (GameMode = Cast<AChess_GameMode>(GetWorld()->GetAuthGameMode()))
			{
				// taking every remaing ai pieces
				TArray<ADynamicPiece*> MyPieces = GameMode->GameField->GetAIPieces();
				bestPiece = MyPieces[0];

				for(int32 i = 0; i < MyPieces.Num(); i++)
				{
					// getting all possible moves (unlegal still included)
					TArray<FVector2D> Moves = MyPieces[i]->GetPossibleMoves();

					// removing unlegal ones
					for (int32 j = (Moves.Num() - 1); j >= 0; j -= 1) 
					{
						if (!GameMode->GameField->IsValidMove(MyPieces[i], Moves[j]))
						{
							Moves.RemoveAt(j);
						}
					}

					// if there are no moves that can effectively be done, skip this iteration
					if (Moves.Num() == 0) 
					{
						continue;
					}

					TPair<int32, FVector2D> result = FindPieceBestMove(MyPieces[i], Moves);
			
					if (result.Key >= bestScore) 
					{
						if (result.Key == bestScore)
						{	// if the value is equal I add piece and move at their rispective array
							EqualValuedMove.Add(result.Value);
							EqualValuedPiece.Add(MyPieces[i]);
						}
						else {
							bestScore = result.Key;
							bestDestination = result.Value;
							bestPiece = MyPieces[i];
							EqualValuedMove.Empty();
							EqualValuedPiece.Empty();
						}	
					}
				}	
				
				
				if ((EqualValuedMove.Num() > 0) && (EqualValuedPiece.Num() >0)) {
					int32 index = FMath::Rand() % EqualValuedMove.Num();
					bestDestination = EqualValuedMove[index];
					bestPiece = EqualValuedPiece[index];
				}
				
				FVector2D Source = bestPiece->GetGridPosition();

				// carry-out move
				EPiece WhatHasBeenEated = GameMode->GameField->MakeMove(bestPiece, bestDestination);

				// checking if promotion is available
				if (bestPiece->IsPromotionPosition()) {
					GameMode->GameField->PromotePiece(bestPiece, EPiece::QUEEN);
				}

				GameMode->MatchHistory->AddMove(bestPiece, Source, WhatHasBeenEated);

				GameMode->StartNextTurn();
			}
			else {
				GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, TEXT("No GameMode"));
			}
		
		}, 4, false);
}

void AChess_MinimaxPlayer::OnWin()
{
	GameInstance->SetTurnMessage(TEXT("Random AI wins!"));
	GameInstance->IncrementAIScore();
}

void AChess_MinimaxPlayer::OnLose()
{
}


