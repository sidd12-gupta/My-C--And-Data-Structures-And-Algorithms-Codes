#include <iostream>
using namespace std;

int main()
{
ineligible:
    cout << "You are ineligible to vote!" << endl;
    int age;
    cout << "Enter your age" << endl;
    cin >> age;

    if (age < 18)
    {
        goto ineligible;
    }
    else
    {
        cout << "You are eligible to vote!" << endl;
    }
}