//
// Created by Sherman Yan on 2/18/23.
//
#ifndef DROPSHADOW_DROPSHADOW_CPP
#define DROPSHADOW_DROPSHADOW_CPP
#include "DropShadow.h"

template<typename T>
void DropShadow<T>::setDepth(float depth) {
    this->depth = depth;
}

template<typename T>
void DropShadow<T>::setOpacity(float opacity) {
    sf::Color c = self.getFillColor();
    c.a = opacity;
    self.setFillColor(c);
}

template<typename T>
DropShadow<T>::DropShadow(T *obj){
    self = *obj;
    self.setPosition(0,0);
    this->obj = obj;
}


template<typename T>
void DropShadow<T>::draw(sf::RenderTarget &target, sf::RenderStates states) const {
    states.transform.combine(obj->getTransform());
    states.transform.translate(0,offset );
    sf::FloatRect pos = self.getGlobalBounds();
    states.transform.scale(1,-(depth/pos.height),0,pos.height);
    target.draw(self,states);

}

template<typename T>
void DropShadow<T>::setOffset(float offset) {
    this->offset = offset;
}

#endif

