//
// Created by Sherman Yan on 12/9/22.
//
#ifndef CALCULATOR_POSITION_CPP
#define CALCULATOR_POSITION_CPP

#include <cmath>
#include "Position.h"
template<class T, class S>
void Position::left(T& self, const S& ref, float spacing) {
    sf::FloatRect s = self.getGlobalBounds();
    sf::FloatRect r = ref.getGlobalBounds();
    self.setPosition({s.left - r.width - spacing, s.top});
}

template<class T, class S>
void Position::right(T& self,const S& ref, float spacing) {
    sf::FloatRect s = self.getGlobalBounds();
    sf::FloatRect r = ref.getGlobalBounds();
    self.setPosition({r.left + r.width + spacing, s.top});
}

template<class T, class S>
void Position::center(T& self, const S& ref) {
    sf::FloatRect s = self.getGlobalBounds();
    sf::FloatRect r = ref.getGlobalBounds();
    self.setPosition({s.left - ((s.left + s.width/2) - (r.left + r.width/2)),
                      s.top - ((s.top + s.height/2) - (r.top + r.height/2))});
}

template<class T, class S>
void Position::bottom(T& self, const S& ref, float spacing) {
    sf::FloatRect s = self.getGlobalBounds();
    sf::FloatRect r = ref.getGlobalBounds();
    self.setPosition({s.left, r.top + r.height + spacing});
}

template<class T, class S>
void Position::top(T &self,const S &ref, float spacing) {
    sf::FloatRect s = self.getGlobalBounds();
    sf::FloatRect r = ref.getGlobalBounds();
    self.setPosition({s.left,r.top - s.height - spacing});
}

template<class T>
void Position::centerText(sf::Text& text, const T& ref) {
    sf::FloatRect textRect = text.getGlobalBounds();
    sf::FloatRect tRect = ref.getGlobalBounds();
    sf::Vector2f center = {textRect.width/2.0f, textRect.height/2.f};
    sf::Vector2f localBounds = {center.x + text.getLocalBounds().left, center.y + text.getLocalBounds().top};
    sf::Vector2f rounded = {std::round(localBounds.x), std::round(localBounds.y)};
    text.setOrigin(rounded);
    text.setPosition({tRect.left + tRect.width/2, tRect.top + tRect.height/2});
}

template<class T, class S>
void Position::alignLeft(T &self, const S &ref) {
    sf::FloatRect s = self.getGlobalBounds();
    sf::FloatRect r = ref.getGlobalBounds();
    self.setPosition(r.left, s.top);
}

template<class T, class S>
void Position::alignRight(T &self, const S &ref) {
    sf::FloatRect s = self.getGlobalBounds();
    sf::FloatRect r = ref.getGlobalBounds();
    self.setPosition(r.left + r.width - s.width, s.top);
}

template<class T, class S>
void Position::alignTop(T &self, const S &ref) {
    sf::FloatRect s = self.getGlobalBounds();
    sf::FloatRect r = ref.getGlobalBounds();
    self.setPosition(s.left, r.top);

}

template<class T, class S>
void Position::alignBottom(T &self, const S &ref) {
    sf::FloatRect s = self.getGlobalBounds();
    sf::FloatRect r = ref.getGlobalBounds();
    self.setPosition(s.left, r.top+r.height - s.height );

}

#endif //CALCULATOR_POSITION_CPP
