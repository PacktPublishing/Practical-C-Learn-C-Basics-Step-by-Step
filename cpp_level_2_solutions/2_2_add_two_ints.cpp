#include <iostream>

using namespace std;

int add_two_ints(int number1, int number2)
{
    return number1 + number2;
}

int main()
{
    int number1, number2;
    cout << "Enter number 1: ";
    cin >> number1;
    cout << "Enter number 2: ";
    cin >> number2;

    cout << number1 << " + " << number2 
            << " = " << add_two_ints(number1, number2) 
            << endl;
    return 0;
}