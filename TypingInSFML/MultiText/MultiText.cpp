//
// Created by Sherman Yan on 3/5/23.
//

#include "MultiText.h"
void MultiText::draw(sf::RenderTarget &target, sf::RenderStates states) const {
    std::list<Letter>::iterator i;
    for (auto& l : text) {
        target.draw(l,states.transform*getTransform());
    }
}
MultiText::MultiText() {

}

MultiText::MultiText(const std::string &string) {
    for(auto c: string)
        addCharacter(c);
}

void MultiText::addCharacter(char c) {
    letter.setString(std::string(1,c));
    text.push_back(letter);

    if (text.size() > 1) {
        sf::FloatRect prevPos = std::prev(text.end(),2)->getGlobalBounds();
        text.back().setPosition(prevPos.left + prevPos.width + std::prev(text.end(),2)->getLetterSpacing(),0);

    }
}

void MultiText::pop_back() {
    if (!text.empty())
        text.pop_back();
}

void MultiText::clear() {
    text.clear();
}

void MultiText::setString(const std::string &string) {

    text.clear();
    for(auto c: string)
        addCharacter(c);

}

std::string MultiText::getString() {

    std::string s;
    for (auto& l : text) {
        s += l.getString();
    }
    return s;
}

void MultiText::setCharacterSize(unsigned int size) {
    letter.setCharacterSize(size);
}

void MultiText::setFillColor(const sf::Color &color) {
    letter.setFillColor(color);
}

void MultiText::setFont(const sf::Font &font) {
    letter.setFont(font);
}
