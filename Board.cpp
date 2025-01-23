// Board.cpp
#include "Piece.h"
#include <iostream>

// Create 8x8 vector of nullptr
std::vector<std::vector<Piece*>> createBoard()
{
    return std::vector<std::vector<Piece*>>(8, std::vector<Piece*>(8, nullptr));
}

// Places all pieces on the board
void initialisePositions(std::vector<std::vector<Piece*>>& board)
{
    
    // Allocate heap memory for Piece objects and return pointer to them on board matrix

    // Place Pawns
    for (int col = 0; col < 8; col++)
    {
        board[1][col] = new blackPawn();
        board[6][col] = new whitePawn();
    }

    // Place Rooks
    board[0][0] = new blackRook();
    board[0][7] = new blackRook();
    board[7][0] = new whiteRook();
    board[7][7] = new whiteRook();  

    // Place Knights
    board[0][1] = new blackKnight(); 
    board[0][6] = new blackKnight();
    board[7][1] = new whiteKnight();
    board[7][6] = new whiteKnight();

    // Place Bishops
    board[0][2] = new blackBishop();
    board[0][5] = new blackBishop();
    board[7][2] = new whiteBishop();
    board[7][5] = new whiteBishop();

    // Place Kings and Queens
    board[0][3] = new blackQueen();
    board[7][3] = new whiteQueen();
    board[0][4] = new blackKing();
    board[7][4] = new whiteKing();

}   

// Draws board with square colours and piece positions
void drawBoard(const std::vector<std::vector<Piece*>>& board)
{
    // Draw board
    for (int row = 0; row < 8; row++)
    {
        for (int col = 0; col < 8; col++)
        {
            if (board[row][col] != nullptr)
            {
                std::cout << board[row][col]->symbol << " ";
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

