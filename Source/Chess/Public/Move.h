// GUASTAVINO ALESSIO - S4979339

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Components/TextRenderComponent.h"
#include "Move.generated.h"

UCLASS()
class CHESS_API AMove : public AActor
{
	GENERATED_BODY()
	
public:	
	AMove();

	void SetText(const FString NewText);

	FString GetText();

	void SetPiece(TCHAR NewPiece);

	TCHAR GetPiece();

	void SetStartingPosition(const FVector2D Position);

	FVector2D GetStartingPosition();

	void SetFinalPosition(const FVector2D Position);

	FVector2D GetFinalPosition();

protected:
	FString Text;
	// text attached and showed

	TCHAR Piece;
	// piece has made the move

	FVector2D StartingPosition;
	// start position of the piece

	FVector2D FinalPosition;
	// final position of the piece

	virtual void BeginPlay() override;

public:
	TCHAR EatenPiece;
	// display what has been eated
	
	int32 EatedPlayerIndex;
	// contains the player who has suffered the eat

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Components")
	USceneComponent* Scene;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Components")
	UStaticMeshComponent* MeshComponent;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Components")
	UTextRenderComponent* TextComponent;

};
