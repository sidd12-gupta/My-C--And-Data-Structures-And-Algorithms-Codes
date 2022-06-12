#include <bits/stdc++.h>
using namespace std;

class Fact
{
    int n;

public:
    void setNumber(int val)
    {
        n = val;
    }
    friend int factorial(Fact);
};

int factorial(Fact f)
{

    for (int i = f.n - 1; i >= 1; i--)
    {
        f.n = f.n * i;
    }
    return f.n;
}

int main()
{
    int v;
    cout << "Enter a number " << endl;
    cin >> v;
    Fact f;
    f.setNumber(v);
    cout << "The factorial of the number provided is " << factorial(f) << endl;
    return 0;
}