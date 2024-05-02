// GUASTAVINO ALESSIO - S4979339

#pragma once

#include "CoreMinimal.h"
#include "Engine/GameInstance.h"
#include "Chess_GameInstance.generated.h"


UCLASS()
class CHESS_API UChess_GameInstance : public UGameInstance
{
	GENERATED_BODY()

public:

	void IncrementHumanScore();
	
	void IncrementAIScore();

	UFUNCTION(BlueprintCallable) 
	int32 GetHumanScore();
	
	UFUNCTION(BlueprintCallable) 
	int32 GetAIScore();

	UFUNCTION(BlueprintCallable)
	FString GetTurnMessage();

	UFUNCTION(BlueprintCallable)
	void SetTurnMessage(FString Message);

	UFUNCTION(BlueprintCallable)
	FString GetInfoMessage();

	UFUNCTION(BlueprintCallable)
	void SetInfoMessage(FString Message);


	UPROPERTY(EditAnywhere)
	int32 HumanScore = 0;

	UPROPERTY(EditAnywhere)
	int32 AIScore = 0;

	UPROPERTY(EditAnywhere)
	FString TurnMessage = "Current Player";

	UPROPERTY(EditAnywhere)
	FString InfoMessage = "";

};
