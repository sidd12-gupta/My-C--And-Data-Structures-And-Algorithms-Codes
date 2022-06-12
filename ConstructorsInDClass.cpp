#include <iostream>
using namespace std;

class A
{
protected:
    string name;
    int age;

public:
    A(string name, int age)
    {
        this->name = name;
        this->age = age;
    }
};

class B
{
protected:
    string qual;
    int marks;

public:
    B(string qual, int marks)
    {
        this->qual = qual;
        this->marks = marks;
    }
};

class C : public A, B
{

    int distance;

public:
    C(string name, int age, string qual, int marks, int distance) : A(name, age), B(qual, marks)
    {
        this->distance = distance;
    }

    void display()
    {
        cout << name << " " << age << " " << qual << " " << marks << " " << distance << endl;
    }
};

int main()
{
    C c("Siddharth", 21, "BTECH", 96, 275);
    c.display();

    return 0;
}