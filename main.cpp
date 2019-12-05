#include <iostream>
#include "Menu.h"

int main()
{
    int HowMany;
    std::cout << "How many calculation do you want to solve: " << std::endl;
    std::cin >> HowMany;

    for (int i=0; i<HowMany; i++)
    {
        int number;
        char characteristic;
        Menu Calculator[i];
        Calculator[i].load_numbers1(number);
        Calculator[i].load_numbers2(number);
        Calculator[i].load_operation(characteristic);
        Calculator[i].mathematicalChar();

        system("cls");
    }


    return 0;
}
