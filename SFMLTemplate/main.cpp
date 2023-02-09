#include <SFML/Graphics.hpp>

int main()
{

    sf::Vector2u windowSize({600,600});
    sf::RenderWindow window({windowSize.x,windowSize.y}, "SFML Tutorial");

    sf::CircleShape circle(50);
    circle.setFillColor(sf::Color::Green);
    circle.setPosition({250,250});

    while(window.isOpen()){
        sf::Event event;

        while (window.pollEvent(event)){
            if (event.type == sf::Event::Closed)
                window.close();
        }

        window.clear();
        window.draw(circle);
        window.display();
    }
    return 0;
}
