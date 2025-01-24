#include <vector>
#include "Board.h"
#include "Piece.h"
#include "Turn.h"
#include "Valid.h"

// Initialise Global board variable
std::vector<std::vector<Piece*>> board;

int main()
{   
    // Variables to keep track of whos turn it is
    int turn = 0; 
    std::string whosTurn;

    board = createBoard();
    initialisePositions(board);

    // Main loop
    bool checkmate = false;
    while (checkmate == false)
    {
        if (turn % 2 == 0)
        {
            whosTurn = "White";
            drawBoard(board);
            takeTurn(board, whosTurn);
            turn++;
        }
        else
        {
            whosTurn = "Black";
            drawBoard(board);
            takeTurn(board, whosTurn);
            turn++;
        }
    } 
    return 0;
}
