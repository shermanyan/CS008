#include <SFML/Graphics.hpp>
#include "DropShadow.h"
int main()
{

    sf::Vector2u windowSize({1000,600});
    sf::RenderWindow window({windowSize.x,windowSize.y}, "SFML Tutorial");

    sf::Font font;
    if (!font.loadFromFile("OpenSans-Bold.ttf"))
        exit(1);


    sf::Text t("sherman" , font,200);
    t.setFillColor(sf::Color::Blue);
    t.setPosition(50,50);

    DropShadow<sf::Text> d(&t);
    d.setDepth(80);
    d.setOpacity(100);
    d.setOffset(70);

    while(window.isOpen()){
        sf::Event event;

        while (window.pollEvent(event)){
            if (event.type == sf::Event::Closed)
                window.close();
        }

        window.clear();
        window.draw(t);
        window.draw(d);
        window.display();
    }
    return 0;
}
