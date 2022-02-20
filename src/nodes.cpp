
#include "nodes.h"

nodes::nodes(int x, int y) {
    mX = x;
    mY = y;

}

void nodes::drawSelf(sf::RenderWindow &window) {
    sf::CircleShape shape(1.0f);
    shape.setPosition(this->mX, this->mY);
    shape.setFillColor(sf::Color::Red);
    window.draw(shape);

}

