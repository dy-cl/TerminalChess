#include <iostream>
#include <string>
#include <vector>
#include "Board.h"
#include "Piece.h"
#include "Turn.h"
#include "Valid.h"

// Check validity of proposed move
bool isMoveValid(std::vector<std::vector<Piece*>>& board, std::vector<int> selectedPieceArrayPosition, std::vector<int> selectedMoveArrayPosition)
{
    std::string type = board[selectedPieceArrayPosition[0]][selectedPieceArrayPosition[1]]->pieceType;
    bool isValid;
    
    // Prevent moves to same space
    if (selectedPieceArrayPosition == selectedMoveArrayPosition)
    {
        return false;
    }
    
    // Call piece specific logic for checking validity
    if (type == "King")
    {
        isValid = isKingMoveValid(board, selectedPieceArrayPosition, selectedMoveArrayPosition);
    }
    else if (type == "Queen")
    {
        isValid = isQueenMoveValid(board, selectedPieceArrayPosition, selectedMoveArrayPosition);
    }
    else if (type == "Knight")
    {
        isValid = isKnightMoveValid(board, selectedPieceArrayPosition, selectedMoveArrayPosition);
    }
    else if (type == "Bishop")
    {
        isValid = isBishopMoveValid(board, selectedPieceArrayPosition, selectedMoveArrayPosition);
    }
    else if (type == "Rook")
    {
        isValid = isRookMoveValid(board, selectedPieceArrayPosition, selectedMoveArrayPosition);
    }
    else if (type == "Pawn")
    {
        isValid = isPawnMoveValid(board, selectedPieceArrayPosition, selectedMoveArrayPosition);
    }

    return isValid;
}

bool isKingMoveValid(std::vector<std::vector<Piece*>>& board, std::vector<int> selectedPieceArrayPosition, std::vector<int> selectedMoveArrayPosition)
{
    // TODO
    return true;
}


bool isQueenMoveValid(std::vector<std::vector<Piece*>>& board, std::vector<int> selectedPieceArrayPosition, std::vector<int> selectedMoveArrayPosition)
{
    // TODO
    return true;
}


bool isKnightMoveValid(std::vector<std::vector<Piece*>>& board, std::vector<int> selectedPieceArrayPosition, std::vector<int> selectedMoveArrayPosition)
{
    // TODO
    return true;
}


bool isBishopMoveValid(std::vector<std::vector<Piece*>>& board, std::vector<int> selectedPieceArrayPosition, std::vector<int> selectedMoveArrayPosition)
{
    // TODO
    return true;
}


bool isRookMoveValid(std::vector<std::vector<Piece*>>& board, std::vector<int> selectedPieceArrayPosition, std::vector<int> selectedMoveArrayPosition)
{
    // TODO
    return true;
}


bool isPawnMoveValid(std::vector<std::vector<Piece*>>& board, std::vector<int> selectedPieceArrayPosition, std::vector<int> selectedMoveArrayPosition)
{
    // TODO
    return true;
}
