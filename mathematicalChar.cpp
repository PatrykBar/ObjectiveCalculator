#include <iostream>
#include "Menu.h"

using namespace std;

void Menu::mathematicalChar()
{
    switch(operation)
    {
        case '+':
            Sum();
        break;

        case '-':
            Subtraction();
        break;

        case '*':
            Multiplication();
        break;

        case '/':
            Division();
        break;

        case '%':
            Remainder();
        break;
    }
}
