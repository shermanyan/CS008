//
// Created by Sherman Yan on 3/5/23.
//

#include "Typing.h"

Typing::Typing() {

}

void Typing::eventHandler(const sf::Window &window, const sf::Event &event) {
    if (event.key.code == sf::Keyboard::BackSpace) {
        pop_back();
    }
    else if (event.type == sf::Event::TextEntered && event.text.unicode < 128 && event.text.unicode != 8)
        addCharacter((char)event.text.unicode);

}
