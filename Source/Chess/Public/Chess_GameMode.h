// GUASTAVINO ALESSIO - S4979339

#pragma once

#include "CoreMinimal.h"
#include "Chess_GameField.h"
#include "Chess_HumanPlayer.h"
#include "Historical.h"
#include "GameFramework/GameMode.h"
#include "Chess_PlayerInterface.h"
#include "Chess_GameMode.generated.h"


UCLASS()
class CHESS_API AChess_GameMode : public AGameModeBase
{
	GENERATED_BODY()
	
public:
	AChess_GameMode();

	void StartGame();

	void StartNextTurn();

	void GetNextPlayer();

	// return index of winnig player or (-1) if there is no winner yet
	int32 IsMatchOver();

	void OnClick();

	UFUNCTION(BlueprintCallable)
	void ResetField();


protected:
	virtual void BeginPlay() override;
	
	int32 CurrentPlayer;
	
	int32 MoveCount;

	bool IsGameOver;

public:
	TArray<IChess_PlayerInterface*> Players;

	AChess_GameField* GameField;

	AHistorical* MatchHistory;

	AChess_HumanPlayer* Human;

	bool IsAIWorking;

	UPROPERTY(EditDefaultsOnly)
	TSubclassOf<AChess_GameField> GameFieldClass;

	UPROPERTY(EditDefaultsOnly)
	TSubclassOf<AHistorical> MatchHistoryClass;

	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	int32 BoardSize;

	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	FVector	CameraPos;

	UPROPERTY(VisibleAnywhere)
	float Offset;
};
