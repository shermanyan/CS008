//
// Created by Sherman Yan on 12/7/22.
//

#ifndef FINALPROJECT_BOUNCINGOBJECT_H
#define FINALPROJECT_BOUNCINGOBJECT_H
#include <SFML/Graphics.hpp>

template<class T>
class BouncingObject: public T{
private:
    sf::Vector2f objSpeed = {5,5};

public:

    BouncingObject();
    void bounce(const sf::Vector2u &windowSize, const std::vector<sf::FloatRect> &bounceSurfaces);
    void bounce(const sf::Vector2u &windowSize);
    void setSpeed(const sf::Vector2f& speed);

};

#include "BouncingObject.cpp"

#endif //FINALPROJECT_BOUNCINGOBJECT_H
