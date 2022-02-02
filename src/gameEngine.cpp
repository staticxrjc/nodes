#include <gameEngine.h>

// Private Functions
void gameEngine::initVariables(){
    this->window = nullptr;
    this->drawArea = new canvas(10,10,500,500);
}

void gameEngine::initWindow(int width, int height){
    this->videoMode.height = height;
    this->videoMode.width = width;
    this->window = new sf::RenderWindow(this->videoMode, "Nodes!");
}

gameEngine::gameEngine(int height, int width){
    initVariables();
    initWindow(width, height);
}

gameEngine::~gameEngine() {
    delete this->window;
    delete this->drawArea;
}

bool gameEngine::isRunning(){
    return this->window->isOpen();
}

void gameEngine::processEvent(){
    while (this->window->pollEvent(event))
    {
        switch (event.type) {
            case sf::Event::Closed:
                this->window->close();
                break;
            case sf::Event::KeyPressed:
                if (event.key.code == sf::Keyboard::Escape)
                    window->close();
                break;
        }
    }
}

void gameEngine::renderScreen(){
    this->window->clear(sf::Color(0,0,155,255));
    this->drawArea->drawCanvas(this->window);
    window->display();
}
