#ifndef PIECE_H
#define PIECE_H

#include <string>
#include <vector>

// Parent class
class Piece 
{
    public:
        std::string symbol;
        std::string pieceType;
        std::string colour;
        int numMoves; // Only relevant for pawn
};

// White pieces
class whiteKing : public Piece
{
    public:
        whiteKing() 
        {
            symbol = "♚";
            pieceType = "King";
            colour = "White";
        }
};

class whiteQueen : public Piece
{
    public:
        whiteQueen()
        {
            symbol = "♛";
            pieceType = "Queen";
            colour = "White";
        }
};

class whiteKnight : public Piece
{
    public:
        whiteKnight()
        {
            symbol = "♞";
            pieceType = "Knight";
            colour = "White";
        }
};

class whiteBishop : public Piece
{
    public:
        whiteBishop()
        {
            symbol = "♝";
            pieceType = "Bishop";
            colour = "White";
        }
};

class whiteRook : public Piece
{
    public:
        whiteRook()
        {
            symbol = "♜";
            pieceType = "Rook";
            colour = "White";
        }
};

class whitePawn : public Piece
{
    public:
        whitePawn() 
        {
            symbol = "♟";
            pieceType = "Pawn";
            numMoves = 0;
            colour = "White";
        }
};

// Black pieces
class blackKing : public Piece
{
    public:
        blackKing() 
        {
            symbol = "♔";
            pieceType = "King";
            colour = "Black";
        }
};

class blackQueen : public Piece
{
    public:
        blackQueen()
        {
            symbol = "♕";
            pieceType = "Queen";
            colour = "Black";
        }
};

class blackKnight : public Piece
{
    public:
        blackKnight()
        {
            symbol = "♘";
            pieceType = "Knight";
            colour = "Black";
        }
};

class blackBishop : public Piece
{
    public:
        blackBishop()
        {
            symbol = "♗";
            pieceType = "Bishop";
            colour = "Black";
        }
};

class blackRook : public Piece
{
    public:
        blackRook()
        {
            symbol = "♖";
            pieceType = "Rook";
            colour = "Black";
        }
};

class blackPawn : public Piece
{
    public:
        blackPawn() 
        {
            symbol = "♙";
            pieceType = "Pawn";
            colour = "Black";
        }
};


#endif
