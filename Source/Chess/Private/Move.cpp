
#include "Move.h"


AMove::AMove()
{
	PrimaryActorTick.bCanEverTick = false;

	Scene = CreateDefaultSubobject<USceneComponent>(TEXT("Scene"));
	MeshComponent = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("StaticMeshComponent"));
	TextComponent = CreateDefaultSubobject<UTextRenderComponent>(TEXT("Text"));

	SetRootComponent(Scene);
	MeshComponent->SetupAttachment(Scene);
	TextComponent->SetupAttachment(Scene);
}

void AMove::BeginPlay()
{
	Super::BeginPlay();

}

void AMove::SetText(const FString NewText)
{
	Text = NewText;
	TextComponent->SetText(FText::FromString(NewText));
}

FString AMove::GetText()
{
	return Text;
}

void AMove::SetPiece(TCHAR NewPiece)
{
	Piece = NewPiece;
}

TCHAR AMove::GetPiece()
{
	return Piece;
}

void AMove::SetStartingPosition(const FVector2D Position)
{
	StartingPosition = Position;
}

FVector2D AMove::GetStartingPosition()
{
	return StartingPosition;
}

void AMove::SetFinalPosition(const FVector2D Position)
{
	FinalPosition = Position;
}

FVector2D AMove::GetFinalPosition()
{
	return FinalPosition;
}
