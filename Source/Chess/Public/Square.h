// GUASTAVINO ALESSIO - S4979339

#pragma once

#include "CoreMinimal.h"
#include "Components/TextRenderComponent.h"
#include "GameFramework/Actor.h"
#include "Square.generated.h"


UENUM()
enum class EColor : uint16
{
	WHITE	UMETA(DisplayName = "White"),
	BLACK	UMETA(DisplayName = "Black"),
	UN_DEF	UMETA(DisplayName = "Undefined")
};

UCLASS()
class CHESS_API ASquare : public AActor
{
	GENERATED_BODY()
	
public:	
	ASquare();

	FVector2D GetGridPosition();

	void SetGridPosition(const FVector2D Coordinates);
	
	EColor GetColor();

	void SetColor(const EColor NewColor);

protected:
	virtual void BeginPlay() override;

public:
	UPROPERTY(VisibleAnywhere)
	EColor Color;

	UPROPERTY(VisibleAnywhere)
	FVector2D GridPosition;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Components")
	USceneComponent* Scene;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Components")
	UStaticMeshComponent* MeshComponent;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Components")
	TArray<UTextRenderComponent*> TextComponents;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Components")
	UTextRenderComponent* AuxText;

};
