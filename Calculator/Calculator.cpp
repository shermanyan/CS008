//
// Created by Sherman Yan on 2/14/23.
//

#include "Calculator.h"

const unsigned int Calculator::buttonSpacing = 10;
const int Calculator::numButtons = 20;
const char Calculator::buttonSymbols[numButtons] = {'C', '(', ')', '/',
                                                    '7', '8', '9', 'x',
                                                    '4', '5', '6', '-',
                                                    '1', '2', '3', '+',
                                                    '^', '0', '.', '='};


Calculator::Calculator() : Application{"Calculator", sf::Color{50, 50, 50}} {

    setWindowSize({470, 590});
    disableResize();
    generateButtons();
    setButtonPosition();

    addComponent(screen);
    screen.setPosition(20, 120);
}

void Calculator::setButtonPosition() {

    buttons[buttonSymbols[0]].setPosition(buttonSpacing, 140);

    for (int i = 1; i < numButtons; ++i) {

        Position::center(buttons[buttonSymbols[i]], buttons[buttonSymbols[i - 1]]);

        if (i % 4 == 0) {
            Position::center(buttons[buttonSymbols[i]], buttons[buttonSymbols[i - 4]]);
            Position::bottom(buttons[buttonSymbols[i]], buttons[buttonSymbols[i - 4]], buttonSpacing);
        } else {
            Position::center(buttons[buttonSymbols[i]], buttons[buttonSymbols[i - 1]]);
            Position::right(buttons[buttonSymbols[i]], buttons[buttonSymbols[i - 1]], buttonSpacing);
        }
    }
}

void Calculator::generateButtons() {

    sf::Vector2f buttonSize = {105, 80};

    for (char buttonSymbol : buttonSymbols) {
        if (Helper::isOperator(buttonSymbol))
            buttons.insert({buttonSymbol, {{buttonSymbol}, ButtonColor::ORANGE}});
        else if (isnumber(buttonSymbol))
            buttons.insert({buttonSymbol, {{buttonSymbol}, ButtonColor::GREY}});
        else
            buttons.insert({buttonSymbol, {{buttonSymbol}, ButtonColor::DARKGREY}});

        buttons.at(buttonSymbol).setSize(buttonSize);
        buttons.at(buttonSymbol).setRadius(20);
    }


    for (auto &i: buttons) {
        addComponent(i.second);
    }
}

void Calculator::eventHandler(sf::RenderWindow &window, const sf::Event &event) {
    for (auto &i: buttons) {
        if (MouseEvents::isClick(i.second, window, event)) {
            if (i.second.getString() == "C")
                screen.clear();
            else if (i.second.getString() == "=") {
                float answer = RPN::evaluate(screen.getString());
                screen.setString(Helper::removeTrailingZeros(std::to_string(answer)));
            } else
                screen.add(i.second.getString()[0]);
        }
    }

}

void Calculator::updater(sf::RenderWindow &window) {

}


