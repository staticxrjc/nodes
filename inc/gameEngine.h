#ifndef GAME_H
#define GAME_H

#include <SFML/Graphics.hpp>
#include <canvas.h>

class canvas;

class gameEngine {
private:
    // SF Variables
    sf::RenderWindow *window{};
    sf::VideoMode videoMode;
    sf::Event event{};

    // Configuration Variables
    int mHeight, mWidth;

    // Child Classes
    canvas *drawArea{};

    // Initialization of variables to null
    void initVariables(int,int);

    // Initialize Window
    void initWindow(int, int);

public:
    explicit gameEngine(int = 800, int = 800);
    ~gameEngine();
    bool isRunning();
    void processEvent();
    void renderScreen();
};
#endif