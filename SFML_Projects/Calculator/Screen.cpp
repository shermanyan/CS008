//
// Created by Dave R. Smith on 2/14/23.
//

#include "Screen.h"

const unsigned int Screen::MAX_SIZE = 25;

Screen::Screen() : Screen(80) {}

Screen::Screen(float textSize) : Screen(textSize, sf::Color::White) {}

Screen::Screen(float textSize, const sf::Color &color) {
    text.setFont(Fonts::getFont(HIND_MADURAI_LIGHT));
    text.setCharacterSize(textSize);
    text.setFillColor(color);
    text.setOrigin(0, (float) textSize);
}

void Screen::clear() {
    string.clear();
    text.setString(string);
}

void Screen::add(char c) {
    if (string.size() < MAX_SIZE)
        string.push_back(c);
    text.setString(string);
}

void Screen::backspace() {
    string.pop_back();
    text.setString(string);
}

void Screen::eventHandler(sf::RenderWindow &window, const sf::Event &event) {

}

void Screen::update(const sf::RenderWindow &window) {
    resize(window);
}

void Screen::resize(const sf::RenderWindow &window) {
    sf::FloatRect curSize = text.getLocalBounds();
    if (curSize.width >= window.getSize().x - 40) {
        float scale;
        scale = (window.getSize().x - 40) / (curSize.width);
        text.setScale(scale, scale);
    } else
        text.setScale(1, 1);

}

void Screen::draw(sf::RenderTarget &target, sf::RenderStates states) const {
    target.draw(text);
}

void Screen::setPosition(const sf::Vector2f pos) {
    text.setPosition(pos);
}

void Screen::setPosition(float x, float y) {
    setPosition({x, y});
}

std::string Screen::getString() {
    return text.getString();
}

void Screen::setString(const std::string &string) {
    clear();
    text.setString(string);
}


