#include <iostream>
#include <conio.h>
using namespace std;
class Calculator
{
private:
    float firstNumber;
    float secondNumber;
    float result;
    char operation;

public:
    Calculator()
    {
        firstNumber = 0;
        secondNumber = 0;
        result = 0;
    }
    float calculator()
    {
        int exceed = 0;
        cout << "\n**********************************\n";
        cout << "\tYou can perform\n\n\t  1.Addition\n\t  2.Subtraction\n\t  3.Multiplication\n\t  4.Division \n";
        cout << "\n**********************************\n\n";
        cout << "----------------------------------\n";
        cout << "\nEnter Number 1 : ";
        cin >> firstNumber;
        while (true && exceed <= 10)
        {
            exceed++;
            cout << "\nEnter(+,-,*,/) : ";
            cin >> operation;
            if ((operation == '+' || operation == '-' || operation == '*' || operation == '/'))
                break;
            else if (exceed == 10)
            {
                cout << "\nYou have Exceed You Trial Limit\n";
                return 0;
            }
            cout << "\nYou have entered Invalid Operation ,Enter Again\n";
        }

        cout << "\nEnter Number 2 : ";
        cin >> secondNumber;

        cout << "\n----------------------------------\n";

        switch (operation)
        {
        case '+':
            result = firstNumber + secondNumber;
            cout << "\nYour answer is : " << result;
            cout << "\n----------------------------------\n";
            break;
        case '-':
            result = firstNumber - secondNumber;
            cout << "\nYour answer is : " << result;
            cout << "\n----------------------------------\n";
            break;
        case '*':
            result = firstNumber * secondNumber;
            cout << "\nYour answer is : " << result;
            cout << "\n----------------------------------\n";
            break;
        case '/':
            if (secondNumber == 0)
            {
                cout << "\nInvalid Input ,Denominator could not be zero";
                cout << "\n----------------------------------\n";
                break;
            }

            result = firstNumber / secondNumber;
            cout << "\nYour answer is : " << result;
            cout << "\n----------------------------------\n";
            break;
        default:
            cout << "\nInvalid Input";
        }
    }
};
int main()
{
    Calculator c;
    c.calculator();
    getch();
    return 0;
}