//
// Created by Sherman Yan on 3/20/23.
//

#ifndef TEXTINPUT_PROJECT_H
#define TEXTINPUT_PROJECT_H

#include "TextInput.h"

class project: public AppComponent, public sf::Transformable{

private:
    TextInput t;
public:
protected:
    void draw(sf::RenderTarget &target, sf::RenderStates states) const override;

public:
    void eventHandler(sf::RenderWindow &window, const sf::Event &event) override;

    void update(const sf::RenderWindow &window) override;

    Snapshot getSnapshot() override;

    void applySnapshot(const Snapshot &snapshot) override;
};


#endif //TEXTINPUT_PROJECT_H
