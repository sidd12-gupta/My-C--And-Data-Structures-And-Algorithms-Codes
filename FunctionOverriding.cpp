#include<iostream>
using namespace std;

class A{
    public:
    void info(){
        cout<<"Hello There!!"<<endl;
    }
};

class B:public A{
    public:
    void info(){
        cout<<"Hey There!!"<<endl;
        A::info(); //calling overridden function
    }
    
};

int main(){
    A a1;
    B b1;

    b1.info(); //Function overriding takes place
    b1.A::info();  
}