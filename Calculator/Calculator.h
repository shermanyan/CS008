//
// Created by Sherman Yan on 2/14/23.
//

#ifndef CALCULATOR_H
#define CALCULATOR_H
#include <SFML/Graphics.hpp>
#include "SFML_tools/Application.h"
#include "Button.h"
#include "Screen.h"
#include <map>
#include "Helper.h"
#include "Shapes/Squircle.h"
#include "RPN.h"

class Calculator: public Application {

private:
    static const int numButtons;
    static const char buttonSymbols[];
    static const unsigned int buttonSpacing;

    std::map<char,Button<Squircle>> buttons;
    Screen screen;

    void generateButtons();
    void setButtonPosition();

public:
    Calculator();

    virtual void eventHandler(sf::RenderWindow &window, const sf::Event &event);
    virtual void updater(sf::RenderWindow &window);

};


#endif //CALCULATOR_H
