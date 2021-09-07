#include "Game.hpp"



int main() {

    //Initialize Game
    Game game;

    //game loop
    while(game.isRunning())
    {
        //CHECK INPUT
        game.CheckInput();

        //UPDATE
        game.Update();

        //RENDER
        game.Render();


    }


    //end application
    return 0;


}
