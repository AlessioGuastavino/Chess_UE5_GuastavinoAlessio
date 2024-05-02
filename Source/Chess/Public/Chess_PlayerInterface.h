// GUASTAVINO ALESSIO - S4979339

#pragma once

#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "Chess_PlayerInterface.generated.h"


UINTERFACE(MinimalAPI)
class UChess_PlayerInterface : public UInterface
{
	GENERATED_BODY()
};

class CHESS_API IChess_PlayerInterface
{
	GENERATED_BODY()

public:
	virtual void OnTurn() {};
	virtual void OnWin() {};
	virtual void OnLose() {};
	
	int32 Number;
};
