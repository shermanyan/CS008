//
// Created by Sherman Yan on 3/20/23.
//

#include "TextBox.h"
#include <iostream>

void TextBox::draw(sf::RenderTarget &target, sf::RenderStates states) const {
    states.transform *= getTransform();

    target.draw(box,states);
    target.draw(text,states);

    if (c.checkStates(ACTIVE) && c.checkStates(SELECTED))
        target.draw(c,states);
}

TextBox::TextBox() {
    setupTextBox();
}

TextBox::TextBox(const std::string &label):TextBox() {
    this->label.setString(label);
}

TextBox::TextBox(const sf::Vector2f &boxSize):TextBox() {
    box.setSize(boxSize);
}

void TextBox::setupTextBox() {
    setBoxSize({400, 80});
    setFont(Fonts::getFont(OPEN_SANS));
    setOutlineThickness(5);
    setFillColor(sf::Color::Transparent);
    setOutlineColor(sf::Color::White);

    c.setState(SELECTED,false);
}
void TextBox::setFont(sf::Font &font) {
    text.setFont(font);
    c.setFont(font);
}

void TextBox::setOutlineThickness(float size) {
    box.setOutlineThickness(size);
}

void TextBox::setBoxSize(const sf::Vector2f &size) {
    box.setSize(size);
    text.setCharacterSize(size.y*.77);
    text.setPosition(10,0);

    c.setCharacterSize(text.getCharacterSize());
}

void TextBox::setFillColor(const sf::Color &color) {
    box.setFillColor(color);
}

void TextBox::setCharacterFillColor(const sf::Color& color) {
    text.setFillColor(color);
    c.setFillColor(color);
}

void TextBox::setOutlineColor(const sf::Color &color) {
    box.setOutlineColor(color);
}


void TextBox::eventHandler(sf::RenderWindow &window, const sf::Event &event) {
    if(event.type == sf::Event::TextEntered && c.checkStates(SELECTED)) {
        text.eventHandler(window, event);
    }
}

void TextBox::update(const sf::RenderWindow &window) {
    if (MouseEvents::isClick(*this,window)) {
        c.setState(SELECTED, true);
    }
    else if(MouseEvents::isClick(window)) {
        c.setState(SELECTED, false);
    }
    if (c.checkStates(SELECTED)){
        sf::FloatRect tPos = text.getGlobalBounds();
        c.setPosition(tPos.left + tPos.width, 0);
        c.update();
    }
}

Snapshot TextBox::getSnapshot() {
    return Snapshot(text.getString());
}

void TextBox::applySnapshot(const Snapshot &snapshot) {
}

Typing* TextBox::modifyText(){
    return &text;
}

sf::FloatRect TextBox::getGlobalBounds() const {
    return getTransform().transformRect(box.getGlobalBounds());
}



