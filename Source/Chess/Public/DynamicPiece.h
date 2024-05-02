// GUASTAVINO ALESSIO - S4979339

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "DynamicPiece.generated.h"


// This class provides a base class for suggested move and piece blueprints
UENUM()
enum class ECategory : uint32 {
	MOVE		UMETA(DisplayName = "Move"),
	PIECE		UMETA(DisplayName = "Piece"),
	UN_DEF		UMETA(DisplayName = "Undefined")
};

UENUM()
enum class EPiece : uint32 {
	ANY			UMETA(DisplayName = "Undefined"),
	ROOK		UMETA(DisplayName = "Rook"),
	KNIGHT		UMETA(DisplayName = "Knight"),
	BISHOP		UMETA(DisplayName = "Bishop"),
	PAWN		UMETA(DisplayName = "Pawn"),
	QUEEN		UMETA(DisplayName = "Queen"),
	KING		UMETA(DisplayName = "King")
};

UCLASS()
class CHESS_API ADynamicPiece : public AActor
{
	GENERATED_BODY()
	
public:	
	ADynamicPiece();

	ECategory GetCategory();

	void SetCategory(const ECategory NewCategory);

	EPiece GetPiece();

	void SetPiece(const EPiece NewPiece);

	FVector2D GetGridPosition();

	void SetGridPosition(const FVector2D Coordinates);

	int32 GetPlayer();	// metodo get per il giocatore

	void SetPlayer(const int32 NewPlayer);	// metodo set per il giocatore

	int32 GetValue();

	char GetAssociatedSymbol();

	TArray<FVector2D> GetPossibleMoves(); // Based on piece type, define all possible movement (included ones outside the board or over another piece)

	bool IsPromotionPosition();	// determina se la pedina ha raggiunto una posizione valida alla promozione

protected:
	virtual void BeginPlay() override;


public:
	int32 BoardSize;

	bool IsOpeningMove;
	// when true shows the piece is never been moved since begin of the match

	bool Promoted;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Components")
	USceneComponent* Scene;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Components")
	UStaticMeshComponent* StaticMesh;


protected:
	ECategory Category;

	EPiece Piece;

	FVector2D GridPosition;

	int32 Player;	// riferimento al giocatore che possiede il pawn
};
