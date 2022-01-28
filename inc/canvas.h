#ifndef CANVAS_H
#define CANVAS_H

#include <SFML/Graphics.hpp>
#include <iostream>

class gameEngine;

class canvas {
private: 
    // Conviguration of Canvas elements
    int width, height;
    int topLeftX, topLeftY;
    int borderThickness;
    sf::Color borderColor;
    sf::Color canvasBackgroundColor;

public:
    canvas(int = 0, int = 0, int = 200, int = 200, int = 1);
    ~canvas();
    void drawCanvas(sf::RenderWindow*);
};
#endif