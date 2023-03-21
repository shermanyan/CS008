//
// Created by Sherman Yan on 3/20/23.
//

#include "project.h"

void project::draw(sf::RenderTarget &target, sf::RenderStates states) const {
    states.transform *= getTransform();
    target.draw(t,states);
}

void project::eventHandler(sf::RenderWindow &window, const sf::Event &event) {
    t.eventHandler(window,event);
}

void project::update(const sf::RenderWindow &window) {
    t.update(window);
}

Snapshot project::getSnapshot() {
}

void project::applySnapshot(const Snapshot &snapshot) {

}
