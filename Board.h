#ifndef BOARD_H
#define BOARD_H

#include <vector>
#include "Piece.h"

class Board 
{
    private:
        // Board member variable
        std::vector<std::vector<Piece*>> board;

    public:
        // Constructor and destructor
        Board();
        ~Board();

        void initialisePositions(); // Place pieces on board
        void drawBoard() const; // Output current board state to terminal, const as this should not modify board state
        Piece* getPiece(int row, int col) const; // Return pointer to piece at a position, also const
        void movePiece(int startRow, int startCol, int endRow, int endCol); // Move a piece
};

#endif
