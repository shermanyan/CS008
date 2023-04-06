//
// Created by Dave R. Smith on 2/14/23.
//

#ifndef CS8_SPRING23_SFML_CALCULATOR_APPLICATION_H
#define CS8_SPRING23_SFML_CALCULATOR_APPLICATION_H

#include <SFML/Graphics.hpp>
#include "AppComponent.h"
class Application: private sf::RenderWindow{
private:
    std::vector<AppComponent*> components;
    sf::Color bgColor;
    std::string windowName;
    sf::Vector2u windowSize;
    bool resizable = true;

    void windowEventListener(sf::Event &event);
    void windowUpdater();

public:
    Application();
    Application(const std::string& windowName);
    Application(const std::string& windowName, const sf::Color &bgColor);

    using sf::RenderWindow::getSize;

    void setWindowSize(const sf::Vector2u& windowSize);
    void addComponent(AppComponent& component);
    void disableResize();
    void run();

    virtual void eventHandler(sf::RenderWindow& window, const sf::Event& event) = 0;
    virtual void updater(sf::RenderWindow& window) = 0;

};


#endif //CS8_SPRING23_SFML_CALCULATOR_APPLICATION_H
