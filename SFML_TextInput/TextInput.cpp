//
// Created by Sherman Yan on 3/20/23.
//

#include "TextInput.h"
#include <iostream>

TextInput::TextInput(){
    addComponent(t);
    t.setPosition(100,100);

}

void TextInput::eventHandler(sf::RenderWindow &window, const sf::Event &event) {

    if(event.TextEntered) {
        MultiText *text = t.modifyText();

        std::string s = text->getString();

        if (isdigit(s[s.length() - 1])) {
            text->setFillColor(sf::Color::Red, s.length() - 1);
        } else if (isOperator(s[s.length() - 1])) {
            text->setFillColor(sf::Color::Green, s.length() - 1);
        }

        if (s.length() >= 3 && s.substr(s.length() - 3).find("int") != std::string::npos)
            text->setFillColor(sf::Color::Blue, s.length() - 3, 3);
        else if (s.length() >= 6 && s.substr(s.length() - 6).find("double") != std::string::npos)
            text->setFillColor(sf::Color::Blue, s.length() - 6, 6);
        else if (s.length() >= 5 && s.substr(s.length() - 5).find("float") != std::string::npos)
            text->setFillColor(sf::Color::Blue, s.length() - 5, 5);
    }

}

void TextInput::updater(sf::RenderWindow &window) {

}

bool TextInput::isOperator(char c) {
    char  ops[7] = {'+','-','*','/','%','=','^'};
    for (auto o: ops) {
        if (c == o)
            return true;
    }
    return false;
}
