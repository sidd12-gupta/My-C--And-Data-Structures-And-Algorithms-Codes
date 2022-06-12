#include <bits/stdc++.h>
using namespace std;

class Complex
{
    int real;
    int imag;

public:
    Complex(int r = 0, int i = 0)
    {
        real = r;
        imag = i;
    }

public:
    friend Complex operator+(Complex, Complex);

    void display()
    {
        cout << real << "+" << imag << "i";
    }
};

Complex
operator+(Complex A, Complex B)
{
    Complex t;

    t.real = A.real + B.real;
    t.imag = A.imag + B.imag;

    return t;
}

int main()
{
    int val1, val2, val3, val4;
    cout << "Please enter the real and imaginary part of the number ";
    cin >> val1 >> val2;
    cout << "Please enter the real and imaginary part of the second number ";
    cin >> val3 >> val4;
    Complex c1(val1, val2);
    Complex c2(val3, val4);
    Complex c3;

    c3 = c2 + c1;

    c3.display();
}