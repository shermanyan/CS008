#include <iostream>
#include "TextInput.h"
#include "Application.h"
#include "project.h"
int main()
{
    TextInput t;
    Application textBoxApp("Text Input");
    textBoxApp.addComponent(t);
    t.setPosition({100, 100});

    textBoxApp.run();
    return 0;
}
