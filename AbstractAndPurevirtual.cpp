#include<bits/stdc++.h>
using namespace std;

class A{
    public:
    virtual void abs()=0;  //Pure Virtual Function  
};

class B:public A{
    public:

    void abs(){
        cout<<"Virtual function in derived class"<<endl;

    }
};

int main(){
    A *a;
    B der1;
    a=&der1;
    a->abs();
}