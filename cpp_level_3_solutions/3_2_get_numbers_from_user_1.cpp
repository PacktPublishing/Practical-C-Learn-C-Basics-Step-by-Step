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
    vector<int> number_list;

    for (int i = 0; i < 5; i++) {
        int input_number;
        cout << "Enter a number: ";
        cin >> input_number;
        number_list.push_back(input_number);
    }

    cout << "Max value from number list: " 
         << get_max_value_from_number_list(number_list) 
         << endl;
    return 0;
}