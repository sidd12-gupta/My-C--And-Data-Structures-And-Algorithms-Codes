#include<iostream>
using namespace std;

class Animal{
    protected:

    void info(){
        cout<<"I am an Animal"<<endl;
    }
};

class Dog:public Animal{
    public:

    void eat(){
        cout<<"I like bones..!!"<<endl;
    }

    void bark(){
        cout<<"Woof Woof..! I love to Bark !!"<<endl;
    }
};

class Cat:public Animal{
    public:

    void eat(){
        cout<<"I would love to eat a mice..!!"<<endl;
    }

    void meow(){
        cout<<"Meow Meow..! I love to meow !!"<<endl;
    }
};

int main(){

    Dog dog1;
    cout<<"Dog Class: "<<endl;
    dog1.eat();
    dog1.bark();

    Cat cat1;
    cout<<"Cat Class: "<<endl;
    cat1.eat();
    cat1.meow();

    return 0;

}