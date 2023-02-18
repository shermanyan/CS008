#include <iostream>
#include <SFML/Graphics.hpp>
#include "Ball.h"
#include "BouncingObject.h"

int main() {

    sf::RenderWindow window({600,600}, "SFML Tutorial");
    window.setFramerateLimit(60);

    BouncingObject<Ball> b;
    BouncingObject<Ball> b1;

    BouncingObject<sf::RectangleShape> r;

    b.setRadius(25);
    b.setFillColor(sf::Color::Green);
    b.setPosition({250,20});
    b.setSpeed({8,8});

    b1.setRadius(25);
    b1.setFillColor(sf::Color::Blue);
    b1.setPosition({100,50});
    b1.setSpeed({5,5});

    r.setSize({40,40});
    r.setPosition(10,10);
    r.setSpeed({5, 8});


    while(window.isOpen()){
        sf::Event event;

        while (window.pollEvent(event)){
            if (event.type == sf::Event::Closed)
                window.close();
        }

        b1.bounce(window.getSize(),std::vector<sf::FloatRect>{b.getGlobalBounds(),r.getGlobalBounds()});
        b.bounce(window.getSize(),std::vector<sf::FloatRect>{b1.getGlobalBounds(),r.getGlobalBounds()});

        r.bounce(window.getSize(),std::vector<sf::FloatRect>{b1.getGlobalBounds(),b.getGlobalBounds()});

        window.clear();
        window.draw(b);
        window.draw(b1);
        window.draw(r);
        window.display();
    }
    return 0;
}
