//
// Created by Sherman Yan on 12/7/22.
//

#ifndef FINALPROJECT_BOUNCINGBALL_CPP
#define FINALPROJECT_BOUNCINGBALL_CPP

#include "BouncingObject.h"

template<class T>
BouncingObject<T>::BouncingObject(){

}

template<class T>
void BouncingObject<T>::bounce(const sf::Vector2u &windowSize, const std::vector<sf::FloatRect> &bounceSurfaces) {

    sf::FloatRect bPos = T::getGlobalBounds();

    for(int i = 0; i< bounceSurfaces.size(); i ++) {
        if (bounceSurfaces[i].intersects(bPos)) {
            objSpeed.x *= -1;
            break;
        }
    }

    bounce(windowSize);
}


template<class T>
void BouncingObject<T>::setSpeed(const sf::Vector2f &speed) {
    this->objSpeed = speed;

}

template<class T>
void BouncingObject<T>::bounce(const sf::Vector2u &windowSize) {

    sf::FloatRect bPos = T::getGlobalBounds();

    if ((bPos.top + bPos.height) >= (float)windowSize.y || bPos.top <= 0)
        objSpeed.y *= -1;
    if ((bPos.left + bPos.width) >= (float)windowSize.x || bPos.left <= 0)
        objSpeed.x *= -1;

    T::move(objSpeed);
}


#endif