//
// Created by Sherman Yan on 2/17/23.
//

#ifndef CALCULATOR_BUTTONCOLOR_H
#define CALCULATOR_BUTTONCOLOR_H

#include <SFML/Graphics.hpp>

struct ButtonColor {
    sf::Color color;

    ButtonColor(sf::Color color) : color(color) {};
    static const ButtonColor ORANGE;
    static const ButtonColor GREY;
    static const ButtonColor DARKGREY;
    static const ButtonColor LIGHTGREY;

};


#endif //CALCULATOR_BUTTONCOLOR_H
