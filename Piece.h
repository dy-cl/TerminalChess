#include <string>
#include <vector>

// Parent class
class Piece 
{
    public:
        std::string symbol;
        std::vector<int> position;
};

// White pieces
class whiteKing : public Piece
{
    public:
        whiteKing() 
        {
            symbol = "♚";
            position = {}; // To be assigned later
        }
};

class whiteQueen : public Piece
{
    public:
        whiteQueen()
        {
            symbol = "♛";
            position = {}; // To be assigned later
        }
};

class whiteKnight : public Piece
{
    public:
        whiteKnight()
        {
            symbol = "♞";
            position = {}; // To be assigned later
        }
};

class whiteBishop : public Piece
{
    public:
        whiteBishop()
        {
            symbol = "♝";
            position = {}; // To be assigned later
        }
};

class whiteRook : public Piece
{
    public:
        whiteRook()
        {
            symbol = "♜";
            position = {}; // To be assigned later
        }
};

class whitePawn : public Piece
{
    public:
        whitePawn() 
        {
            symbol = "♟";
            position = {}; // To be assigned later
        }
};

// Black pieces
class blackKing : public Piece
{
    public:
        blackKing() 
        {
            symbol = "♔";
            position = {}; // To be assigned later
        }
};

class blackQueen : public Piece
{
    public:
        blackQueen()
        {
            symbol = "♕";
            position = {}; // To be assigned later
        }
};

class blackKnight : public Piece
{
    public:
        blackKnight()
        {
            symbol = "♘";
            position = {}; // To be assigned later
        }
};

class blackBishop : public Piece
{
    public:
        blackBishop()
        {
            symbol = "♗";
            position = {}; // To be assigned later
        }
};

class blackRook : public Piece
{
    public:
        blackRook()
        {
            symbol = "♖";
            position = {}; // To be assigned later
        }
};

class blackPawn : public Piece
{
    public:
        blackPawn() 
        {
            symbol = "♙";
            position = {}; // To be assigned later
        }
};

