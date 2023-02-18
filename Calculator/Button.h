//
// Created by Sherman Yan on 2/14/23.
//

#ifndef CALCULATOR_BUTTON_H
#define CALCULATOR_BUTTON_H

#include <SFML/Graphics.hpp>
#include "Fonts.h"
#include "AppComponent.h"
#include "MouseEvents.h"
#include "Position.h"
#include "ButtonColor.h"

template<typename T>
class Button : public AppComponent, public sf::Transformable {
private:
    T body;
    sf::Text text;
    ButtonColor buttonColor;

    void centerText();

public:

    Button();

    Button(const std::string &text);

    Button(const std::string &text, const ButtonColor &color);

    Button(const std::string &text, const sf::Color &textColor, const ButtonColor &color, float textSize);

    void init(const std::string &text, const sf::Color &textColor, const sf::Color &backgroundColor, float textSize);

    void eventHandler(sf::RenderWindow &window, const sf::Event &event) override;

    void update(const sf::RenderWindow &window) override;

    virtual void draw(sf::RenderTarget &window, sf::RenderStates states) const;

    void setBackgroundColor(const sf::Color &color);

    void setTextColor(const sf::Color &color);

    void setString(const std::string &text);

    const std::string &getText() const;

    void setSize(const sf::Vector2f &size);

    void setRadius(float radius);

    void setCharacterSize(float size);

    sf::FloatRect getGlobalBounds() const;

    std::string getString();


};

#include "Button.cpp"

#endif //CALCULATOR_BUTTON_H
