#include<iostream>
using namespace std;

class Person{
    public:
    int age=20;
    void eating(){
        cout<<"The person who is coding in this vs code loves to eat Paneer Butter Masala"<<endl;
    }
    void College();
};

void Person::College(){

    cout<<"The person who is coding goes to JECRC UNIVERSITY JAIPUR"<<endl;

}

int main(){
    Person Siddharth;
    cout<<"Siddharth's Age is "<<Siddharth.age<<endl;
    Siddharth.eating();
    Siddharth.College();
    return 0;
     
}