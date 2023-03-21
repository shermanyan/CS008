#include <iostream>
#include "TextInput.h"
#include "Application.h"
#include "project.h"
int main()
{
    project t;
    Application textBoxApp("Text Input");
    textBoxApp.addComponent(t);
    t.setPosition(100,200);

    textBoxApp.run();
    return 0;
}
