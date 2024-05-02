
#include "Chess_GameInstance.h"


void UChess_GameInstance::IncrementHumanScore()
{
	HumanScore += 1;
}

void UChess_GameInstance::IncrementAIScore()
{
	AIScore += 1;
}

int32 UChess_GameInstance::GetHumanScore()
{
	return HumanScore;
}

int32 UChess_GameInstance::GetAIScore()
{
	return AIScore;
}

FString UChess_GameInstance::GetTurnMessage()
{
	return TurnMessage;
}

void UChess_GameInstance::SetTurnMessage(FString Message)
{
	TurnMessage = Message;
}

FString UChess_GameInstance::GetInfoMessage()
{
	return InfoMessage;
}

void UChess_GameInstance::SetInfoMessage(FString Message)
{
	InfoMessage = Message;
}
