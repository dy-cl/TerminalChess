#ifndef TURN_H
#define TURN_H

#include <string>
#include <vector>
#include "Piece.h"

// Converts chess notation string into array coordinates
std::vector<int> convertInputToArrayCoord(std::string input);

// Test validity of move
bool isMoveValid(std::vector<std::vector<Piece*>>& board);

// Handles turn taking logic
void takeTurn(std::vector<std::vector<Piece*>>& board);

#endif

