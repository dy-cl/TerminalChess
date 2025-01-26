#ifndef GAME_H
#define GAME_H

#include "Board.h"
#include "Piece.h"

class Game 
{   
    private:
        // Member variables
        Board board;
        std::string currentTurn;
        
        // Convert user input such as 'e4' into array coordinates
        std::vector<int> convertChessNotation(const std::string& notation) const;

    public:
        // Constructor initialises game state
        Game();

        // Handle main gameplay loop
        void play();
        bool isCheckmate() const;
        void switchTurn();
};

#endif
