#include "Piece.h"
#include <vector>
#include <string>
#include <memory>
#include <iostream>

// Create 8x8 vector of nullptr to create drawBoard
std::vector<std::vector<Piece*>> board(8, std::vector<Piece*>(8, nullptr));

void initialisePositions()
{
    
    // Allocate heap memory for Pawn objects and return pointer to them on board matrix

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

void drawBoard()
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

int main()
{  

    



    initialisePositions();
    drawBoard();
    return 0;
}
