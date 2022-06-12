#include<iostream>
using namespace std;

class Complex;

class Calculator{

    public:
    int add(int a,int b){
        return (a+b);
    }

    int sumRealComplex(Complex , Complex ); 
    int sumImagComplex(Complex , Complex);  

};

class Complex{
    int a,b;
    //friend int Calculator :: sumRealComplex(Complex , Complex);
    //using above and below codes when using friend function.
    //friend int Calculator :: sumImagComplex(Complex , Complex);

    friend class Calculator; // by using friend class we can also access the private members
    public:
    void setNumber(int n1,int n2){
        a=n1;
        b=n2;
    }

    void printNumber(){
        cout<<"Your number is "<<a<<" + "<<b<<"i"<<endl;
    }
};

int Calculator :: sumRealComplex(Complex o1, Complex o2){
    return (o1.a+o2.a);
}

int Calculator :: sumImagComplex(Complex o1, Complex o2){
    return (o1.b+o2.b);
}


int main(){
    Complex o1,o2;
    o1.setNumber(10,5);
    o2.setNumber(34,45);
    Calculator calc;
    int res = calc.sumRealComplex(o1,o2);
    cout<<"The sum of the real part of o1 and o2 is "<<res<<endl;
    int resc= calc.sumImagComplex(o1,o2);
    cout<<"The sum of the imaginary part of o1 and o2 is "<<resc<<endl;
    return 0;
}