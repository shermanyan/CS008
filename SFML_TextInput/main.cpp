#include <iostream>
#include "TextInput.h"
#include "Application.h"
int main()
{
    TextInput email("Email:"),name("Name:") ;
    Application textBoxApp("Text Input");
    textBoxApp.addComponent(name);
    textBoxApp.addComponent(email);
    email.setPosition({200,100});
    Position::alignLeft(name,email);
    Position::bottom(name,email,30);

    textBoxApp.run();
    return 0;
}
