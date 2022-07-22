//Creation of a Hybrid Calculator using Multilevel Inheritance.

#include <bits/stdc++.h>

using namespace std;

class SimpleCalculator
{

public:
    double val1, val2;
    void setVals(int num1, int num2)
    {
        val1 = num1;
        val2 = num2;
    }

    void sum()
    {
        cout << val1 + val2 << endl;
    }

    void substract()
    {
        cout << val1 - val2 << endl;
    }

    void multiply()
    {
        cout << val1 * val2 << endl;
    }

    void divide()
    {
        double c;
        c = (val1 / val2);
        cout << c << endl;
    }
};

class ScientificCalculator : public SimpleCalculator
{

public:
    void root()
    {

        cout << sqrt(val1) << " " << sqrt(val2);
    }

    void square()
    {
        cout << (val1 * val1) << " " << (val2 * val2);
    }

    void reciprocal()
    {
        double d, e;
        d = (1 / val1);
        e = (1 / val2);
        cout << d << " " << e;
    }

    void cubicroot()
    {
        cout << cbrt(val1) << " " << cbrt(val2);
    }
};

class HybridCalculator : public ScientificCalculator
{

public:
    void display(int n)
    {

        switch (n)
        {
        case 1:
        {
            sum();
            break;
        }
        case 2:
        {
            substract();
            break;
        }

        case 3:
        {
            multiply();
            break;
        }

        case 4:
        {
            divide();
            break;
        }

        case 5:
        {

            root();
            break;
        }

        case 6:
        {
            square();
            break;
        }

        case 7:
        {
            reciprocal();
            break;
        }

        case 8:
        {
            cubicroot();
            break;

        default:
        {
            cout << "The choice you have entered does not exist" << endl;
            break;
        }
        }
        }
    }
};

int main()
{
    int n3;
    double val1, val2;
    HybridCalculator h1;
    cout << "Enter two values to be used in the calculator: " << endl;
    cin >> val1 >> val2;
    h1.setVals(val1, val2);
    cout << "1)Sum" << endl;
    cout << "2)Substract" << endl;
    cout << "3)Multiply" << endl;
    cout << "4)Divide" << endl;
    cout << "5)Square Root" << endl;
    cout << "6)Square" << endl;
    cout << "7)Reciprocal" << endl;
    cout << "8)Cubic Root" << endl;

    cout << "Please enter your desired choice: " << endl;
    cin >> n3;
    h1.display(n3);

    return 0;
}