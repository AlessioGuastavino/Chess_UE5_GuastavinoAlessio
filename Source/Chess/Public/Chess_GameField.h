// GUASTAVINO ALESSIO - S4979339
#pragma once

#include "CoreMinimal.h"
#include "Square.h"
#include "DynamicPiece.h"
#include "GameFramework/Actor.h"
#include "Chess_GameField.generated.h"


UCLASS()
class CHESS_API AChess_GameField : public AActor
{
	GENERATED_BODY()
	
public:	
	AChess_GameField();

	// spawn chess board (only squares)
	void SpawnChessBoard();
	
	// take back the ChessBoard to beginning configuration
	void ResetChessBoard();

	// spawn pieces
	void SpawnPieces();

	// show moves for a selected piece (called only from human player)
	int32 SpawnMoves(ADynamicPiece* Piece);

	// remove suggester moves (occurs when a move his completed or a piece is deselected)
	void UnspawnMoves();	
	
	// change a piece location updating what necessary, eat a piece if necessary
	EPiece MakeMove(ADynamicPiece* Subject, FVector2D Destination);

	void RemoveIllegalMove(TArray<FVector2D>& Moves, ADynamicPiece* Piece);

	// check if move his legal (not legal when go outside 
	// chessboard, over your own player or when at least one piece gets in the way
	bool IsValidMove(ADynamicPiece* Piece, const FVector2D MovePosition);

	// check if there is the indicated move is blocked by one or more piece
	bool IsMoveBlocked(const FVector2D Move, const int32 Player);

	// return how to travel the chessboard for follow the trajectory definied by start and end position
	FVector2D FindTrajectory(const FVector2D Start, const FVector2D End);

	// gets number of pieces that are in trajectory way
	int32 GetTrajectoryOccupation(FVector2D Start, const FVector2D End, const FVector2D Pattern);

	// phisically remove and destroy the piece that has been eat, return its kind for replay purpose
	void Eat(ADynamicPiece* PieceToBeEaten);

	// check if the defined position (Destination) imply eat of a piece
	bool IsEatPosition(ADynamicPiece* Eater, const FVector2D Destination);

	// implement piece promotion
	void PromotePiece(ADynamicPiece* ToPromote, EPiece TargetKind);
		
	// return array of only HumanPlayer possesed piece
	TArray<ADynamicPiece*> GetHumanPieces();

	// return array of only AIPlayer possesed piece
	TArray<ADynamicPiece*> GetAIPieces();

	// given a location, returns related grid coordinate
	FVector2D GetCoordinatesFromLocation(const FVector& Location);

	// given grid coordinate, returns location
	FVector	GetLocationFromCoordinates(const FVector2D& Coordinates);

	// given grid coordinate, return a reference to the square placed at that coordinates 
	// (nullptr return if there is no square at such grid position)
	ASquare* GetSquareByCoordinates(const FVector2D Coordinates);
	
	// same as GetSquareByCoord.. but return a piece reference instead of a square one
	ADynamicPiece* GetPieceByCoordinates(const FVector2D Coordinates);

	// return a reference to the square placed under a given piece
	ASquare* GetSquareUnder(const ADynamicPiece* Piece);

	// return reference to piece placed over a given square
	ADynamicPiece* GetPieceOver(const ASquare* Square);

	// update square map
	void UpdateSquareMap(ASquare* Subject, FVector2D NewPosition);

	// update piece map
	void UpdatePieceMap(ADynamicPiece* Subject, FVector2D NewPosition);

	// given the symbol of a piece and player, returns class to spawn and its type in "EPiece format"
	// used for spawn pieces in gamefield or respawn in historical
	TPair<TSubclassOf<ADynamicPiece>, EPiece> GetPieceClassAndType(const TCHAR Symbol, const int32 Player);


protected:
	virtual void OnConstruction(const FTransform& Transform) override;

	virtual void BeginPlay() override;

public:
	TArray<ASquare*> SquareArray;
	TMap<FVector2D, ASquare*> SquareMap;

	TArray<ADynamicPiece*> PieceArray;
	TMap<FVector2D, ADynamicPiece*> PieceMap;

	TArray<ADynamicPiece*> SpawnedMoves;

	FString PieceSpawnPattern;

	// index of human and AI player
	int32 HumanPlayer;
	int32 AIPlayer;

	// references to both human and AI kings
	ADynamicPiece* HumanKing;
	ADynamicPiece* AIKing;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly)
	int32 BoardSize;

	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	float SquareSize;

	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	float Padding;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly)
	float NormalizedPadding;

	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	float OverSquareHeight;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly)
	FVector SquareScale;

	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	FVector MoveRelativeScale;

	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	FVector PieceRelativeScale;

	UPROPERTY(EditAnywhere)
	TSubclassOf<ASquare> BlackSquare;

	UPROPERTY(EditAnywhere)
	TSubclassOf<ASquare> WhiteSquare;

	UPROPERTY(EditAnywhere, BlueprintReadOnly)	
	TSubclassOf<ADynamicPiece> BlackKingClass;
	
	UPROPERTY(EditAnywhere, BlueprintReadOnly)	
	TSubclassOf<ADynamicPiece> BlackQueenClass;
	
	UPROPERTY(EditAnywhere, BlueprintReadOnly)	
	TSubclassOf<ADynamicPiece> BlackRookClass;
	
	UPROPERTY(EditAnywhere, BlueprintReadOnly)	
	TSubclassOf<ADynamicPiece> BlackKnightClass;
	
	UPROPERTY(EditAnywhere, BlueprintReadOnly)	
	TSubclassOf<ADynamicPiece> BlackBishopClass;
	
	UPROPERTY(EditAnywhere, BlueprintReadOnly)	
	TSubclassOf<ADynamicPiece> BlackPawnClass;

	UPROPERTY(EditAnywhere, BlueprintReadOnly)	
	TSubclassOf<ADynamicPiece> WhiteKingClass;
	
	UPROPERTY(EditAnywhere, BlueprintReadOnly)	
	TSubclassOf<ADynamicPiece> WhiteQueenClass;
	
	UPROPERTY(EditAnywhere, BlueprintReadOnly)	
	TSubclassOf<ADynamicPiece> WhiteRookClass;
	
	UPROPERTY(EditAnywhere, BlueprintReadOnly)	
	TSubclassOf<ADynamicPiece> WhiteKnightClass;
	
	UPROPERTY(EditAnywhere, BlueprintReadOnly)	
	TSubclassOf<ADynamicPiece> WhiteBishopClass;
	
	UPROPERTY(EditAnywhere, BlueprintReadOnly)	
	TSubclassOf<ADynamicPiece> WhitePawnClass;

	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	TSubclassOf<ADynamicPiece> MoveClass;

	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	TSubclassOf<AActor> BackgroundClass;
};
