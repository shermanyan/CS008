//
// Created by Sherman Yan on 3/30/23.
//
#ifndef AUTOCORRECT_ISH_WORDSUGGESTION_CPP
#define AUTOCORRECT_ISH_WORDSUGGESTION_CPP
#include "WordSuggestion.h"

template<class T>
WordSuggestion<T>::WordSuggestion(T *input) :input(input){

    suggestion.setFont(Fonts::getFont(OPEN_SANS));
    suggestion.setCharacterSize(40);
    suggestion.setFillColor(sf::Color::White);

}

template<class T>
void WordSuggestion<T>::eventHandler(sf::RenderWindow &window, const sf::Event &event) {

}

template<class T>
void WordSuggestion<T>::update(const sf::RenderWindow &window) {

    std::vector<std::string> words = wordSuggester.getSuggestion(input->getString());

    std::string text;

    for(const auto &w: words) {
        text += w + "\n";
    }

    suggestion.setString(text);
}

template<class T>
Snapshot WordSuggestion<T>::getSnapshot() {
}

template<class T>
void WordSuggestion<T>::applySnapshot(const Snapshot &snapshot) {

}

template<class T>
void WordSuggestion<T>::draw(sf::RenderTarget &target, sf::RenderStates states) const {
    states.transform *= getTransform();
    target.draw(suggestion,states);
}

#endif

