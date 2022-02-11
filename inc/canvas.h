#ifndef CANVAS_H
#define CANVAS_H

#include <SFML/Graphics.hpp>
#include <iostream>

class gameEngine;

class canvas {
private: 
    // Conviguration of Canvas elements
    float width, height;
    float topLeftX, topLeftY;
    int borderThickness;
    sf::Color borderColor;
    sf::Color canvasBackgroundColor;

public:
    explicit canvas(float = 0, float = 0, float = 200.0f, float = 200.0f, int = 1);
    ~canvas();
    void drawCanvas(sf::RenderWindow*);
};
#endif