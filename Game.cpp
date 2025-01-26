#include <iostream>
#include <type_traits>
#include "Game.h"

// Constructor for game object, sets currentTurn to White and calls function to place the pieces
Game::Game() : currentTurn("White")
{
    board.initialisePositions();
}

// Main game loop
void Game::play()
{
    while (isCheckmate() == false)
    {   
        // Output board to terminal
        board.drawBoard();
        std::cout << currentTurn << "'s turn." << std::endl;
        
        // Get user input
        std::string startInput, endInput;
        std::cout << "Select piece: ";
        std::cin >> startInput;
        std::cout << "Select where to move: ";
        std::cin >> endInput;
        
        // Try converting user input into array coordinates
        try 
        {
            std::vector<int> start = convertChessNotation(startInput);
            std::vector<int> end = convertChessNotation(endInput);
            
            // Get pointer to selected position 
            Piece* piece = board.getPiece(start[0], start[1]);
            
            // Check there is a piece at select position and it is the current players piece and the proposed move is valid
            if (piece != nullptr && piece->getColour() == currentTurn && piece->isMoveValid(board, start[0], start[1], end[0], end[1]) == true)
            {   
                // Perform the move and change the players turn
                board.movePiece(start[0], start[1], end[0], end[1]);
                switchTurn();
            }
            else 
            {
                std::cout << "Invalid move." << std::endl;
            }
        } 
        
        // If converting user input fails try again
        catch (const std::invalid_argument& e)
        {
            std::cout << "Invalid input" << std::endl;
        }
    }
}

std::vector<int> Game::convertChessNotation(const std::string& notation) const
{   
    // Input must be of length 2
    if (notation.length() != 2)
    {   
        throw std::invalid_argument("Input must be 2 characters.");
    }

    char file = notation[0];
    char rank = notation[1];

    // Check for out of bounds input
    if (file < 'a' || file > 'h' || rank < '1' || rank > '8')
    {
        throw std::invalid_argument("Input out of range.");
    }
    
    // Convert input into array coordinates
    int col = file - 'a'; // Cast file and 'a' to int and subtract to obtain column index starting from 0 
    int row = 8 - (rank - '0'); // Cast rank and '0' to int and subtract from 8 as lowest rank is highest row array

    return {row, col};
}

// Switch turns
void Game::switchTurn()
{
    currentTurn = (currentTurn == "White") ? "Black" : "White";
}

bool Game::isCheckmate() const
{
    // TODO: Implement checkmate logic
    return false;
}
