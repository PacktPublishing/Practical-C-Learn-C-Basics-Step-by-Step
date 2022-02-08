#include <iostream>
#include <vector>
#include "my_vector_functions.hpp"

using namespace std;

int main()
{
    // Ex 1
    vector<int> list = { 5, 5, 4 };
    cout << "A. Size of number list: " << list.size() << endl;
    add_zeros_to_list(list, 4);
    cout << "B. Size of number list: " << list.size() << endl;

    // Ex 2
    vector<int> input = { 2, 3, 4 };
    vector<int> output = { 10, 11 };
    add_list_to_list(input, output);
    print_all_elements_from_list(output);

    // Ex 3
    vector<string> city_list = { "Paris", "London", "Berlin",
            "Paris", "Berlin", "Madrid", "Paris" };
    cout << "Number of occurrences of 'Berlin': " 
         << get_string_occurences_in_list(city_list, "Berlin")
         << endl;

    return 0;
}