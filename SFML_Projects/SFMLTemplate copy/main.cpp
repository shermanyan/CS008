#include <SFML/Graphics.hpp>
#include <vector>
std::vector<sf::RectangleShape> v;

bool clicked = false;
bool draw = false;
void update(const sf::Window& window ,sf::Event& event){

    if(event.type == sf::Event::MouseButtonPressed){
        clicked = !clicked;
        v.emplace_back(sf::Vector2f(0,10));
        v.back().setPosition(sf::Mouse::getPosition(window).x,sf::Mouse::getPosition(window).y);
    }
    if(!v.empty()& clicked) {
        v.back().setSize(sf::Vector2f((float) sf::Mouse::getPosition(window).x - v.back().getPosition().x,
                                      v.back().getSize().y));
    }
}

int main()
{

    sf::Vector2u windowSize({2000,1125});
    sf::RenderWindow window({windowSize.x,windowSize.y}, "SFML Tutorial");


    while(window.isOpen()){
        sf::Event event;

        while (window.pollEvent(event)){
            if (event.type == sf::Event::Closed)
                window.close();

            update(window,event);

        }



        window.clear();
        for (auto &r: v) {
            window.draw(r);
        }
        window.display();
    }
    return 0;
}


