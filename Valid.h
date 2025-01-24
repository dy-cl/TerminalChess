#ifndef VALID_H
#define VALID_H

#include "Piece.h"

// Check validity of proposed move
bool isMoveValid(std::vector<std::vector<Piece*>>& board, std::vector<int> startPos, std::vector<int> endPos, std::string whosTurn);

bool isKingMoveValid(std::vector<std::vector<Piece*>>& board, std::vector<int> startPos, std::vector<int> endPos, std::string whosTurn);
bool isQueenMoveValid(std::vector<std::vector<Piece*>>& board, std::vector<int> startPos, std::vector<int> endPos, std::string whosTurn);
bool isKnightMoveValid(std::vector<std::vector<Piece*>>& board, std::vector<int> startPos, std::vector<int> endPos, std::string whosTurn);
bool isBishopMoveValid(std::vector<std::vector<Piece*>>& board, std::vector<int> startPos, std::vector<int> endPos, std::string whosTurn);
bool isRookMoveValid(std::vector<std::vector<Piece*>>& board, std::vector<int> startPos, std::vector<int> endPos, std::string whosTurn);
bool isPawnMoveValid(std::vector<std::vector<Piece*>>& board, std::vector<int> startPos, std::vector<int> endPos, std::string whosTurn);

#endif
