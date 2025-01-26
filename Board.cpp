#include <iostream>
#include "Board.h"
#include "Piece.h"

// Constructor
Board::Board() 
{   
    // Initialise 8 x 8 grid of nullptr of type Piece
    board = std::vector<std::vector<Piece*>>(8, std::vector<Piece*>(8, nullptr));
}

// Destructor deletes pieces when board object goes out of scope
Board::~Board()
{
    for (auto& row : board)
    {
        for (auto& piece : row)
        {   
            delete piece;
        }
    }
}

// Places all pieces on the board
void Board::initialisePositions()
{
    
    // Place Pawns
    for (int col = 0; col < 8; col++)
    {
        board[1][col] = new Pawn("Black");
        board[6][col] = new Pawn("White");
    }

    // Place Rooks
    board[0][0] = new Rook("Black");
    board[0][7] = new Rook("Black");
    board[7][0] = new Rook("White");
    board[7][7] = new Rook("White");  

    // Place Knights
    board[0][1] = new Knight("Black"); 
    board[0][6] = new Knight("Black");
    board[7][1] = new Knight("White");
    board[7][6] = new Knight("White");

    // Place Bishops
    board[0][2] = new Bishop("Black");
    board[0][5] = new Bishop("Black");
    board[7][2] = new Bishop("White");
    board[7][5] = new Bishop("White");

    // Place Kings and Queens
    board[0][3] = new Queen("Black");
    board[7][3] = new Queen("White");
    board[0][4] = new King("Black");
    board[7][4] = new King("White");
}   

// Draws board with square colours and piece positions
void Board::drawBoard() const
{
    for (int row = 0; row < 8; row++)
    {
        for (int col = 0; col < 8; col++)
        {
            if (board[row][col] != nullptr)
            {
                std::cout << board[row][col]->getSymbol() << " ";
            }

            else if (board[row][col] == nullptr && (row + col) % 2 == 0)
            {
                std::cout << "■" << " ";
            }

            else if (board[row][col] == nullptr && (row + col) % 2 != 0)
            {
                std::cout << "□" << " ";
            }
        }

        std::cout << std::endl;
    }
}

// Return a pointer to the piece at the given position which is nullptr if the square is empty
Piece* Board::getPiece(int row, int col) const 
{
    return board[row][col];
}

// Set end position to point to start position piece, set start position to be nullptr
void Board::movePiece(int startRow, int startCol, int endRow, int endCol) 
{
    board[endRow][endCol] = board[startRow][startCol];
    board[startRow][startCol] = nullptr;
}

