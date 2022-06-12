#include<iostream>
using namespace std;

class X{

    public:
    X(){
        cout<<"The constructor is being called"<<endl;
    }

    ~X(){
        cout<<"The destructor is being called"<<endl;
    }
};

int main(){
    X x1;
    {
        cout<<"Entering Block"<<endl;
        cout<<"Creating two objects"<<endl;
        X x1,x2;
        cout<<"Exiting block"<<endl;
    }
    cout<<"We have used our class x1 successfully"<<endl;
    return 0;
}