#include "Piece.h"
#include "Board.h"
#include <cmath>

bool King::isMoveValid(const Board& board, int startRow, int startCol, int endRow, int endCol) const
{   
    // TODO: Implement move logic for King piece
    return true;
}


bool Queen::isMoveValid(const Board& board, int startRow, int startCol, int endRow, int endCol) const
{   
    // TODO: Implement move logic for Queen piece
    return true;
}


bool Rook::isMoveValid(const Board& board, int startRow, int startCol, int endRow, int endCol) const
{   
    // TODO: Implement move logic for Rook piece
    return true;
}


bool Bishop::isMoveValid(const Board& board, int startRow, int startCol, int endRow, int endCol) const
{   
    // TODO: Implement move logic for Bishop piece
    return true;
}


bool Knight::isMoveValid(const Board& board, int startRow, int startCol, int endRow, int endCol) const
{   
    // TODO: Implement move logic for Knight piece
    return true;
}

bool Pawn::isMoveValid(const Board& board, int startRow, int startCol, int endRow, int endCol) const
{
    // TODO:
    // Ensure that pawn cannot move backwards
    // If takeablePiece == true, the pawn can move 1 square diagonally forwards and capture a piece, will need to implement capture logic for this
    // Logic for En Passant
    // Logic for promotion
    
    int direction = (getColour() == "White") ? -1 : 1;

    // Check for out of bounds 
    if (endRow < 0 || endRow >= 8 || endCol < 0 || endCol >= 8)
    {
        return false;
    }
    
    // For diagonal captures: check that start and end columns are adjacent, and that destination row is only 1 move forward
    if (std::abs(endCol - startCol) == 1 && endRow == startRow + direction)
    { 
        // Get status of square at end position
        Piece* target = board.getPiece(endRow, endCol);

        // Check if a piece is present on the target square and it is the opponents piece
        if (target != nullptr && target->getColour() != getColour())
        {
            return true;
        }
    }
    
    // For single forward moves: check that start and end columns are equal, and that destination row is only 1 move forward
    if (endCol == startCol && endRow == startRow + direction)
    {
        // Check that there is not a piece occupying the destination square
        if (board.getPiece(endRow, endCol) == nullptr)
        {
            return true; // Valid move
        }
    } 

    // For double forward moves: check that start and end columns are equal, and that destination row is only 2 moves forward
    if (endCol == startCol && endRow == startRow + 2*direction)
    {
        // Check that pawn has not moved yet
        if ((getColour() == "White" && startRow == 6) || (getColour() == "Black" && startRow == 1))
        {   
            // Check that both squares in front are empty
            if (board.getPiece(endRow, endCol) == nullptr && board.getPiece(startRow + direction, startCol) == nullptr)
            {
                return true; // Valid move
            }
        }
    }

    return false;
}


