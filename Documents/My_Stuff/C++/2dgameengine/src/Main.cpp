#include <iostream>

// Engine libraries
#include "./Game.h"
#include "./Constants.h"



int main(int argc, char * argv[]){
    Game * game = new Game();

    game->Initialaze(WINDOW_WIDTH, WINDOW_HEIGHT);

    while(game->IsRunning()){
        game->ProcessInput();
        game->Update();
        game->Render();
    }


    game->Destroy();

    return 0;
}