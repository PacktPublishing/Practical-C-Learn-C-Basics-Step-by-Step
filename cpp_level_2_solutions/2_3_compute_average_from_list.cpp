#include <iostream>
#include <vector>
#include <numeric>

using namespace std;

double compute_average_from_list(vector<double> number_list)
{
    double sum = accumulate(number_list.begin(), number_list.end(), 0.0);
    return sum / number_list.size();
}

int main()
{
    vector<double> number_list = { 4.4, 5.5, 6.6, 7.7 };
    double average = compute_average_from_list(number_list);
    cout << "Average value in number list: " << average << endl;
    return 0;
}