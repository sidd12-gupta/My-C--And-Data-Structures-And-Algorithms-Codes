#include <iostream>
// Exercise 1

using namespace std;

/*class Shape
{
protected:
    float width, height;

public:
    void set_data(float a, float b)
    {
        width = a;
        height = b;
    }
};

class Rectangle : public Shape
{
public:
    float area()
    {
        return (width * height);
    }
};

class Triangle : public Shape
{
public:
    float area()
    {
        return (width * height / 2);
    }
};

int main()
{

    Rectangle rect;
    Triangle tri;
    rect.set_data(5, 3);
    tri.set_data(2, 5);
    cout << rect.area() << endl;
    cout << tri.area() << endl;
    return 0;
}*/

//

/*class Mother
{

public:
    void display()
    {
        cout << "Im the mother of a daughter" << endl;
    }
};

class Daughter : public Mother
{

public:
    void display()
    {
        cout << "Im the daughter of my mother" << endl;
    }
};

int main()
{
    Daughter d;
    d.display();
    return 0;
}*/

//

/*
class MotherAnimal
{

protected:
    string name;
    int age;

public:
    void set_value(string n, int a)
    {
        name = n;
        age = a;
    }
};

class Zebra : public MotherAnimal
{
protected:
    string placeoforigin;

public:
    void setPo(string poo)
    {
        placeoforigin = poo;
    }

    void getMessage()
    {
        cout << "The name of the zebra is " << name << ", his age is " << age << " and the place of origin is " << placeoforigin << endl;
    }
};

class Dolphin : public Zebra
{
public:
    void getMessage()
    {
        cout << "The name of the dolphin is " << name << ", his age is " << age << " and the place of origin is " << placeoforigin << endl;
    }
};

int main()
{
    Zebra z;
    z.set_value("Alex", 45);
    z.setPo("Land");
    z.getMessage();

    Dolphin d;
    d.set_value("Kiki", 34);
    d.setPo("Water");
    d.getMessage();
    return 0;
}*/

