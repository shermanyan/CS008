//
// Created by Sherman Yan on 3/20/23.
//

#ifndef TEXTINPUT_TEXTINPUT_H
#define TEXTINPUT_TEXTINPUT_H

#include "TextBox.h"
#include "Application.h"
#include "Cursor.h"
class TextInput: public Application {
private:
    TextBox t;
    bool isOperator(char c);

public:
    TextInput();
    void eventHandler(RenderWindow &window, const sf::Event &event) override;
    void updater(RenderWindow &window) override;

};


#endif //TEXTINPUT_TEXTINPUT_H
