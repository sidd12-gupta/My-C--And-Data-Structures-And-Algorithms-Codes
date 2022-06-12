#include <iostream>
#include <string>
using namespace std;

int main()
{
    char fruits[100];
    cout << "Enter your favourite fruit " << endl;
    cin.getline(fruits, 100);
    cout << "Your fav. fruit is " << fruits << endl;
    return 0;
}