#include<iostream>
using namespace std;

class MyClass{
    public:
    int data=25;
    MyClass(){
        cout<<"My name is Siddharth";
    }

};

class Car{
    public:
    string Brand;
    string Model;
    int year;

    Car(string x, string y, int z){
        Brand=x;
        Model=y;
        year=z;
    }

};
int main(){
    Car car1("Honda","City",2010);
    Car car2("Toyota","Corolla",2015);

    cout<<car1.Brand<<" "<<car1.Model<<" "<<car1.year<<endl;
    cout<<car2.Brand<<" "<<car2.Model<<" "<<car2.year<<endl;

    return 0; 
}