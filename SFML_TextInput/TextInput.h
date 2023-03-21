//
// Created by Sherman Yan on 3/20/23.
//

#ifndef TEXTINPUT_TEXTINPUT_H
#define TEXTINPUT_TEXTINPUT_H

#include "TextBox.h"
#include "AppComponent.h"

class TextInput: public AppComponent, public sf::Transformable{
private:
    TextBox textBox;
    sf::Text label;
    bool isOperator(char c);

public:
    TextInput();

    sf::FloatRect getGlobalBounds() const;

    void eventHandler(sf::RenderWindow &window, const sf::Event &event) override;

    void draw(sf::RenderTarget &target, sf::RenderStates states) const override;

    void update(const sf::RenderWindow &window) override;

    Snapshot getSnapshot() override;

    void applySnapshot(const Snapshot &snapshot) override;

    void setPosition(const sf::Vector2f& pos);
    void setPosition(float x, float y);

};


#endif //TEXTINPUT_TEXTINPUT_H
