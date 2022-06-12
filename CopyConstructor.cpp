#include<iostream>
using namespace std;

class A{

    public:
    int x;

    A(int num){

        x=num;

    }

    A(A &obj){

        x=obj.x;
        cout<<x;
    }
};

int main(){

    A a1(7);
    A a2(a1);
}