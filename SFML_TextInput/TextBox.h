//
// Created by Sherman Yan on 3/20/23.
//

#ifndef TEXTINPUT_TEXTBOX_H
#define TEXTINPUT_TEXTBOX_H

#include <SFML/Graphics.hpp>
#include <string>
#include "MultiText.h"
#include "Typing.h"
#include "States.h"
#include "AppComponent.h"
#include "Position.h"
#include "Fonts.h"
#include "Cursor.h"
#include "MouseEvents.h"

class TextBox: public AppComponent, public sf::Transformable{
private:
    Typing text;
    sf::Text label;
    sf::RectangleShape box;

    Cursor c;

    void setupTextBox();
public:
    TextBox();
    TextBox(const std::string& label);
    TextBox(const sf::Vector2f& boxSize);

    void setFont(sf::Font& font);
    void setCharacterFillColor(const sf::Color& color);
    void setOutlineThickness(float size);
    void setBoxSize(const sf::Vector2f& size);
    void setFillColor(const sf::Color& color);
    void setOutlineColor(const sf::Color& color);

    void draw(sf::RenderTarget &target, sf::RenderStates states) const override;
    void eventHandler(sf::RenderWindow &window, const sf::Event &event) override;
    void update(const sf::RenderWindow &window) override;

    Snapshot getSnapshot() override;

    void applySnapshot(const Snapshot &snapshot) override;

    Typing* modifyText();

    sf::FloatRect getGlobalBounds()const;
};


#endif //TEXTINPUT_TEXTBOX_H