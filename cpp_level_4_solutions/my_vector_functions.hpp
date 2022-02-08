#ifndef MY_VECTOR_FUNCTIONS_H
#define MY_VECTOR_FUNCTIONS_H

#include <vector>
#include <string>

using namespace std;

void add_zeros_to_list(vector<int> &number_list, int zeros_number);
void print_all_elements_from_list(const vector<int> &list);
void add_list_to_list(
    const vector<int> &input_list, vector<int> &output_list);
int get_string_occurences_in_list(const vector<string> &list, string text);

#endif