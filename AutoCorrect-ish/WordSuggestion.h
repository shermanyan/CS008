//
// Created by Sherman Yan on 3/30/23.
//

#ifndef AUTOCORRECT_ISH_WORDSUGGESTION_H
#define AUTOCORRECT_ISH_WORDSUGGESTION_H

#include "AppComponent.h"
#include "MultiText.h"
#include "WordSuggester.h"

template<class T>
class WordSuggestion: public AppComponent, public sf::Transformable {
private:
    sf::Text suggestion;
    WordSuggester wordSuggester;

    T *input;

public:
    WordSuggestion(T* input);

    void eventHandler(sf::RenderWindow &window, const sf::Event &event) override;
    void update(const sf::RenderWindow &window) override;
    Snapshot getSnapshot() override;
    void applySnapshot(const Snapshot &snapshot) override;
    void draw(sf::RenderTarget &target, sf::RenderStates states) const override;
};

#include "WordSuggestion.cpp"

#endif //AUTOCORRECT_ISH_WORDSUGGESTION_H
