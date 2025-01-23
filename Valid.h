#ifndef VALID_H
#define VALID_H

#include "Piece.h"

// Check validity of proposed move
bool isMoveValid(std::vector<std::vector<Piece*>>& board, std::vector<int> startPos, std::vector<int> endPos);

bool isKingMoveValid(std::vector<std::vector<Piece*>>& board, std::vector<int> startPos, std::vector<int> endPos);
bool isQueenMoveValid(std::vector<std::vector<Piece*>>& board, std::vector<int> startPos, std::vector<int> endPos);
bool isKnightMoveValid(std::vector<std::vector<Piece*>>& board, std::vector<int> startPos, std::vector<int> endPos);
bool isBishopMoveValid(std::vector<std::vector<Piece*>>& board, std::vector<int> startPos, std::vector<int> endPos);
bool isRookMoveValid(std::vector<std::vector<Piece*>>& board, std::vector<int> startPos, std::vector<int> endPos);
bool isPawnMoveValid(std::vector<std::vector<Piece*>>& board, std::vector<int> startPos, std::vector<int> endPos);

#endif
