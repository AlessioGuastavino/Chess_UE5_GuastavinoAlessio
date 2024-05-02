
#include "Square.h"


ASquare::ASquare()
{
	PrimaryActorTick.bCanEverTick = false;

	Scene = CreateDefaultSubobject<USceneComponent>(TEXT("Scene"));
	MeshComponent = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("StaticMeshComponent"));
	UTextRenderComponent* text = CreateDefaultSubobject<UTextRenderComponent>(TEXT("TextRenderComponent"));
	AuxText = CreateDefaultSubobject<UTextRenderComponent>(TEXT("auxTextRenderComponent"));
	
	SetRootComponent(Scene);
	MeshComponent->SetupAttachment(Scene);
	text->SetupAttachment(Scene);
	TextComponents.Add(text);
	AuxText->SetupAttachment(Scene);	
}

void ASquare::BeginPlay()
{
	Super::BeginPlay();

}

FVector2D ASquare::GetGridPosition()
{
	return GridPosition;
}

void ASquare::SetGridPosition(const FVector2D Coordinates)
{
	GridPosition.X = Coordinates.X;
	GridPosition.Y = Coordinates.Y;
}

EColor ASquare::GetColor()
{
	return Color;
}

void ASquare::SetColor(const EColor NewColor)
{
	Color = NewColor;
}

