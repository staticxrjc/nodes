#ifndef NODES_NODES_H
#define NODES_NODES_H

#include <SFML/Graphics.hpp>

class nodes {
private:
    float mX, mY;

public:
    nodes(int,int);
    void drawSelf(sf::RenderWindow&);
};

#endif //NODES_NODES_H
