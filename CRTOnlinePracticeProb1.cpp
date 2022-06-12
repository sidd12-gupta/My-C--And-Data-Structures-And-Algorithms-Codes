#include <iostream>
using namespace std;

class Complex
{
    int real, imag;

public:
    void setdata(int real, int imag)
    {
        this->real = real;
        this->imag = imag;
    }

    void getdata()
    {
        cout << "Enter real no.";
        cin >> real;
        cout << "Enter imag no.";
        cin >> imag;
    }

    Complex sum(Complex c2)
    {
        Complex t;

        t.real = real + c2.real;
        t.imag = imag + c2.imag;
        return t;
    }

    void output()
    {
        cout << real << "+" << imag << "i" << endl;
    }
};

int main()
{
    Complex c1, c2, c3;
    c1.setdata(7, 3);
    c2.getdata();
    c3 = c1.sum(c2);
    c1.output();
    c2.output();
    c3.output();
    return 0;
}