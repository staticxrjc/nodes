#include <gameEngine.h>

int main()
{
    gameEngine game;

    while (game.isRunning()) {
        // Event Loop
        game.processEvent();

        // Update
        game.update();

        //Render
        game.renderScreen();

    }

    return 0;
}