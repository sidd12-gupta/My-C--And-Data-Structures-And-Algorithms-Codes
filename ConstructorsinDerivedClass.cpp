#include <iostream>
using namespace std;
/*Program to show how to call the constructors of 
the derived class.
*/
class Base1
{
    int data1;

public:
    Base1(int val)
    {
        data1 = val;
        cout << "Base Class Constructor Called!" << endl;
    }

    void printDataBase1()
    {
        cout << data1 << endl;
    }
};

class Base2
{
    int data2;

public:
    Base2(int val)
    {
        data2 = val;
        cout << "Base Class Constructor 2 Called!" << endl;
    }

    void printDataBase2()
    {
        cout << data2 << endl;
    }
};

class Derived_class : public Base1, public Base2
{

    int derived1, derived2;

public:
    Derived_class(int a, int b, int c, int d) : Base1(a), Base2(b) /*The order of the base classes in the declaration
    of derived class constructor does not have any affect in the order of the constructor call.
    */
    {
        derived1 = c;
        derived2 = d;
        cout << "Derived Class constructor called!" << endl;
    }

    void printDataDerived(void)
    {
        cout << derived1 << endl;
        cout << derived2 << endl;
    }
};
int main()
{
    Derived_class Siddharth(1, 4, 6, 7);
    Siddharth.printDataBase1();
    Siddharth.printDataBase2();
    Siddharth.printDataDerived();
    return 0;
}