#include <iostream>
#include <string>
#include <vector>
#include "Board.h"
#include "Piece.h"
#include "Turn.h"
#include "Valid.h"

// Check validity of proposed move
bool isMoveValid(std::vector<std::vector<Piece*>>& board, std::vector<int> startPos, std::vector<int> endPos)
{
    std::string type = board[startPos[0]][startPos[1]]->pieceType;
    bool isValid;
    
    // Prevent moves to same space
    if (startPos == endPos)
    {
        return false;
    }
    
    // Call piece specific logic for checking validity
    if (type == "King")
    {
        isValid = isKingMoveValid(board, startPos, endPos);
    }
    else if (type == "Queen")
    {
        isValid = isQueenMoveValid(board, startPos, endPos);
    }
    else if (type == "Knight")
    {
        isValid = isKnightMoveValid(board, startPos, endPos);
    }
    else if (type == "Bishop")
    {
        isValid = isBishopMoveValid(board, startPos, endPos);
    }
    else if (type == "Rook")
    {
        isValid = isRookMoveValid(board, startPos, endPos);
    }
    else if (type == "Pawn")
    {
        isValid = isPawnMoveValid(board, startPos, endPos);
    }

    return isValid;
}

bool isKingMoveValid(std::vector<std::vector<Piece*>>& board, std::vector<int> startPos, std::vector<int> endPos)
{
    // TODO
    return true;
}


bool isQueenMoveValid(std::vector<std::vector<Piece*>>& board, std::vector<int> startPos, std::vector<int> endPos)
{
    // TODO
    return true;
}


bool isKnightMoveValid(std::vector<std::vector<Piece*>>& board, std::vector<int> startPos, std::vector<int> endPos)
{
    // TODO
    return true;
}


bool isBishopMoveValid(std::vector<std::vector<Piece*>>& board, std::vector<int> startPos, std::vector<int> endPos)
{
    // TODO
    return true;
}


bool isRookMoveValid(std::vector<std::vector<Piece*>>& board, std::vector<int> startPos, std::vector<int> endPos)
{
    // TODO
    return true;
}


bool isPawnMoveValid(std::vector<std::vector<Piece*>>& board, std::vector<int> startPos, std::vector<int> endPos)
{
    // TODO:
    // Check if a piece is diagonal to the pawn ensuring that this is the opponents piece, if there is set takeablePiece = true
    // If takeablePiece == false, check that pawn is only moving 1 or 2 squares forward, 2 squares on its first move only, ensure pawn cannot change column
    // For double moves, ensure there are no pieces in the intermediate square
    // Ensure that pawn cannot move backwards 
    // If takeablePiece == true, the pawn can move 1 square diagonally forwards and capture a piece, will need to implement capture logic for this
    // Logic for En Passant
    
    return true;
}
