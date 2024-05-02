
#include "Chess_GameField.h"
#include "Chess_GameMode.h"

AChess_GameField::AChess_GameField()
{
	// Turning-off tick
	PrimaryActorTick.bCanEverTick = false;

	// Set board dimension (8x8)
	BoardSize = 8;

	// Set single square dimension and padding between each one
	SquareSize = 250;
	Padding = 1;

	// Set default value for z location of each piece or move actor
	OverSquareHeight = 20;
	
	// Defining piece and move actor scale as proportion to square size
	MoveRelativeScale = FVector(0.95, 0.95, 0.01);
	PieceRelativeScale = FVector(0.80, 0.80, 0.01);

	// Defining spawn sequence, each character will be use for determine the type of piece
	PieceSpawnPattern = {"RNBQKBNRPPPPPPPP"};

	HumanPlayer = 0;
	AIPlayer = 1;
}

void AChess_GameField::OnConstruction(const FTransform& Transform)
{
	Super::OnConstruction(Transform);

	NormalizedPadding = (FMath::RoundToDouble(((SquareSize + Padding) / SquareSize) * 100) / 100);
	SquareScale = FVector((SquareSize / 100), (SquareSize / 100), 1);

}

void AChess_GameField::BeginPlay()
{
	Super::BeginPlay();

}

void AChess_GameField::SpawnChessBoard()
{
	bool SpawnBlack;

	for (int32 x = 0; x < BoardSize; x++) 
	{	
		// Define wheter to start line spawn from a black square or a white one
		SpawnBlack = ((x % 2) == 0);

		for (int32 y = 0; y < BoardSize; y++) 
		{
			FVector Location = GetLocationFromCoordinates(FVector2D(x, y)) + FVector(0, 0, OverSquareHeight/2);
			ASquare* Square;

			if (SpawnBlack) {
				// spawning a black square
				Square = GetWorld()->SpawnActor<ASquare>(BlackSquare, Location, FRotator::ZeroRotator);
				Square->SetColor(EColor::BLACK);
			}
			else {
				// spawning a white square
				Square = GetWorld()->SpawnActor<ASquare>(WhiteSquare, Location, FRotator::ZeroRotator);
				Square->SetColor(EColor::WHITE);
			}

			// Setting letters and numbers for column and row
			Square->TextComponents[0]->SetText(FText::FromString(""));
			Square->AuxText->SetText(FText::FromString(""));
			if (x == 0) {
				Square->TextComponents[0]->SetText(FText::FromString(FString::Printf(TEXT("%c"), y + 'A')));
				Square->TextComponents[0]->SetRelativeLocation(FVector(-60, 40, 20.1));

				if (y == 0) {
					Square->AuxText->SetText(FText::FromString(FString::FromInt(1)));
					Square->AuxText->SetRelativeLocation(FVector(35, -60, 20.1));
				}
			
			}
			else if (y == 0) {
				Square->TextComponents[0]->SetText(FText::FromString(FString::FromInt(x + 1)));
				Square->TextComponents[0]->SetRelativeLocation(FVector(35, -60, 20.1));
			} 

			
			Square->SetActorScale3D(SquareScale);	// Applying scale
			Square->SetGridPosition(FVector2D(x, y));	// Init of grid position property 

			SquareArray.Add(Square);	
			SquareMap.Add(FVector2D(x, y), Square);

			SpawnBlack = !SpawnBlack;
		}
	}

	// Calling method for spawn of each piece
	SpawnPieces();

}

void AChess_GameField::ResetChessBoard()
{	
	// Removing all piece refences and unspawn them
	int32 StillAliveSize = PieceArray.Num();
	for (int32 i = 0; i < StillAliveSize; i++) {
		ADynamicPiece* Piece = PieceArray.Pop();
		PieceMap.Remove(Piece->GetGridPosition());
		Piece->Destroy();
	}

	// Respawn every piece in his starting position
	SpawnPieces();
}

void AChess_GameField::SpawnPieces()
{	
	// Spawn of Human pieces
	int32 i = 0;
	for (int32 x = 0; x < 2; x++) 
	{
		for (int32 y = 0; y < BoardSize; y++) 
		{
			// Calcolating spawn location
			FVector Location = GetLocationFromCoordinates(FVector2D(x, y)) + FVector(0, 0, OverSquareHeight);
			// Getting correct class for the spawn and type of the piece
			TPair<TSubclassOf<ADynamicPiece>, EPiece> SpawnPair = GetPieceClassAndType(PieceSpawnPattern[i], HumanPlayer);

			TSubclassOf<ADynamicPiece> Class = SpawnPair.Key;
			EPiece Type = SpawnPair.Value;

			// Piece spawn
			ADynamicPiece* NewPiece = GetWorld()->SpawnActor<ADynamicPiece>(Class, Location, FRotator(0, 90, 0));

			// taking references to the king
			if (Type == EPiece::KING) {
				HumanKing = NewPiece;
			}

			// Init piece properties
			NewPiece->BoardSize = BoardSize;
			NewPiece->IsOpeningMove = true;

			NewPiece->SetPiece(Type);
			NewPiece->SetCategory(ECategory::PIECE);
			NewPiece->SetPlayer(HumanPlayer);
			NewPiece->SetGridPosition(FVector2D(x, y));

			NewPiece->SetActorScale3D(SquareScale * PieceRelativeScale);

			PieceArray.Add(NewPiece);
			PieceMap.Add(FVector2D(x, y), NewPiece);
		
			i += 1;
		}
	}

	// Spawn AI's pieces
	int32 j = 0;
	for (int32 x = (BoardSize - 1); x > (BoardSize - 3); x--) 
	{
		for (int32 y = 0; y < BoardSize; y++) 
		{
			// Calcolating spawn location
			FVector Location = GetLocationFromCoordinates(FVector2D(x, y)) + FVector(0, 0, OverSquareHeight);
			// Getting correct class for the spawn and type of the piece
			TPair<TSubclassOf<ADynamicPiece>, EPiece> SpawnPair = GetPieceClassAndType(PieceSpawnPattern[j], AIPlayer);

			TSubclassOf<ADynamicPiece> Class = SpawnPair.Key;
			EPiece Type = SpawnPair.Value;

			// Piece spawn
			ADynamicPiece* NewPiece = GetWorld()->SpawnActor<ADynamicPiece>(Class, Location, FRotator(0, -90, 0));

			// taking references to the king
			if (Type == EPiece::KING) {
				AIKing = NewPiece;
			}

			// Init piece properties 
			NewPiece->BoardSize = BoardSize;
			NewPiece->IsOpeningMove = true;

			NewPiece->SetPiece(Type);
			NewPiece->SetCategory(ECategory::PIECE);
			NewPiece->SetPlayer(AIPlayer);
			NewPiece->SetGridPosition(FVector2D(x, y));

			NewPiece->SetActorScale3D(SquareScale * PieceRelativeScale);

			PieceArray.Add(NewPiece);
			PieceMap.Add(FVector2D(x, y), NewPiece);

			j += 1;
		}
	}
}

int32 AChess_GameField::SpawnMoves(ADynamicPiece* Piece)
{
	// Get an array with all the position where the piece can move
	TArray<FVector2D> Moves = Piece->GetPossibleMoves();
	
	// Iteration on each position for check if the piece can be effectively moved to
	for (int32 i = (Moves.Num() - 1); i >= 0; i -= 1)
	{
		// Check if the move is valid. This method return false when a destination is 
		// outside the board, over one of your own pieces or when there is another piece on the trajectory
		if (!IsValidMove(Piece, Moves[i])) {
			Moves.RemoveAt(i);
			continue;
		}

		// if the piece is a king and move is bloked by an opponent piece move
		if (Piece->GetPiece() == EPiece::KING && IsMoveBlocked(Moves[i], Piece->GetPlayer())) {
			Moves.RemoveAt(i);
		} 

	}

	if (Moves.Num() == 0) {
		return 0;
	}

	for(int32 j=0; j<Moves.Num(); j++) 
	{
		// Defining spawn location
		FVector Location = GetLocationFromCoordinates(Moves[j]) + FVector(0, 0, (OverSquareHeight + 0.1));
		// Spawning a move
		ADynamicPiece* NewMove = GetWorld()->SpawnActor<ADynamicPiece>(MoveClass, Location, FRotator::ZeroRotator);

		// Init properties
		NewMove->SetCategory(ECategory::MOVE);
		NewMove->SetGridPosition(Moves[j]);
		NewMove->SetActorScale3D(SquareScale * MoveRelativeScale);

		SpawnedMoves.Add(NewMove);
	}

	return SpawnedMoves.Num();
}

void AChess_GameField::UnspawnMoves()
{
	for(int32 Last = SpawnedMoves.Num()-1; Last >= 0; Last--)
	{
		ADynamicPiece* Unspawn = SpawnedMoves.Pop();
		Unspawn->Destroy();
	} 

}

EPiece AChess_GameField::MakeMove(ADynamicPiece* Subject, FVector2D Destination)
{
	// this variable serves for indicates the kind of removed piece and is also used as eat "flag"
	// this variable setted as EPiece::ANY means there has been no eat, 
	EPiece TypeOfEatenPiece = EPiece::ANY;

	// Check if the move will lead to an eat
	if (IsEatPosition(Subject, Destination))
	{ 
		// Supplementar check for being sure there is a piece under the move
		if (ADynamicPiece* CapturedPiece = GetPieceByCoordinates(Destination)) {
			TypeOfEatenPiece = CapturedPiece->GetPiece();
			if (CapturedPiece->Promoted) {
				TypeOfEatenPiece = EPiece::PAWN;
			}
			Eat(CapturedPiece);	// Unspawn the piece that will be eat
		}
	}

	// Getting destination of the move
	FVector MoveLocation = GetLocationFromCoordinates(Destination) + FVector(0, 0, OverSquareHeight);

	//UpdatePieceMap(Subject, Destination);
	Subject->SetGridPosition(Destination);

	// Carry-out the move
	Subject->SetActorLocation(MoveLocation);

	// Set to false the opening move (even if it's already)
	Subject->IsOpeningMove = false;

	return TypeOfEatenPiece;
}

void AChess_GameField::RemoveIllegalMove(TArray<FVector2D>& Moves, ADynamicPiece* Piece)
{
	int32 Size = Moves.Num();

	for (int32 i = (Size - 1); i >= 0; i++) 
	{
		if (!IsValidMove(Piece, Moves[i]))
		{
			Moves.RemoveAt(i);
		}
	}
}

bool AChess_GameField::IsValidMove(ADynamicPiece* Start, const FVector2D MovePosition)
{
	int32 InX = MovePosition.X;
	int32 InY = MovePosition.Y;

	// Check if the movement it's outside the chessboard
	if (InX < 0 || InY < 0) {
		return false;
	}
	if (InX >= BoardSize || InY >= BoardSize) {
		return false;
	}

	FVector2D Begin = Start->GetGridPosition();
	// Trajectory is defined as a pair of (x, y) value which indicates how to increment the position
	// for following trajectory path - e.x.: for going in down-right direction the pair will have (-1, 1) values-.
	FVector2D Trajectory = FindTrajectory(Begin, MovePosition);

	// Check strictly reserved for the pawn 
	if(Start->GetPiece() == EPiece::PAWN) 
	{
		if (Trajectory.Y == 0) 
		{	// Move is vertical, not allowed if it imply an eat
			if (IsEatPosition(Start, MovePosition)) {
				return false;
			}
		}
		if ((Trajectory.Y == 1) || (Trajectory.Y == -1)) {
			// Move is diagonal, allowed only for eat purpose
			if (!IsEatPosition(Start, MovePosition)) {
				return false;
			}
		}
	}

	// Check reserved to all piece but knight and pawn
	if (Start->GetPiece() != EPiece::KNIGHT)
	{
		if (ADynamicPiece* Destination = GetPieceByCoordinates(MovePosition))
		{
			// Destination is over a piece of the same player, you can't do that so return is false
			if (Destination->GetPlayer() == Start->GetPlayer()) 
			{
				return false;
			}

			// If there is at least one piece on the trajectory you can't move there, false return
			if ((Destination->GetPlayer() != Start->GetPlayer()) && (Destination->GetPlayer() != -1))
			{
				return (GetTrajectoryOccupation(Begin, (MovePosition - Trajectory), Trajectory) == 0);
			}

		}

		if (GetTrajectoryOccupation(Begin, MovePosition, Trajectory) > 0)
		{
			return false;
		}

	}
	else {
		// For Knight-only, exlude move over your own pieces
		ADynamicPiece* Destination = GetPieceByCoordinates(MovePosition);
		
		if (Destination != nullptr) {
			if (Start->GetPlayer() == Destination->GetPlayer()) {
				return false;
			}
		}
	}
	
	return true;
}

bool AChess_GameField::IsMoveBlocked(const FVector2D Move, const int32 Player)
{
	// I take human pieces if i look for AI king checkmate, AI piece if I look for human king
	TArray<ADynamicPiece*> Opponent;
	Opponent = (Player == 1) ? GetHumanPieces() : GetAIPieces();

	for (int32 k = 0; k < Opponent.Num(); k++)
	{ // running through all moves of each pieces until I found one that doesn't get into "Move"
		TArray<FVector2D> allMoves = Opponent[k]->GetPossibleMoves();

		// remove all unlegal moves for a setted piece
		for (int i = (allMoves.Num()-1); i >= 0; i -= 1)
		{
			//FVector2D CurrentMove = allMoves[i];
			if (!IsValidMove(Opponent[k], allMoves[i])) {
				allMoves.RemoveAt(i);
			}
		}

		// now i can finally search a non blocking move
		for (int32 i = 0; i < allMoves.Num(); i++)
		{
			// this true means the position is blocked by at least one opponent possible move
			if (allMoves[i].Equals(Move)) {
				return true;
			}
		}

	}

	return false;
}

FVector2D AChess_GameField::FindTrajectory(const FVector2D Start, const FVector2D End) {

	int32 x;
	int32 y;

	// Trajectory is definied throw analysis of x, y increare or decrase
	x = (Start.X <= End.X) ? 1 : (-1);		// 1 -->Up;		-1 -->Down
	y = (Start.Y <= End.Y) ? 1 : (-1);		// 1 -->Right;	-1 -->Left

	if (Start.X == End.X) {
		// Move is horizontal
		x = 0;
	}

	if (Start.Y == End.Y) {
		// Move is vertical
		y = 0;
	}

	return FVector2D(x, y);
}

int32 AChess_GameField::GetTrajectoryOccupation(FVector2D Start, const FVector2D End, const FVector2D Pattern)
{
	FVector2D Current = End;

	// Parsing the trajectory from destination to starting position
	while ((Start.X != Current.X) || (Start.Y != Current.Y))
	{
		if (ADynamicPiece* Piece = GetPieceByCoordinates(Current))
		{
			// This true means I found a piece on my trajectory
			if (Piece->GetCategory() == ECategory::PIECE) {
				return 1;
			}

		}

		Current.X -= Pattern.X;
		Current.Y -= Pattern.Y;
	}

	return 0;
}

void AChess_GameField::Eat(ADynamicPiece* PieceToBeEaten)
{
	PieceArray.Remove(PieceToBeEaten);
	PieceMap.Remove(PieceToBeEaten->GetGridPosition());
	
	if (PieceToBeEaten->GetPiece() == EPiece::KING)
	{
		if (PieceToBeEaten->GetPlayer() == 0) {
			// remove reference to HumanKing
			HumanKing = nullptr;
		}

		if (PieceToBeEaten->GetPlayer() == 1) {
			// remove reference to AIKing
			AIKing = nullptr;
		}
	}
	
	PieceToBeEaten->Destroy();
}

bool AChess_GameField::IsEatPosition(ADynamicPiece* Eater, const FVector2D Destination)
{
	// taking references to piece I will eat
	if (ADynamicPiece* Victim = GetPieceByCoordinates(Destination)) {
	
		return (Eater->GetPlayer() != Victim->GetPlayer()); 
	}
		
	return false;
}

void AChess_GameField::PromotePiece(ADynamicPiece* Pawn, EPiece TargetKind)
{
	// Getting information from to promote piece
	FVector Location = Pawn->GetActorLocation();
	FVector Scale = Pawn->GetActorScale3D();
	FRotator Rotation = Pawn->GetActorRotation();
	FVector2D GridPosition = Pawn->GetGridPosition();
	ECategory Category = Pawn->GetCategory();
	int32 PlayerOwner = Pawn->GetPlayer();

	// Removing references and unspawning it
	PieceArray.Remove(Pawn);
	PieceMap.Remove(GridPosition);
	Pawn->Destroy();

	// Defining new piece Subclass' spawn
	TSubclassOf<ADynamicPiece> PromoteClass;

	switch (TargetKind) 
	{
		case EPiece::ROOK: {
			PromoteClass = (PlayerOwner == HumanPlayer) ? WhiteRookClass : BlackRookClass;
			break;
		}

		case EPiece::KNIGHT: {
			PromoteClass = (PlayerOwner == HumanPlayer) ? WhiteKnightClass : BlackKnightClass;
			break;
		}

		case EPiece::BISHOP: {
			PromoteClass = (PlayerOwner == HumanPlayer) ? WhiteBishopClass : BlackBishopClass;
			break;
		}

		case EPiece::QUEEN: {
			PromoteClass = (PlayerOwner == HumanPlayer) ? WhiteQueenClass : BlackQueenClass;
			break;
		}
	}

	// Spawn
	ADynamicPiece* NewPiece = GetWorld()->SpawnActor<ADynamicPiece>(PromoteClass, Location, Rotation);

	// Re-Assign previous characteristic
	NewPiece->SetActorScale3D(Scale);
	NewPiece->SetGridPosition(GridPosition);

	NewPiece->SetPiece(TargetKind);
	NewPiece->SetCategory(Category);
	NewPiece->SetPlayer(PlayerOwner);

	NewPiece->BoardSize = BoardSize;
	NewPiece->Promoted = true;
	
	// Update array
	PieceArray.Add(NewPiece);
	PieceMap.Add(GridPosition, NewPiece);

}

TArray<ADynamicPiece*> AChess_GameField::GetHumanPieces()
{
	TArray<ADynamicPiece*> Pieces;

	for (int32 i=0; i<PieceArray.Num(); i++) //ADynamicPiece* Item : PieceArray) 
	{
		ADynamicPiece* Item = PieceArray[i];

		// Check if the current piece its owned by human player
		if (Item->GetPlayer() == HumanPlayer) {
			// If true, add it
			Pieces.Add(Item);
		}
	}

	return Pieces;

}

TArray<ADynamicPiece*> AChess_GameField::GetAIPieces()
{
	TArray<ADynamicPiece*> Pieces;

	for (int32 i=0; i<PieceArray.Num(); i++) 
	{
		ADynamicPiece* Item = PieceArray[i];

		if (Item->GetPlayer() == AIPlayer) {
			Pieces.Add(Item);
		}
	}

	return Pieces;
}

FVector2D AChess_GameField::GetCoordinatesFromLocation(const FVector& Location)
{
	const double x = Location[0] / (SquareSize * NormalizedPadding);
	const double y = Location[1] / (SquareSize * NormalizedPadding);

	return FVector2D(x, y);
}

FVector AChess_GameField::GetLocationFromCoordinates(const FVector2D& Coordinates)
{
	return (NormalizedPadding * SquareSize * FVector(Coordinates.X, Coordinates.Y, 0));	
}

ASquare* AChess_GameField::GetSquareByCoordinates(const FVector2D Coordinates)
{
	ASquare** Square = SquareMap.Find(Coordinates);
	
	if (Square == nullptr) {
		return nullptr;
	}
	else {
		return *Square;
	}

}

ADynamicPiece* AChess_GameField::GetPieceByCoordinates(const FVector2D Coordinates)
{
	int32 i = 0;
	int32 Size = PieceArray.Num();
	FVector2D GridPosition(0, 0);

	do {
		GridPosition = PieceArray[i]->GetGridPosition();
		i += 1;
	} while (i < Size && !(GridPosition.Equals(Coordinates)));
	
	if (i == Size) {
		return nullptr;
	}

	return PieceArray[i];
}

ASquare* AChess_GameField::GetSquareUnder(const ADynamicPiece* Actor)
{
	FVector2D PieceCoordinates = GetCoordinatesFromLocation(Actor->GetActorLocation());
	
	return GetSquareByCoordinates(PieceCoordinates);
}

ADynamicPiece* AChess_GameField::GetPieceOver(const ASquare* Square)
{
	FVector2D SquareCoordinates = GetCoordinatesFromLocation(Square->GetActorLocation());

	return GetPieceByCoordinates(SquareCoordinates);
}

void AChess_GameField::UpdateSquareMap(ASquare* Subject, FVector2D NewPosition)
{
	if (Subject->GetGridPosition() != NewPosition) 
	{
		if (SquareMap.Remove(Subject->GetGridPosition()) != 0) {
			SquareMap.Add(NewPosition, Subject);
		}
	}
	else {
		GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, TEXT("Cannot update SquareMap"));
	}
	
}

void AChess_GameField::UpdatePieceMap(ADynamicPiece* Subject, FVector2D NewPosition)
{
	if (Subject->GetGridPosition() != NewPosition) {
		PieceMap.Remove(Subject->GetGridPosition());
		PieceMap.Add(NewPosition, Subject);
		GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Blue, TEXT("PieceMap should be updated"));
	}
	else {
		GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, TEXT("Cannot update PieceMap"));
	}
}

TPair<TSubclassOf<ADynamicPiece>, EPiece> AChess_GameField::GetPieceClassAndType(const TCHAR Symbol, const int32 Player)
{
	TSubclassOf<ADynamicPiece> Class;
	EPiece Type;

	switch (Symbol) {
		case 'P': {
			Class = ((Player == 0) ? WhitePawnClass : BlackPawnClass);
			Type = EPiece::PAWN;
			break;
		}

		case 'R': {
			Class = ((Player == 0) ? WhiteRookClass : BlackRookClass);
			Type = EPiece::ROOK;
			break;
		}

		case 'N': {
			Class = ((Player == 0) ? WhiteKnightClass : BlackKnightClass);
			Type = EPiece::KNIGHT;
			break;
		}

		case 'B': {
			Class = ((Player == 0) ? WhiteBishopClass : BlackBishopClass);
			Type = EPiece::BISHOP;
			break;
		}

		case 'Q': {
			Class = ((Player == 0) ? WhiteQueenClass : BlackQueenClass);
			Type = EPiece::QUEEN;
			break;
		}

		case 'K': {
			Class = ((Player == 0) ? WhiteKingClass : BlackKingClass);
			Type = EPiece::KING;
			break;
		}

	}

	return TPair<TSubclassOf<ADynamicPiece>, EPiece>(Class, Type);
}