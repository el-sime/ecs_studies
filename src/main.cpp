#include "raylib.h"
#include "Game.hpp"

int main(int argc, char * argv[])
{
    Game *game = new Game();
    game->Init(800, 600, "VideoGame");
    game->Run();

    delete game;
    return 0;
}