#include <iostream>
using namespace std;

typedef struct Complex
{
    int real;
    int imag;
} complex;

int main()
{
    complex c1, c2;

    // Taking input for complex numbers..!
    cout << "Enter the real part for 1st: ";
    cin >> c1.real;

    cout << "Enter the imaginary part for 1st: ";
    cin >> c1.imag;

    cout << "Enter the real part for 2nd: ";
    cin >> c2.real;

    cout << "Enter the imaginary part for 2nd: ";
    cin >> c2.imag;

    // Displaying the two complex numbers..!
    cout << c1.real << "+i" << c1.imag << endl;
    cout << c2.real << "+i" << c2.imag << endl;

    // Adding the two complex numbers..!
    cout << (c1.real + c2.real) << "+i" << (c1.imag + c2.imag) << endl;

    // Substracting the two complex numbers..!
    cout << (c1.real - c2.imag) << "+i" << (c1.imag - c2.imag) << endl;

    return 0;
}