#include <iostream>
#include <string>
#include <vector>
#include "Board.h"
#include "Piece.h"
#include "Turn.h"
#include "Valid.h"

// Check validity of proposed move
bool isMoveValid(std::vector<std::vector<Piece*>>& board, std::vector<int> startPos, std::vector<int> endPos, std::string whosTurn)
{
    // Get type of piece that is being moved
    std::string type = board[startPos[0]][startPos[1]]->pieceType;
    bool isValid;

    Piece* startPiece = board[startPos[0]][startPos[1]];
    Piece* endPiece = board[endPos[0]][endPos[1]];
    
    // Prevent moves to same space
    if (startPos == endPos)
    {
        return false;
    }
    
    // Prevent moving opponents pieces
    if (startPiece->colour == "White" && whosTurn == "Black")
    {
        return false;
    }
    if (startPiece->colour == "Black" && whosTurn == "White")
    {
        return false;
    }

    // Prevent capturing the King, check that the end square is not nullptr first or this will cause seg fault
    if (board[endPos[0]][endPos[1]] != nullptr)
    {
        if (endPiece->pieceType == "King")
        {
            return false;
        }
    }
    
    // Call piece specific logic for checking validity
    if (type == "King")
    {
        isValid = isKingMoveValid(board, startPos, endPos, whosTurn);
    }
    else if (type == "Queen")
    {
        isValid = isQueenMoveValid(board, startPos, endPos, whosTurn);
    }
    else if (type == "Knight")
    {
        isValid = isKnightMoveValid(board, startPos, endPos, whosTurn);
    }
    else if (type == "Bishop")
    {
        isValid = isBishopMoveValid(board, startPos, endPos, whosTurn);
    }
    else if (type == "Rook")
    {
        isValid = isRookMoveValid(board, startPos, endPos, whosTurn);
    }
    else if (type == "Pawn")
    {
        isValid = isPawnMoveValid(board, startPos, endPos, whosTurn);
    }

    return isValid;
}

bool isKingMoveValid(std::vector<std::vector<Piece*>>& board, std::vector<int> startPos, std::vector<int> endPos, std::string whosTurn)
{
    // TODO
    return true;
}


bool isQueenMoveValid(std::vector<std::vector<Piece*>>& board, std::vector<int> startPos, std::vector<int> endPos, std::string whosTurn)
{
    // TODO
    return true;
}


bool isKnightMoveValid(std::vector<std::vector<Piece*>>& board, std::vector<int> startPos, std::vector<int> endPos, std::string whosTurn)
{
    // TODO
    return true;
}


bool isBishopMoveValid(std::vector<std::vector<Piece*>>& board, std::vector<int> startPos, std::vector<int> endPos, std::string whosTurn)
{
    // TODO
    return true;
}


bool isRookMoveValid(std::vector<std::vector<Piece*>>& board, std::vector<int> startPos, std::vector<int> endPos, std::string whosTurn)
{
    // TODO
    return true;
}


bool isPawnMoveValid(std::vector<std::vector<Piece*>>& board, std::vector<int> startPos, std::vector<int> endPos, std::string whosTurn)
{
    // TODO:
    // Ensure that pawn cannot move backwards
    // If takeablePiece == true, the pawn can move 1 square diagonally forwards and capture a piece, will need to implement capture logic for this
    // Logic for En Passant
    // Logic for promotion
    
    // Useful variables
    bool takeablePiece = false;
    std::vector<int> takeablePiecePos; 
    int direction = (whosTurn == "White") ? -1 : 1;

    // Check for out of bounds 
    if (endPos[0] < 0 || endPos[0] >= 8 || endPos[1] < 0 || endPos[1] >= 8)
    {
        return false;
    }
    
    // For diagonal captures: check that start and end columns are adjacent, and that destination row is only 1 move forward
    if (std::abs(endPos[1] - startPos[1]) == 1 && endPos[0] == startPos[0] + direction)
    { 
        // Get status of square at end position
        Piece* target = board[endPos[0]][endPos[1]];

        // Check if a piece is present on the target square and it is the opponents piece
        if (target != nullptr && target->colour != whosTurn)
        {
            takeablePiece = true;
        }
    }
    
    // For single forward moves: check that start and end columns are equal, and that destination row is only 1 move forward
    if (endPos[1] == startPos[1] && endPos[0] == startPos[0] + direction)
    {
        // Check that there is not a piece occupying the destination square
        if (board[endPos[0]][startPos[1]] == nullptr)
        {
            return true; // Valid move
        }
    } 

    // For double forward moves: check that start and end columns are equal, and that destination row is only 2 moves forward
    if (endPos[1] == startPos[1] && endPos[0] == startPos[0] + 2*direction)
    {
        // Check that there is not a piece occupying destination or intermediate square
        if (board[endPos[0]][endPos[1]] == nullptr && board[startPos[0] + direction][startPos[1]] == nullptr)
        {
            return true; // Valid move
        }
    }

    return false;

} 
