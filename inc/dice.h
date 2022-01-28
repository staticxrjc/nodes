#ifndef DICE_H
#define DICE__H

#include <SFML/Graphics.hpp>

class dice {
private:
    int m_value;
    sf::CircleShape m_diceDots[7];
    float m_xPosition;
    float m_yPosition;
    float m_size;
    sf::RenderWindow *m_window;

    // private functions
    void initVariables();

public:
    dice(int, sf::RenderWindow*, float, float, float);
    dice(int, sf::RenderWindow*);
    void setValue(int);
    int getValue();
    void drawSelf();
};

#endif