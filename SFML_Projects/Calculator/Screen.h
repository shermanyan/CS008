//
// Created by Sherman Yan on 2/14/23.
//

#ifndef CALCULATOR_SCREEN_H
#define CALCULATOR_SCREEN_H

#include <SFML/Graphics.hpp>
#include <string>
#include "AppComponent.h"
#include "Fonts.h"
#include <cmath>

class Screen : public AppComponent {

private:
    static const unsigned int MAX_SIZE;
    sf::Text text;
    std::string string;

    void resize(const sf::RenderWindow &window);

public:
    Screen();

    Screen(float textSize);

    Screen(float textSize, const sf::Color &color);

    void setPosition(const sf::Vector2f pos);

    void setPosition(float x, float y);

    std::string getString();

    void setString(const std::string &string);

    void clear();

    void add(char c);

    void backspace();

    void draw(sf::RenderTarget &target, sf::RenderStates states) const override;

    void eventHandler(sf::RenderWindow &window, const sf::Event &event) override;

    void update(const sf::RenderWindow &window) override;

};


#endif //CALCULATOR_SCREEN_H
