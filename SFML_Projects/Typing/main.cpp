#include <SFML/Graphics.hpp>
#include "Typing.h"
int main()
{

    sf::RenderWindow window({1000,400,72}, "Typing");

    Typing t;
    sf::Font f;
    if(!f.loadFromFile("OpenSans-Bold.ttf"))
        exit(10);

    t.setCharacterSize(50);
    t.setFillColor(sf::Color::White);
    t.setFont(f);
    t.setPosition(50,50);

    t.setString("Hello");
    while(window.isOpen()){
        sf::Event event;

        while (window.pollEvent(event)){
            if (event.type == sf::Event::Closed)
                window.close();
            else {
                t.eventHandler(window, event);
                if (sf::Mouse::isButtonPressed(sf::Mouse::Left))
                    t.setFillColor(sf::Color::Red);
                else
                    t.setFillColor(sf::Color::Green);
            }

        }

        window.clear();
        window.draw(t);
        window.display();
    }
    return 0;
}
