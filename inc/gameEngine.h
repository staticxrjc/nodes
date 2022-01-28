#ifndef GAME_H
#define GAME_H

#include <SFML/Graphics.hpp>
#include <canvas.h>

class canvas;

class gameEngine {
private:
    // SF Variables
    sf::RenderWindow *window;
    sf::VideoMode videoMode;
    sf::Event event;

    // Child Classes
    canvas *drawArea;

    // Initialization of variables to null
    void initVariables();

    // Initialize Window
    void initWindow(int, int);

public:
    gameEngine(int = 800, int = 600);
    ~gameEngine();
    bool isRunning();
    bool gameEvent();
    void processEvent();
    void renderScreen();
};
#endif