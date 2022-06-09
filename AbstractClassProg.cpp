#include <iostream>
using namespace std;

class Shape
{

protected:
    int width;
    int height;

public:
    virtual int getArea() = 0;

    void setWidth(int x)
    {

        width = x;
    }

    void setHeight(int y)
    {
        height = y;
    }
};

class Rectangle : public Shape
{
public:
    int getArea()
    {

        return width * height;
    }
};

class Triangle : public Shape
{

public:
    int getArea()
    {
        return (width * height) / 2;
    }
};

int main()
{
    Rectangle r;
    r.setWidth(45);
    r.setHeight(50);
    cout << "Area of the rectangle is " << r.getArea() << endl;

    Triangle t;
    t.setWidth(78);
    t.setHeight(44);
    cout << "Area of triangle is " << t.getArea() << endl;
    return 0;
}