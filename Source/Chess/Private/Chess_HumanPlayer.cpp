
#include "Chess_HumanPlayer.h"
#include "Chess_GameMode.h"
#include "Components/InputComponent.h"
#include "EnhancedInputComponent.h"
#include "EnhancedInputSubsystems.h"


AChess_HumanPlayer::AChess_HumanPlayer()
{
	PrimaryActorTick.bCanEverTick = false;

	AutoPossessPlayer = EAutoReceiveInput::Player0;

	GameInstance = Cast<UChess_GameInstance>(UGameplayStatics::GetGameInstance(GetWorld()));

	Camera = CreateDefaultSubobject<UCameraComponent>(TEXT("Camera"));
	SetRootComponent(Camera);

	MoveState = EState::UNCHOSEN;
	
	Number = -1;
}

void AChess_HumanPlayer::BeginPlay()
{
	Super::BeginPlay();

}

void AChess_HumanPlayer::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);
}

void AChess_HumanPlayer::OnClick(ADynamicPiece* Clicked)
{
	
	// Ensuring the click is occured during human turn
	if (IsMyTurn) 
	{
		// Safety check on GameMode cast
		if (AChess_GameMode* GameMode = Cast<AChess_GameMode>(GetWorld()->GetAuthGameMode()))
		{
				
			switch (MoveState) 
			{	
				case EState::UNCHOSEN: {	// There is no selected piece
				// This can occur at beginnig of a new turn or when you make a deselect


					// Check for ensure that the player hasn't clicked an opponent piece
					if (Clicked->GetPlayer() != Number) {
						break;
					}

					// I call GameField's method for spawn each possible (and legal) moves
					// The method return the number of actually spawned moves
					if (GameMode->GameField->SpawnMoves(Clicked) > 0) {
						MoveState = EState::SELECTED;

						// Is stored the piece selected for forthcoming use
						PieceSelected = Clicked;			

						GameInstance->SetInfoMessage(TEXT("Piece picked"));
					}
					else {
						// The piece selected is unable to move (it append for the whole first line pieces exept knight in first turns)
						GameInstance->SetInfoMessage(TEXT("This piece cannot move!"));
					}
						
					break;
				}

				
				case EState::SELECTED: {
					// A piece is already been selected, in the case below there is managment of deselect or move applying
					
					// The piece you clicked is the same as the previous one click, deselect handler
					if (PieceSelected == Clicked) 
					{	
						GameInstance->SetInfoMessage(TEXT("Piece released"));
							
						// Everything must be taken back as you never choose a piece
						MoveState = EState::UNCHOSEN;
						PieceSelected = nullptr;
						GameMode->GameField->UnspawnMoves();
					} 
						
					// The move has been chose 
					if (Clicked->GetCategory() == ECategory::MOVE)
					{
						FVector2D StartingPosition = PieceSelected->GetGridPosition();
					
						EPiece WhatHasBeenEated = GameMode->GameField->MakeMove(PieceSelected, Clicked->GetGridPosition());

						// Check if a pawn has reached other side of the chessboard for its promotion
						if (PieceSelected->IsPromotionPosition()) {
							MoveState = EState::PROMOTION;

							// Improper use of the turn message
							GameInstance->SetTurnMessage(TEXT("Promote pawn!"));
							// Given instruction for how to promote a pawn
							GameInstance->SetInfoMessage(TEXT("Click an example piece"));

							// Remove every move actor
							GameMode->GameField->UnspawnMoves();

						}
						else {
							GameInstance->SetInfoMessage(TEXT("Move completed!"));

							// Add the move to match history
							GameMode->MatchHistory->AddMove(PieceSelected, StartingPosition, WhatHasBeenEated);

							// Set this turn over
							PieceSelected = nullptr;
							MoveState = EState::UNCHOSEN;
							SetMyTurnOver();

							// Remove every move actor
							GameMode->GameField->UnspawnMoves();

							// Call GameMode for ending my turn and start AI one
							GameMode->StartNextTurn();
						}

					}

					break;
				}

				case EState::PROMOTION: {

					// Check if has been click an human pieces different than king or pawn
					if ((Clicked->GetPlayer() == Number) && (Clicked->GetPiece() != EPiece::KING) && (Clicked->GetPiece() != EPiece::PAWN)) 
					{
						// Calling GameField for promote the piece
						GameMode->GameField->PromotePiece(PieceSelected, Clicked->GetPiece());

						MoveState = EState::UNCHOSEN;
						PieceSelected = nullptr;

						SetMyTurnOver();
						GameMode->StartNextTurn();
					}

					break;
				}
			}
		}
		else {
			UE_LOG(LogTemp, Error, TEXT("Error in GameMode cast"));
		}
	}

}

bool AChess_HumanPlayer::GetMyTurn()
{
	return IsMyTurn;
}

void AChess_HumanPlayer::SetMyTurnOver()
{
	if (IsMyTurn) {
		IsMyTurn = false;
	}
}

void AChess_HumanPlayer::OnTurn()
{
	IsMyTurn = true;
	GameInstance->SetTurnMessage(TEXT("Human Turn"));
}

void AChess_HumanPlayer::OnWin()
{
	GameInstance->SetTurnMessage(TEXT("Human wins!"));
	GameInstance->IncrementHumanScore();
}

void AChess_HumanPlayer::OnLose()
{
	GameInstance->SetTurnMessage(TEXT("Human loses!"));
}
