#include<bits/stdc++.h>
using namespace std;

class Car{
    public:
    int price;

    void printPrice(int val){
        price = val;
        cout<<"The price of this car(in lakhs) is "<<price<<endl;
    }
};

class Honda:public Car{
    public:
    void printPrice(){
        cout<<"The price of this Honda is 233L "<<endl;
    }
};

class Toyota:public Car{
    public:
    void printPrice(){
        cout<<"The price of this Toyota is 344L"<<endl;
    }
};

int main(){
    Car c1;
    Honda h1;
    Toyota t1;

    c1.printPrice(899);
    h1.printPrice();
    t1.printPrice();

    return 0;
}