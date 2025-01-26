#include "Game.h"

int main()
{   
    // Initialising game object automatically calls constructor and sets up the board
    Game game;

    // Calls main gameplay loop
    game.play();

    return 0;
}
