#include <iostream>
#include <vector>
#include <numeric>

int main()
{
    std::vector<double> number_list = { 4.4, 5.5, 6.6, 7.7 };

    double sum = accumulate(number_list.begin(), number_list.end(), 0.0);
    double average = sum / number_list.size();

    std::cout << "Average value in number list: " << average << std::endl;
    return 0;
}