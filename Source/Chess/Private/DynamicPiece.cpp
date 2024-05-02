
#include "DynamicPiece.h"

ADynamicPiece::ADynamicPiece()
{
	PrimaryActorTick.bCanEverTick = false;

	Scene = CreateDefaultSubobject<USceneComponent>(TEXT("Scene"));
	StaticMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Static Mesh Component"));

	SetRootComponent(Scene);
	StaticMesh->SetupAttachment(Scene);

	BoardSize=8;

	// Default init
	Category = ECategory::UN_DEF;
	Piece = EPiece::ANY;
	Player = -1;

	IsOpeningMove = true;

	// used only for pawn and rappresent if the pawn has been promoted
	Promoted = false;
}

void ADynamicPiece::BeginPlay()
{
	Super::BeginPlay();

}

ECategory ADynamicPiece::GetCategory()
{
	return Category;
}

void ADynamicPiece::SetCategory(const ECategory NewCategory)
{
	Category = NewCategory;
}

EPiece ADynamicPiece::GetPiece()
{
	return Piece;
}

void ADynamicPiece::SetPiece(const EPiece NewPiece)
{
	Piece = NewPiece;
}

FVector2D ADynamicPiece::GetGridPosition()
{
	return GridPosition;
}

void ADynamicPiece::SetGridPosition(const FVector2D Coordinates)
{
	GridPosition.X = Coordinates.X;
	GridPosition.Y = Coordinates.Y;
}

int32 ADynamicPiece::GetPlayer()
{
	return Player;
}

void ADynamicPiece::SetPlayer(const int32 NewPlayer)
{
	Player = NewPlayer;
}

int32 ADynamicPiece::GetValue()
{
	int32 Value = 0;

	if (Category != ECategory::PIECE) {
		return 0;
	}

	switch (Piece) {
		case EPiece::PAWN: {
			Value = 10;
			break;
		}

		case EPiece::ROOK: {
			Value = 50;
			break;
		}

		case EPiece::KNIGHT: {
			Value = 75;
			break;
		}

		case EPiece::BISHOP: {
			Value = 100;
			break;
		}

		case EPiece::QUEEN: {
			Value = 250;
			break;
		}
	}

	return Value;
}

char ADynamicPiece::GetAssociatedSymbol()
{
	char Symbol = '\0';

	switch (Piece) 
	{
		case EPiece::PAWN: {
			Symbol = '\0';
			break;
		}

		case EPiece::ROOK: {
			Symbol = 'R';
			break;
		}

		case EPiece::KNIGHT: {
			Symbol = 'N';
			break;
		}

		case EPiece::BISHOP: {
			Symbol = 'B';
			break;
		}

		case EPiece::QUEEN: {
			Symbol = 'Q';
			break;
		}

		case EPiece::KING: {
			Symbol = 'K';
			break;
		}
	}

	return Symbol;
}

TArray<FVector2D> ADynamicPiece::GetPossibleMoves()
{
	TArray<FVector2D> Moves;

	if ((Category == ECategory::PIECE) && (Piece != EPiece::ANY)) 
	{
		switch (Piece) {
			case EPiece::PAWN: {

				if (Player == 0) {
					Moves.Add(GridPosition + FVector2D(1, 0));
					Moves.Add(GridPosition + FVector2D(1, 1));
					Moves.Add(GridPosition + FVector2D(1, -1));

					if (IsOpeningMove) {
						Moves.Add(GridPosition + FVector2D(2, 0));
					}
				}
				else if(Player == 1) {
					Moves.Add(GridPosition - FVector2D(1, 0));
					Moves.Add(GridPosition - FVector2D(1, 1));
					Moves.Add(GridPosition - FVector2D(1, -1));

					if (IsOpeningMove) {
						Moves.Add(GridPosition - FVector2D(2, 0));
					}
				}
				
				break;
			}

			case EPiece::ROOK: {
				for (int32 x = 0; x < BoardSize; x++) 
				{
					if (x != GridPosition.X) {
						Moves.Add(FVector2D(x, GridPosition.Y));
					}
				}

				for (int32 y = 0; y < BoardSize; y++) 
				{
					if (y != GridPosition.Y) {
						Moves.Add(FVector2D(GridPosition.X, y));
					}
				}

				break;
			}

			case EPiece::KNIGHT: {
				Moves.Add(GridPosition + FVector2D( 2, 1));
				Moves.Add(GridPosition + FVector2D( 2,-1));
				Moves.Add(GridPosition + FVector2D(-2, 1));
				Moves.Add(GridPosition + FVector2D(-2,-1));
				Moves.Add(GridPosition + FVector2D( 1, 2));
				Moves.Add(GridPosition + FVector2D( 1,-2));
				Moves.Add(GridPosition + FVector2D(-1, 2));
				Moves.Add(GridPosition + FVector2D(-1,-2));
				
				break;
			}

			case EPiece::BISHOP: {
				for (int32 x = 1; x < BoardSize; x++) {
					Moves.Add(GridPosition + FVector2D(x, x));
					Moves.Add(GridPosition + FVector2D(-x, -x));
				}

				for (int32 y = 1; y < BoardSize; y++) {
					Moves.Add(GridPosition + FVector2D(-y, y));
					Moves.Add(GridPosition + FVector2D(y, -y));
				}

				break;
			}

			case EPiece::QUEEN: {
				for (int32 x = 1; x < BoardSize; x++) {
					Moves.Add(GridPosition + FVector2D(x, x));
					Moves.Add(GridPosition + FVector2D(-x, -x));
				}

				for (int32 y = 1; y < BoardSize; y++) {
					Moves.Add(GridPosition + FVector2D(-y, y));
					Moves.Add(GridPosition + FVector2D(y, -y));
				}

				for (int32 x = 0; x < BoardSize; x++)
				{
					if (x != GridPosition.X) {
						Moves.Add(FVector2D(x, GridPosition.Y));
					}
				}

				for (int32 y = 0; y < BoardSize; y++)
				{
					if (y != GridPosition.Y) {
						Moves.Add(FVector2D(GridPosition.X, y));
					}
				}

				break;
			}

			case EPiece::KING: {
				for (int32 x = -1; x < 2; x++) 
				{
					for (int32 y = -1; y < 2; y++) 
					{
						if ((x != 0) || (y != 0)) {
							Moves.Add(GridPosition + FVector2D(x, y));
						}
					}
				}

				break;
			}

			case EPiece::ANY: {
				GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Purple, TEXT("ADynamicPiece::GetPossibleMoves() - Something coulb be wrong"));
				
				break;
			}
		}
	}

	return Moves;
}

bool ADynamicPiece::IsPromotionPosition()
{
	// If it's not a pawn, it can never be promoted
	if (Piece != EPiece::PAWN) {
		return false;
	}

	int32 InX = GridPosition.X;

	return ((1 - Player) * (BoardSize - 1) == InX);
}


