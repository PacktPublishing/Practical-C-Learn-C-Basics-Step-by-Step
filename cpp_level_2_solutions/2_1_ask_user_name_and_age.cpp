#include <iostream>

using namespace std;

void say_hello(string user_name, int user_age) 
{
    cout << "Hello " << user_name << ", you are " 
            << user_age << endl;
}

void greet_user()
{
    string user_name;
    int user_age;

    cout << "What is your name? ";
    cin >> user_name;
    cout << "How old are you? ";
    cin >> user_age;

    say_hello(user_name, user_age);
}

int main()
{
    greet_user();
    return 0;
}