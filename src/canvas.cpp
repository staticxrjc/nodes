#include <canvas.h>

canvas::canvas(float x, float y, float width, float height, float border) {
    this->mVerticalSpacing = 10.0f;
    this->mHorizontalSpacing = 10.0f;
    this->width = width;
    this->height = height;
    this->topLeftX = x;
    this->topLeftY = y;
    this->borderThickness = border;
    this->borderColor = sf::Color::White;
    this->canvasBackgroundColor = sf::Color::Blue;
}

canvas::~canvas() {
    std::cout << "Destructing Draw Area!\n";
}

void canvas::drawCanvas(sf::RenderWindow* window) {
    // Draw Canvas Border
    // create a quad
    sf::VertexArray quad(sf::Quads, 4);

    quad[0].position = sf::Vector2f(topLeftX, topLeftY);
    quad[0].color = borderColor;
    quad[1].position = sf::Vector2f(topLeftX + width, topLeftY);
    quad[1].color = borderColor;
    quad[2].position = sf::Vector2f(topLeftX + width, topLeftY + height);
    quad[2].color = borderColor;
    quad[3].position = sf::Vector2f(topLeftX, topLeftY + height);
    quad[3].color = borderColor;

    window->draw(quad);
    
    quad[0].position = sf::Vector2f(topLeftX + borderThickness, topLeftY + borderThickness);
    quad[0].color = canvasBackgroundColor;
    quad[1].position = sf::Vector2f(topLeftX + width - borderThickness, topLeftY + borderThickness);
    quad[1].color = canvasBackgroundColor;
    quad[2].position = sf::Vector2f(topLeftX + width - borderThickness, topLeftY + height - borderThickness);
    quad[2].color = canvasBackgroundColor;
    quad[3].position = sf::Vector2f(topLeftX + borderThickness, topLeftY + height - borderThickness);
    quad[3].color = canvasBackgroundColor;
    
    window->draw(quad);
}

void canvas::setGridSpacing(float horizontal, float vertical) {
    mHorizontalSpacing = horizontal;
    mVerticalSpacing = vertical;
}
