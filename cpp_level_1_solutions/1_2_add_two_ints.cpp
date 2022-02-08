#include <iostream>

int main()
{
    int number1, number2;
    std::cout << "Enter number 1: ";
    std::cin >> number1;
    std::cout << "Enter number 2: ";
    std::cin >> number2;

    int sum = number1 + number2;
    std::cout << number1 << " + " << number2 
            << " = " << sum << std::endl;
    return 0;
}