#ifndef VALID_H
#define VALID_H

#include "Piece.h"

// Check validity of proposed move
bool isMoveValid(std::vector<std::vector<Piece*>>& board, std::vector<int> selectedPieceArrayPosition, std::vector<int> selectedMoveArrayPosition);

bool isKingMoveValid(std::vector<std::vector<Piece*>>& board, std::vector<int> selectedPieceArrayPosition, std::vector<int> selectedMoveArrayPosition);
bool isQueenMoveValid(std::vector<std::vector<Piece*>>& board, std::vector<int> selectedPieceArrayPosition, std::vector<int> selectedMoveArrayPosition);
bool isKnightMoveValid(std::vector<std::vector<Piece*>>& board, std::vector<int> selectedPieceArrayPosition, std::vector<int> selectedMoveArrayPosition);
bool isBishopMoveValid(std::vector<std::vector<Piece*>>& board, std::vector<int> selectedPieceArrayPosition, std::vector<int> selectedMoveArrayPosition);
bool isRookMoveValid(std::vector<std::vector<Piece*>>& board, std::vector<int> selectedPieceArrayPosition, std::vector<int> selectedMoveArrayPosition);
bool isPawnMoveValid(std::vector<std::vector<Piece*>>& board, std::vector<int> selectedPieceArrayPosition, std::vector<int> selectedMoveArrayPosition);

#endif
