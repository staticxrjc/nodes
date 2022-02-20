#ifndef GAME_H
#define GAME_H

#include <SFML/Graphics.hpp>
#include <canvas.h>
#include <nodes.h>
#include <vector>

class canvas;

class gameEngine {
private:
    // SF Variables
    sf::RenderWindow *window{};
    sf::VideoMode videoMode;
    sf::Event event{};

    // local variables
    std::vector<nodes*> node;
    sf::Vector2i cursorPosition;

    // Configuration Variables
    int mHeight, mWidth;

    // Child Classes
    canvas *drawArea{};

    // Initialization of variables to null
    void initVariables(int,int);

    // Initialize Window
    void initWindow(int, int);

    // Draw Cursor
    void drawCursor();

public:
    explicit gameEngine(int = 800, int = 800);
    ~gameEngine();
    bool isRunning();
    void processEvent();
    void update();
    void renderScreen();
};
#endif