#include <iostream>
#include <vector>

using namespace std;

int get_max_value_from_number_list(vector<int> number_list)
{
    int max = 0;
    for (int number: number_list) {
        if (number > max) {
            max = number;
        }
    }
    return max;
}

int main()
{
    vector<int> number_list = { 3, 5, 88, 156, -6 };
    cout << "Max value from number list: " 
         << get_max_value_from_number_list(number_list) 
         << endl;
    return 0;
}