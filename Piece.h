#ifndef PIECE_H
#define PIECE_H

#include <string>
#include <vector>

// Forward declaration to avoid circular inclusion
class Board;

// Parent class
class Piece 
{
    private:
        // Member variables
        std::string symbol;
        std::string colour;

    public:
        // Constructor initialises symbol and colour with initialiser list
        Piece(const std::string& s, const std::string& c) : symbol(s), colour(c) {}

        // Virtual destructor allows derived classes to call their own destructor
        virtual ~Piece() {}
        
        // Getter functions allow read only access to symbol and colour
        std::string getSymbol() const
        {
            return symbol;
        }
        std::string getColour() const
        {
            return colour;
        }
        
        // Virtual move validation allows derived classes to override with correct logic
        virtual bool isMoveValid(const Board& board, int startRow, int startCol, int endRow, int endCol) const = 0;
};

class King: public Piece
{
    public:
        // Constructor, initialises King object with correct symbol given by the colour
        King(const std::string& colour) : Piece(colour == "White" ? "♚" : "♔", colour) {}

        // King move validation logic overrides virtual base class method
        virtual bool isMoveValid(const Board& board, int startRow, int startCol, int endRow, int endCol) const override;
};

class Queen: public Piece
{
    public:
        // Constructor, initialises Queen object with correct symbol given by the colour
        Queen(const std::string& colour) : Piece(colour == "White" ? "♛" : "♕", colour) {}

        // Queen move validation logic overrides virtual base class method
        virtual bool isMoveValid(const Board& board, int startRow, int startCol, int endRow, int endCol) const override;
};

class Rook: public Piece
{
    public:
        // Constructor, initialises Rook object with correct symbol given by the colour
        Rook(const std::string& colour) : Piece(colour == "White" ? "♜" : "♖", colour) {}

        // Rook move validation logic overrides virtual base class method
        virtual bool isMoveValid(const Board& board, int startRow, int startCol, int endRow, int endCol) const override;
};

class Bishop: public Piece
{
    public:
        // Constructor, initialises Bishop object with correct symbol given by the colour
        Bishop(const std::string& colour) : Piece(colour == "White" ? "♝" : "♗", colour) {}

        // Bishop move validation logic overrides virtual base class method
        virtual bool isMoveValid(const Board& board, int startRow, int startCol, int endRow, int endCol) const override;
};

class Knight: public Piece
{
    public:
        // Constructor, initialises Knight object with correct symbol given by the colour
        Knight(const std::string& colour) : Piece(colour == "White" ? "♞" : "♘", colour) {}

        // Knight move validation logic overrides virtual base class method
        virtual bool isMoveValid(const Board& board, int startRow, int startCol, int endRow, int endCol) const override;
};

class Pawn: public Piece
{
    public:
        // Constructor, initialises Pawn object with correct symbol given by the colour
        Pawn(const std::string& colour) : Piece(colour == "White" ? "♟" : "♙", colour) {}

        // Pawn move validation logic overrides virtual base class method
        virtual bool isMoveValid(const Board& board, int startRow, int startCol, int endRow, int endCol) const override;
};

#endif
