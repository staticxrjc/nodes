#include <gameEngine.h>

// Private Functions
void gameEngine::initVariables(int width, int height){
    mHeight = height;
    mWidth = width;
    this->window = nullptr;
    this->drawArea = new canvas(10,10,500,500);
}

void gameEngine::initWindow(int width, int height){
    this->videoMode.height = height;
    this->videoMode.width = width;
    this->window = new sf::RenderWindow(this->videoMode, "Nodes!");
}

gameEngine::gameEngine(int height, int width){
    initVariables(width, height);
    initWindow(width, height);
}

gameEngine::~gameEngine() {
    delete this->window;
    delete this->drawArea;
}

bool gameEngine::isRunning(){
    if (this->window)
        return this->window->isOpen();
    else
        return false;
}

void gameEngine::processEvent(){
    float heightA;
    float widthA;
    if(this->window) {
        while (this->window->pollEvent(event))
            switch (event.type) {
                case sf::Event::Closed:
                    this->window->close();
                    break;
                case sf::Event::KeyPressed:
                    if (event.key.code == sf::Keyboard::Escape)
                        window->close();
                    break;
                case sf::Event::Resized:
                    std::cout << "Window Resized\n"
                                 "Redraw Canvas\n";
                    widthA = float(mWidth) / float(this->window->getSize().x);
                    heightA = float(mHeight) / float(this->window->getSize().y);
                    std::cout << "widthA: " << widthA << std::endl;
                    std::cout << "heightA: " << heightA << std::endl;
                    delete this->drawArea;
                    this->drawArea = new canvas(10*widthA,10*heightA,500*widthA,500*heightA);
                    this->drawArea->setGridSpacing(10*widthA, 10*heightA);
                    break;
                default:
                    break;
            }
    }
    else {
        std::cout << "Window is undefined!\n";
    }
}

void gameEngine::renderScreen(){
    if(this->window && this->drawArea) {
        this->window->clear(sf::Color(0,0,155,255));
        this->drawArea->drawCanvas(this->window);
        window->display();
    }
    else {
        std::cout << "Window or DrawArea undefined\n";
    }
}