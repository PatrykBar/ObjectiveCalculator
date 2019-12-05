#include <iostream>

class Menu
{
    private:
        double number_1, number_2;
        double score;
        char operation;


        //Private Functions
        double Sum();
        double Division();
        double Multiplication();
        double Subtraction();
        double Remainder();

    public:


    //Constructors
        Menu(){
        }

        Menu(double number_1, double number_2, double score, char operation)
        {
            this->number_1 = number_1;
            this->number_2 = number_2;
            this->score = score;
            this->operation = operation;
        }


    //Getters and setters
    double load_numbers1(int number)
    {
        this->number_1=number;
    }

    double load_numbers2(int number)
    {
        this->number_2=number;
    }

    char load_operation(char operatorCalculation)
    {
        std::cout << "Specify the actions you want to calculate: " << std::endl;

        while (std::cin >> operatorCalculation)
        {
            this->operation=operatorCalculation;
            if (operation == '+' || operation == '-' ||
               operation == '/' || operation == '*' || operation == '%')
               {
                   return operation;
               }
            else
                 std::cout << "Wrong operation" << std::endl;
        }
    }


    //Public Functions
    void mathematicalChar();

    ~Menu(){
    }
};
