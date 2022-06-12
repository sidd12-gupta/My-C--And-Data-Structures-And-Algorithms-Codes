#include<iostream>
using namespace std;

class MyClass{
    private:
    int x;

    public:

    void set(int u){
        x=u;
    }

    int getx(){
        return x;
    }

};

int main(){
    MyClass class1;

    class1.set(5000);
    cout<<class1.getx();
    return 0;
}