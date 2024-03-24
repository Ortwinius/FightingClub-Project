#include "game.hpp"

int main()
{
    Game game;
    while (game.gameIsRunning) 
    {
        game.run(); 
    }
    return 0;
}
