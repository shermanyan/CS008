#include <iostream>
#include "TextInput.h"
#include "Application.h"
#include "WordSuggestion.h"
int main()
{
    TextInput text ;
    WordSuggestion<TextInput> wordSuggestion(&text);
    Application textBoxApp("Text Input");

    text.setPosition(100,100);
    wordSuggestion.setPosition(150,200);
    textBoxApp.addComponent(text);
    textBoxApp.addComponent(wordSuggestion);
    textBoxApp.run();
    return 0;
}


