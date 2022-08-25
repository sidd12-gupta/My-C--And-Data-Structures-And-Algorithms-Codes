#include <bits/stdc++.h>
using namespace std;

class N
{
    int num;

public:
    N(int n1 = 0)
    {
        num = n1;
    }

    N operator+(N n2)
    {
        N n3;
        n3.num = num * n2.num;
        return n3;
    }

    void display()
    {

        cout << "The result is: " << num << endl;
    }
};

int main()
{
    int val1, val2;
    cout << "Enter two numbers: ";
    cin >> val1 >> val2;
    N n1(val1);
    N n2(val2);

    N n3;
    n3 = n2 + n1;

    n3.display();

    return 0;
}