#include <iostream>
using namespace std;
class B;
class A
{

private:
    int l;

public:
    void setVal(int x)
    {
        l = x;
    }
    friend int min(A, B);
};

class B
{
private:
    int m;

public:
    void setVal(int y)
    {
        m = y;
    }
    friend int min(A, B);
};

int min(A a, B b)
{
    if (a.l > b.m)
    {
        return b.m;
    }
    else
    {
        return a.l;
    }
}

int main()
{
    A a;
    B b;
    int val1, val2;
    cout << "Please enter any two numbers: ";
    cin >> val1 >> val2;
    a.setVal(val1);
    b.setVal(val2);
    cout << "The minimum of the two values is " << min(a, b) << endl;
    return 0;
}