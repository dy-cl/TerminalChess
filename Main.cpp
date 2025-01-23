#include "Piece.h"
#include <vector>
#include <string>
#include <iostream>
#include <map>

// Create 8x8 vector of nullptr to create drawBoard
std::vector<std::vector<Piece*>> board(8, std::vector<Piece*>(8, nullptr));

// Places all pieces on the board
void initialisePositions()
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

// Connverts user input from chess notation coordinates to array elements
std::vector<int> convertInputToArrayCoord(std::string coordinate)
{
    if (coordinate.size() != 2)
    {
        std::cout << "Invalid coordinate format." << std::endl;
        return {-1, -1}; // Return error coordinate
    }



    return {0, 0};
}

void takeTurn()
{
    std::vector<int> selectedPieceArrayPosition = {-1, -1}; // Initialise as invalid position
    
    // Ensures selected piece is valid as convertInputToArrayCoord will return {-1, -1} for invalid positions
    while (selectedPieceArrayPosition[0] == -1 && selectedPieceArrayPosition[1] == -1)
    {
        std::string input;
        std::cout << "Select piece to move: ";
        std::cin >> input;
        selectedPieceArrayPosition = convertInputToArrayCoord(input);
    }

}






int main()
{  
    initialisePositions();
    drawBoard();
    takeTurn();
    
    return 0;
}
