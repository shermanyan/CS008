//
// Created by Sherman Yan on 02/16/23.
//
#ifndef CALCULATOR_MOUSEEVENTS_CPP
#define CALCULATOR_MOUSEEVENTS_CPP

#include "MouseEvents.h"
#include <iostream>
template<class T>
bool MouseEvents::isHover(const T &Obj, const sf::RenderWindow &window) {
    sf::Vector2f mpos = (sf::Vector2f)sf::Mouse::getPosition(window);
    return Obj.getGlobalBounds().contains(mpos);
}

template<class T>
bool MouseEvents::isClick(const T &Obj, const sf::RenderWindow &window, const sf::Event& event) {
//    std::cout << isHover(Obj, window);
    return isHover(Obj, window) && event.type == sf::Event::EventType::MouseButtonPressed;
}

#endif //CALCULATOR_MOUSEEVENTS_CPP