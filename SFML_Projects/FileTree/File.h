//
// Created by Sherman Yan on 4/5/23.
//

#ifndef FILETREE_FILE_H
#define FILETREE_FILE_H

#include "AppComponent.h"

class File : public AppComponent {
private:
    sf::Sprite icon;
    float padding = 5;

public:
    File();
    File(sf::Sprite icon, std::string text, sf::Vector2f size, sf::Vector2f position);

    //Returns the bounds of the item
    sf::FloatRect getGlobalBounds() const;
    //returns the size of the item
    sf::Vector2f getSize() const;
    //returns the size of the item
    sf::Vector2f getPosition() const;
    //sets the position of the item
    void setPosition(sf::Vector2f pos);
    //uses an enum to change the icon to a folder or file
    void setIcon(sf::Sprite icon);

    void eventHandler(sf::RenderWindow &window, const sf::Event &event) override;
    void update(const sf::RenderWindow &window) override;

};


#endif //FILETREE_FILE_H
