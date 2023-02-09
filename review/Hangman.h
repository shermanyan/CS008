//
// Created by Dave R. Smith on 1/10/23.
//

#ifndef UCS8_SPRING23_REVIEW_STUBS_AND_DRIVERS_HANGMAN_H
#define UCS8_SPRING23_REVIEW_STUBS_AND_DRIVERS_HANGMAN_H

#include <iostream>
#include "Wordbank.h"
#include "Visuals.h"
#include "Accuracy.h"
#include "UserInput.h"
#include <SFML/Graphics.hpp>

class Hangman
{
private:
    Wordbank wordbank; // hold all potential words for the game
    Visuals visuals; // the board for first player
    Visuals visuals2; // board for second player
    Accuracy accuracy; // holds the incorrect for player one
    Accuracy accuracy2; // holds the accuracy for player two
    bool isWinner; // true if player one is winner, else false
    bool isWinner2; // true if player two is winner, else false
public:
    Hangman();
    void runGame();
    void runGame(sf::RenderWindow& window);
};


#endif //UCS8_SPRING23_REVIEW_STUBS_AND_DRIVERS_HANGMAN_H
