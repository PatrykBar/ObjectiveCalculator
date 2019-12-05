#include <iostream>
#include "Menu.h"

using namespace std;

double Menu::Remainder()
{
    int a = (double)number_1;
    int b = (double)number_2;

    if ( b=!0)
        return (a%b);
    else
        cout << "We not divide by zero !!! soo it is not correct.... " << endl;
}
