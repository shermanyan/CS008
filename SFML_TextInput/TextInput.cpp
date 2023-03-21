//
// Created by Sherman Yan on 3/20/23.
//

#include "TextInput.h"
#include <iostream>

TextInput::TextInput(){
}

void TextInput::eventHandler(sf::RenderWindow &window, const sf::Event &event) {
    textBox.eventHandler(window,event);

    if(event.TextEntered) {
        MultiText *text = textBox.getText();

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

void TextInput::update(const sf::RenderWindow &window) {

    textBox.update(window);
}

bool TextInput::isOperator(char c) {
    char  ops[7] = {'+','-','*','/','%','=','^'};
    for (auto o: ops) {
        if (c == o)
            return true;
    }
    return false;
}

void TextInput::draw(sf::RenderTarget &target, sf::RenderStates states) const {
    states.transform *= getTransform();
    target.draw(textBox,states);
}

Snapshot TextInput::getSnapshot() {
}

void TextInput::applySnapshot(const Snapshot &snapshot) {

}

sf::FloatRect TextInput::getGlobalBounds() const {
    return getTransform().transformRect(textBox.getGlobalBounds());
}


