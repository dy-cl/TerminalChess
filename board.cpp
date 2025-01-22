#include <iostream>
#include <string>
#include <vector>

std::vector<std::vector<std::string>> initaliseBoard()
{
    // Initialize board 
    std::vector<std::vector<std::string>> board = 
    {
        {"♖", "♘", "♗", "♕", "♔", "♗", "♘", "♖"},
        {"♙", "♙", "♙", "♙", "♙", "♙", "♙", "♙"},
        {" ", " ", " ", " ", " ", " ", " ", " "},
        {" ", " ", " ", " ", " ", " ", " ", " "},
        {" ", " ", " ", " ", " ", " ", " ", " "},
        {" ", " ", " ", " ", " ", " ", " ", " "},
        {"♟", "♟", "♟", "♟", "♟", "♟", "♟", "♟"},
        {"♜", "♞", "♝", "♛", "♚", "♝", "♞", "♜"}
    };

    // Update square colors
    for (int row = 0; row < 8; row++)
    {
        for (int col = 0; col < 8; col++)
        {
            if ((row + col) % 2 == 0 && board[row][col] == " ")
            {
                board[row][col] = "■"; // Black square
            }
            else if ((row + col) % 2 != 0 && board[row][col] == " ")
            {
                board[row][col] = "□"; // White square
            }
            else
            {
                continue;
            }
        }
    }

    // Print board 
    for (int row = 0; row < 8; row++) 
    {
        for (int col = 0; col < 8; col++) 
        {
            std::cout << board[row][col] << " ";
        }

        std::cout << std::endl;

    }

    return board;
}

int main()
{   
    std::vector<std::vector<std::string>> board = initaliseBoard();

    return 0;
}

