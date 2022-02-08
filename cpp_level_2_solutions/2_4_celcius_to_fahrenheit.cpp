#include <iostream>

using namespace std;

double celsius_to_fahrenheit(double celsius_degrees)
{
    return celsius_degrees * 1.8 + 32.0;
}

int main()
{
    cout << "15.6°C = " << celsius_to_fahrenheit(15.6) << "°F" << endl;
    return 0;
}