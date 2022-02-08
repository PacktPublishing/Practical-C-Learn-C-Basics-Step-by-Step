#include "my_vector_functions.hpp"
#include <iostream>

void add_zeros_to_list(vector<int> &number_list, int zeros_number)
{
    for (int i = 0; i < zeros_number; i++) {
        number_list.push_back(0);
    }
}

void print_all_elements_from_list(const vector<int> &list)
{
    for (int number: list) {
        cout << number << endl;
    }
}

void add_list_to_list(
    const vector<int> &input_list, vector<int> &output_list)
{
    for (int number: input_list) {
        output_list.push_back(number);
    }
}

int get_string_occurences_in_list(const vector<string> &list, string text)
{
    int occurrences = 0;
    for (string s: list) {
        if (s == text) {
            occurrences++;
        }
    }
    return occurrences;
}