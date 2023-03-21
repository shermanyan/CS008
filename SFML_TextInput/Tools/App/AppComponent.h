//
// Created by Sherman Yan on 11/17/22.
//

#ifndef APPCOMPONENT_H
#define APPCOMPONENT_H
#include <SFML/Graphics.hpp>
#include "EventHandleable.h"
#include "Updatable.h"
#include "SnapshotInterface.h"

class AppComponent: public SnapshotInterface, public EventHandleable, public sf::Drawable, public Updatable{

};


#endif //APPCOMPONENT_H
