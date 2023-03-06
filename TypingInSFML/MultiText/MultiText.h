//
// Created by Sherman Yan on 3/5/23.
//

#ifndef TYPINGINSFML_MULTITEXT_H
#define TYPINGINSFML_MULTITEXT_H
#include <list>
#include "Letter.h"

class MultiText :public sf::Drawable, public sf::Transformable {

private:
    std::list<Letter> text;
    Letter letter;
public:
    MultiText();
    MultiText(const std::string& text);

    void addCharacter(char c);
    void pop_back();
    void clear();

    void setString(const std::string &text);
    std::string getString();

    void setCharacterSize(unsigned int size);
    void setFillColor(const sf::Color& color);

    void draw(sf::RenderTarget &target, sf::RenderStates states) const override;

    void setFont(const sf::Font &font);

};


#endif //TYPINGINSFML_MULTITEXT_H
