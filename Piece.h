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
        }
};

class whiteQueen : public Piece
{
    public:
        whiteQueen()
        {
            symbol = "♛";
            pieceType = "Queen";
        }
};

class whiteKnight : public Piece
{
    public:
        whiteKnight()
        {
            symbol = "♞";
            pieceType = "Knight";
        }
};

class whiteBishop : public Piece
{
    public:
        whiteBishop()
        {
            symbol = "♝";
            pieceType = "Bishop";
        }
};

class whiteRook : public Piece
{
    public:
        whiteRook()
        {
            symbol = "♜";
            pieceType = "Rook";
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
        }
};

class blackQueen : public Piece
{
    public:
        blackQueen()
        {
            symbol = "♕";
            pieceType = "Queen";
        }
};

class blackKnight : public Piece
{
    public:
        blackKnight()
        {
            symbol = "♘";
            pieceType = "Knight";
        }
};

class blackBishop : public Piece
{
    public:
        blackBishop()
        {
            symbol = "♗";
            pieceType = "Bishop";
        }
};

class blackRook : public Piece
{
    public:
        blackRook()
        {
            symbol = "♖";
            pieceType = "Rook";
        }
};

class blackPawn : public Piece
{
    public:
        blackPawn() 
        {
            symbol = "♙";
            pieceType = "Pawn";
        }
};


#endif
