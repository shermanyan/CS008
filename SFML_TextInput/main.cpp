#include <iostream>
#include "TextInput.h"
#include "Application.h"
int main()
{
    TextInput firstName("First Name:"),lastName("Last Name:") ;
    Application textBoxApp("Text Input");
    textBoxApp.addComponent(firstName);
    textBoxApp.addComponent(lastName);
    firstName.setPosition({200,100});
    Position::alignLeft(lastName,firstName);
    Position::bottom(lastName,firstName,30);

    textBoxApp.run();
    return 0;
}
