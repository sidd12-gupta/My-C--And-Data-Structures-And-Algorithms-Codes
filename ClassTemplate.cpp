#include <iostream>
using namespace std;

template <class T>
class A
{
public:
    T num1 = 5;
    T num2 = 10;

    void add()
    {
        cout << "Addition of num1 and num2 is " << num1 + num2 << endl;
    }
};

template <class T1, class T2>
class B
{
public:
    T1 a = 5;
    T2 b = 5.6;

    void display()
    {

        cout << "The two numbers are " << a << " and " << b << endl;
    }
};

int main()
{
    A<int> d;
    d.add();

    B<int, float> c;
    c.display();

    return 0;
}