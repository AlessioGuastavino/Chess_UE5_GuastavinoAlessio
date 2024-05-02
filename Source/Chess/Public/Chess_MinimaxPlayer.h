// GUASTAVINO ALESSIO - S4979339

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Pawn.h"
#include "Chess_PlayerInterface.h"
#include "Chess_GameInstance.h"
#include "Chess_GameMode.h"
#include "Kismet/GameplayStatics.h"
#include "Chess_MinimaxPlayer.generated.h"

UCLASS()
class CHESS_API AChess_MinimaxPlayer : public APawn, public IChess_PlayerInterface
{
	GENERATED_BODY()

public:
	AChess_MinimaxPlayer();
	
	// Check if the position is potentially exposed to eat by the human
	bool IsInEatDanger(FVector2D Position, int32 Player);

	// Assign a value to indicated position
	int32 EvaluateMove(ADynamicPiece* Piece, FVector2D Position);	

	int32 Minimax(ADynamicPiece* Piece, FVector2D Move, int32 Depth, bool IsMax, int32 alpha, int32 beta); 

	// search the high-valued move for a given piece
	TPair<int32, FVector2D> FindPieceBestMove(ADynamicPiece* Piece, TArray<FVector2D> Moves);

	virtual void OnTurn() override;
	virtual void OnWin() override;
	virtual void OnLose() override;

	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

	UChess_GameInstance* GameInstance;
	AChess_GameMode* GameMode;

	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	int32 MaxDepth;	// maximum depth of minimax search

protected:
	virtual void BeginPlay() override;

	int32 MAX_VALUE;

	int32 update_couter;

};
