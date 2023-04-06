//
// Created by Sherman Yan on 4/5/23.
//

#include "File.h"

void File::eventHandler(sf::RenderWindow &window, const sf::Event &event) {

}

void File::update(const sf::RenderWindow &window) {

}

File::File() {

}

File::File(sf::Sprite icon, std::string text, sf::Vector2f size, sf::Vector2f position): icon(icon){

}

sf::FloatRect File::getGlobalBounds() const {
    return sf::FloatRect();
}

sf::Vector2f File::getSize() const {
    return sf::Vector2f();
}

sf::Vector2f File::getPosition() const {
    return sf::Vector2f();
}

void File::setPosition(sf::Vector2f pos) {

}

void File::setIcon(sf::Sprite icon) {

}

