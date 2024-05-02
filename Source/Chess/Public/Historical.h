// GUASTAVINO ALESSIO - S4979339

#pragma once

#include "CoreMinimal.h"
#include "Move.h"
#include "Chess_GameField.h"
#include "GameFramework/Actor.h"
#include "Historical.generated.h"

UCLASS()
class CHESS_API AHistorical : public AActor
{
	GENERATED_BODY()
	
public:
	AHistorical();

	// Check if the clicked moved is older or newer than current chess board
	void OnClick(AMove* Move);

	// called every time it's made a move, there is an initial control for remove possible subsquent moves
	// WhatHasBeenEated carries info about the eat (if is equals to EPiece::ANY, nothing has been eat)
	void AddMove(ADynamicPiece* Piece, FVector2D Source, EPiece WhatHasBeenEated);

	// this method is called when I start a new match
	void ResetHistorical();

	// take the grid back to a previous state 
	void BackwardReplay(const int32 Selected);
	
	// start from an older state go to newer one until the selected one is reached
	void ForwardReplay(const int32 Selected);
	
	// respawn a piece that was eaten
	void RespawnEatenPiece(AMove* Move);

	// allow to spawn AI moves marker on the right and Human moves on the left
	FVector GetSpawnLocation();

	// return the associated symbol of each piece, used when i need to compose text move
	TCHAR GetPieceSymbol(EPiece Type);

	// build the text that needs to be attached to a move actor
	FString GetText(ADynamicPiece* Piece, AMove* Move, FVector2D Source, EPiece EatedType);


protected:
	virtual void OnConstruction(const FTransform& Transform) override;

	virtual void BeginPlay() override;

public:
	int32 CurrentMove;		
	// contains index of actual chessboard configuration (CurrentMove == 1 means there is just one done move)
	
	int32 CurrentTurnHolder;
	// indicate which player is holding turn

	TArray<AMove*> MoveArray;
	// contains every move that has been spawned
	
	FVector MoveScale;
	// define scale of move actor

	AChess_GameField* GameField;
	// GameField reference

	UPROPERTY(EditAnywhere)
	TSubclassOf<AMove> MoveClass;


// All of the following UProperty describe Move positioning and sizing
	UPROPERTY(EditAnywhere, BlueprintReadOnly)	
	FVector MoveSize;

	UPROPERTY(EditAnywhere, BlueprintReadOnly)	
	FVector Padding;

	UPROPERTY(EditAnywhere, BlueprintReadOnly)	
	float Displacement;	// Displacement from game field

};
