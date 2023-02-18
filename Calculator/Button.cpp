//
// Created by Sherman Yan on 2/14/23.
//
#ifndef CALCULATOR_BUTTON_CPP
#define CALCULATOR_BUTTON_CPP

#include "Button.h"

template<typename T>
Button<T>::Button(): Button("Default") {}

template<typename T>
Button<T>::Button(const std::string &text): Button(text, ButtonColor::GREY) {}

template<typename T>
Button<T>::Button(const std::string &text, const ButtonColor &color) : Button(text, sf::Color::White, color.color,
                                                                              40) {}


template<typename T>
Button<T>::Button(const std::string &text, const sf::Color &textColor, const ButtonColor &color, float textSize)
        : buttonColor(color) {
    init(text, textColor, color.color, textSize);
}


template<typename T>
void Button<T>::draw(sf::RenderTarget &window, sf::RenderStates states) const {
    states.transform *= Transformable::getTransform();
    window.draw(body, states);
    window.draw(text, states);
}

template<typename T>
void Button<T>::setBackgroundColor(const sf::Color &color) {
    body.setFillColor(color);
}

template<typename T>
void Button<T>::setTextColor(const sf::Color &color) {
    text.setFillColor(color);
}

template<typename T>
void Button<T>::setString(const std::string &text) {
    this->text.setString(text);
}

template<typename T>
const std::string &Button<T>::getText() const {
    return text.getString();
}

template<typename T>
void Button<T>::setSize(const sf::Vector2f &size) {
    body.setSize(size);
    centerText();
}

template<typename T>
void Button<T>::centerText() {
    Position::centerText(this->text, body);
}

template<typename T>
void Button<T>::setCharacterSize(float size) {
    text.setCharacterSize(size);
}

template<typename T>
void Button<T>::setRadius(float radius) {
    body.setRadius(radius);
}

template<typename T>
void
Button<T>::init(const std::string &text, const sf::Color &textColor, const sf::Color &backgroundColor, float textSize) {
    this->text.setFont(Fonts::getFont(HIND_MADURAI));
    setString(text);
    setTextColor(textColor);
    setCharacterSize(textSize);
    setBackgroundColor(backgroundColor);
    centerText();
}

template<typename T>
sf::FloatRect Button<T>::getGlobalBounds() const {
    return getTransform().transformRect(body.getGlobalBounds());
}

template<typename T>
void Button<T>::eventHandler(sf::RenderWindow &window, const sf::Event &event) {
    if (MouseEvents::isClick(*this, window, event))
        body.setFillColor(buttonColor.color * sf::Color{200, 200, 200});
    else
        body.setFillColor(buttonColor.color);

}

template<typename T>
void Button<T>::update(const sf::RenderWindow &window) {

}

template<typename T>
std::string Button<T>::getString() {
    return text.getString();
}


#endif

