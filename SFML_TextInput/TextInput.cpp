//
// Created by Sherman Yan on 3/20/23.
//

#include "TextInput.h"
#include <iostream>

TextInput::TextInput(){
}

TextInput::TextInput(const std::string &label):TextInput() {
    setLabelString(label);
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
    target.draw(textBox);
    target.draw(label);
}

Snapshot TextInput::getSnapshot() {
}

void TextInput::applySnapshot(const Snapshot &snapshot) {

}

sf::FloatRect TextInput::getGlobalBounds() const {
    sf::FloatRect bounds , tBound = textBox.getGlobalBounds(),lBound = label.getGlobalBounds();
    sf::Vector2f lPos = label.getPosition(), tPos = textBox.getPosition();
    bounds.left = label.getPosition().x;
    bounds.top =  tPos.y > label.getPosition().y? tPos.y: label.getPosition().y;
    bounds.width = lBound.width + tBound.width;
    bounds.height = lBound.height > tBound.height? lBound.height: tBound.height;

    return bounds;
}

sf::FloatRect TextInput::getLocalBounds() const {
    sf::FloatRect bounds , tBound = textBox.getGlobalBounds(),lBound = label.getGlobalBounds();
    bounds.width = lBound.width + tBound.width;
    bounds.height = lBound.height > tBound.height? lBound.height: tBound.height;

    return bounds;
}

void TextInput::setPosition(const sf::Vector2f &pos) {
    Transformable::setPosition(pos);
    label.setPosition(pos);
    Position::center(textBox,label);
    Position::right(textBox,label,30);
}

void TextInput::setPosition(float x, float y) {
    setPosition({x,y});
}

void TextInput::setLabelString(const std::string &label) {
    this->label.setString(label);
}

void TextInput::setLabelCharacterSize(unsigned int size) {
    this->label.setCharacterSize(size);
}

void TextInput::setLabelFont(sf::Font &font) {
    this->label.setFont(font);
}

void TextInput::setTextBoxFont(sf::Font &font) {
    textBox.setFont(font);
}

void TextInput::setCharacterFillColor(const sf::Color &color) {
    textBox.setCharacterFillColor(color);
}

void TextInput::setOutlineThickness(float size) {
    textBox.setOutlineThickness(size);
}

void TextInput::setTextBoxSize(const sf::Vector2f &size) {
    textBox.setBoxSize(size);
}

void TextInput::setTextBoxFillColor(const sf::Color &color) {
    textBox.setFillColor(color);
}

void TextInput::setTextBoxOutlineColor(const sf::Color &color) {
    textBox.setOutlineColor(color);
}

void TextInput::setLabelFillColor(const sf::Color &color) {
    label.setFillColor(color);
}


