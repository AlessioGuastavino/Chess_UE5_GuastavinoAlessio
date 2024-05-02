// GUASTAVINO ALESSIO - S4979339

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Pawn.h"
#include "Square.h"
#include "DynamicPiece.h"
#include "Chess_GameInstance.h"
#include "Chess_PlayerInterface.h"
#include "Camera/CameraComponent.h"
#include "Kismet/GameplayStatics.h"
#include "Chess_HumanPlayer.generated.h"

UENUM()
enum class EState : int16 {
	UNCHOSEN	UMETA(DisplayName = "Unchosen"),	// When I haven't decided the piece to move yet
	SELECTED	UMETA(DisplayName = "Selected"),	// When I already selected a piece to move, you can deselect the piece riclickisng it
	PROMOTION	UMETA(DisplayName = "Promotion")	// A state used for choose the piece type to promote a Pawn
};

UCLASS()
class CHESS_API AChess_HumanPlayer : public APawn, public IChess_PlayerInterface
{
	GENERATED_BODY()

public:
	AChess_HumanPlayer();

	bool GetMyTurn();

	void SetMyTurnOver();

	virtual void OnTurn() override;
	virtual void OnWin() override;
	virtual void OnLose() override;

	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

	UFUNCTION()
	void OnClick(ADynamicPiece* Clicked);


	UCameraComponent* Camera;
	UChess_GameInstance* GameInstance;


protected:
	virtual void BeginPlay() override;

	bool IsMyTurn;

	// Reference to the clicked piece;
	ADynamicPiece* PieceSelected;

	// This variable shows the state of human turn
	EState MoveState;			
};
