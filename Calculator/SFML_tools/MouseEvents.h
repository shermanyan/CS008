//
// Created by Sherman Yan on 02/16/23.
//

#ifndef CALCULATOR_MOUSEEVENTS_H
#define CALCULATOR_MOUSEEVENTS_H

#include <SFML/Graphics.hpp>

class MouseEvents {
public:
    template<class T>
    static bool isHover(const T& Obj , const sf::RenderWindow& window);

    template<class T>
    static bool isClick(const T& Obj , const sf::RenderWindow& window, const sf::Event& event);

};

#include "MouseEvents.cpp"

#endif //CALCULATOR_MOUSEEVENTS_H
