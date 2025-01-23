#include <iostream>
#include "Board.h"
#include "Piece.h"
#include "Turn.h"
#include "Valid.h"

// Connverts user input from chess notation coordinates to array elements
std::vector<int> convertInputToArrayCoord(std::string input)
{   
    // Input checking
    if (input.size() != 2)
    {
        std::cout << "Invalid coordinate format." << std::endl;
        return {-1, -1}; // Return error coordinate
    }

    if (input[0] > 'h' || input[0] < 'a')
    {
        std::cout << "Invalid coordinate format." << std::endl;
        return {-1, -1}; 
    }

    if (input[1] > '8' || input[1] < '1')
    {
        std::cout << "Invalid coordinate format." << std::endl;
        return {-1, -1}; 
    }
    
    // Conversion
    int first = 8 - (input[1] - '0'); // Integers start at 48 in ASCII and '0' has code 48
    int second = input[0] - 'a'; // Lowercase characters start at 61 and 'a' has code 61
    //std::cout << "Move in array coordinate: " << first << " " << second << std::endl;

    return {first, second};
}



void takeTurn(std::vector<std::vector<Piece*>>& board)
{
    std::vector<int> selectedPieceArrayPosition = {-1, -1}; // Initialise as invalid position
    std::vector<int> selectedMoveArrayPosition = {-1, -1};
    
    // Ensures selected piece is valid as convertInputToArrayCoord will return {-1, -1} for invalid positions
    while (selectedPieceArrayPosition[0] == -1 && selectedPieceArrayPosition[1] == -1)
    {
        std::string input;
        std::cout << "Select piece to move: ";
        std::cin >> input;
        selectedPieceArrayPosition = convertInputToArrayCoord(input);
    }

    while (selectedMoveArrayPosition[0] == -1 && selectedMoveArrayPosition[1] == -1)
    {
        std::string input;
        std::cout << "Select where to move: ";
        std::cin >> input;
        selectedMoveArrayPosition = convertInputToArrayCoord(input);
    }

    bool move = isMoveValid(board, selectedPieceArrayPosition, selectedMoveArrayPosition);
    
    // If move is invalid restart the function to prompt new move input
    if (move == false)
    {
        std::cout << "Invalid move." << std::endl;
        takeTurn(board);
    }
    else if (move == true)
    {
        // Move piece
        board[selectedMoveArrayPosition[0]][selectedMoveArrayPosition[1]] = std::move(board[selectedPieceArrayPosition[0]][selectedPieceArrayPosition[1]]);
        board[selectedPieceArrayPosition[0]][selectedPieceArrayPosition[1]] = nullptr;
    }
}

