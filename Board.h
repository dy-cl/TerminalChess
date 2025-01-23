#ifndef BOARD_H
#define BOARD_H

#include "Piece.h"

// Create the board
std::vector<std::vector<Piece*>> createBoard();

// Set up the board
void initialisePositions(std::vector<std::vector<Piece*>>& board);

// Draw the board
void drawBoard(const std::vector<std::vector<Piece*>> &board);

#endif
