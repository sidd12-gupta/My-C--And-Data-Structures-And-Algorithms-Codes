#include <iostream>
using namespace std;

class GreatestAmongTwo
{
    int x;
    int y;

public:
    GreatestAmongTwo(int val1, int val2)
    {
        x = val1;
        y = val2;
    }

    int Greatest()
    {

        if (x > y)
        {
            return x;
        }

        else if (y > x)
        {
            return y;
        }
        else
        {
            return 0;
        }
    }

    ~GreatestAmongTwo()
    {
        cout << "Destructor called ! Bubbaye!!" << endl;
    }
};

int main()
{
    int n;
    cin >> n;
    while (n)
    {
        int val1, val2;
        cout << "Please Enter any two numbers ";
        cin >> val1 >> val2;
        GreatestAmongTwo g(val1, val2);

        cout << "The greatest number among the two you have entered is " << g.Greatest() << endl;
    }
    return 0;
}