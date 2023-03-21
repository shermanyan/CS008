//
// Created by Sherman Yan on 3/5/23.
//

#ifndef MULTITEXT_TYPING_H
#define MULTITEXT_TYPING_H
#include <SFML/Graphics.hpp>
#include "MultiText.h"
class Typing: public MultiText{
public:
    Typing();
    void eventHandler(const sf::Window& window, const sf::Event& event);

};


#endif //MULTITEXT_TYPING_H
