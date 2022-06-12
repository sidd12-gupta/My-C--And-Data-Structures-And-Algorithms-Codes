#include <iostream>
using namespace std;

//Swapping values of one class to another
class c2;
class c1
{
    int data;

public:
    void setData(int value)
    {
        data = value;
    }

    void display(void)
    {
        cout << data << endl;
    }
    friend void exchange(c1 &, c2 &);
};

class c2
{
    int val;

public:
    void setData(int num)
    {
        val = num;
    }

    void display(void)
    {
        cout << val << endl;
    }
    friend void exchange(c1 &, c2 &);
};

void exchange(c1 &x, c2 &y)
{
    int temp = x.data;
    x.data = y.val;
    y.val = temp;
}

int main()
{
    c1 a1;
    c2 a2;

    a1.setData(10);
    a2.setData(25);

    exchange(a1, a2);

    cout << "The value of c1 after exchanging becomes: ";
    a1.display();
    cout << "The value of c2 after exchanging becomes: ";
    a2.display();

    return 0;
}