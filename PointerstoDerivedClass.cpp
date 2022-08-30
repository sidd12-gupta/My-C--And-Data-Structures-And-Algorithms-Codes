#include <bits/stdc++.h>
using namespace std;

class BaseClass
{
public:
    int var_base;
    void display()
    {
        cout << "Displaying Base class variable var_base here " << var_base << endl;
    }
};

class DerivedClass : public BaseClass
{
public:
    int var_derived;
    void display()
    {
        cout << "Displaying Base class variable var_base here " << var_base << endl;
        cout << "Displaying Derived Class variable var_derived over here " << var_derived << endl;
    }
};

int main()
{
    BaseClass *base_class_pointer;
    BaseClass obj_base;
    DerivedClass obj_derived;
    base_class_pointer = &obj_derived; //base class pointer points to the object of derived class.

    base_class_pointer->var_base = 34;
    base_class_pointer->display();

    DerivedClass *derived_class_pointer;
    derived_class_pointer = &obj_derived;
    derived_class_pointer->var_derived = 45; //Cannot point to base class object as base has not inherited from derived
    derived_class_pointer->var_base = 56;
    derived_class_pointer->display();
    return 0;
}
