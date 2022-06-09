#include <iostream>
using namespace std;

class Rectangle
{
    double length;
    double breadth;

public:
    Rectangle(double l = 0, double b = 0)
    {
        length = l;
        breadth = b;
    }

    double Area()
    {
        return length * breadth;
    }
};

int main()
{
    Rectangle r(10.5, 13);
    cout << "The area of the rectangle is " << r.Area() << endl;
}