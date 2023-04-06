//
// Created by Sherman Yan on 2/18/23.
//

#ifndef DROPSHADOW_DROPSHADOW_H
#define DROPSHADOW_DROPSHADOW_H

#include <SFML/Graphics.hpp>

template<typename T>
class DropShadow: public sf::Drawable{

private:
    T self;
    T* obj;
    float offset = 0;
    float depth = 0;

public:
    DropShadow(T *obj);
    void setDepth(float depth);
    void setOpacity(float opacity);
    void setOffset(float offset);

protected:
    void draw(sf::RenderTarget &target, sf::RenderStates states) const override;


};

#include "DropShadow.cpp"
#endif //DROPSHADOW_DROPSHADOW_H
