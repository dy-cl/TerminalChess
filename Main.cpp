#include <vector>
#include "Board.h"
#include "Piece.h"
#include "Turn.h"
#include "Valid.h"

// Initialise Global board variable
std::vector<std::vector<Piece*>> board;

int main()
{   
    board = createBoard();
    initialisePositions(board);

    // Main loop
    bool checkmate = false;
    while (checkmate == false)
    {
        drawBoard(board);
        takeTurn(board);
    } 
    return 0;
}
