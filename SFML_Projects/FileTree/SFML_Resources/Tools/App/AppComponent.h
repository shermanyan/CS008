//
// Created by Sherman Yan on 11/17/22.
//

#ifndef APPCOMPONENT_H
#define APPCOMPONENT_H
#include <SFML/Graphics.hpp>
#include "EventHandleable.h"
#include "Updatable.h"
#include "States.h"

class AppComponent: public States, public EventHandleable, public sf::Drawable, public sf::Transformable, public Updatable{

public:
    virtual sf::FloatRect getGlobalBounds() const = 0;
    virtual sf::FloatRect getLocalBounds() const = 0;

};


#endif //APPCOMPONENT_H
