#include<iostream>

using namespace std;

class Car{

    public:

    Car(){
        cout<<"It is a car as it has four wheels"<<endl;
    }

    void feature(){
        cout<<"It is very reliable"<<endl;
    }
};

class Vehicle{

    public:

    Vehicle(){
        cout<<"It is a vehicle as it is helping us to travel from one place to another"<<endl;
    }

    void feature(){
        cout<<"It has a lot of power"<<endl;
    }
};

class SwiftDzire:public Vehicle,public Car{

    public:
    SwiftDzire(){
        cout<<"It is a car from Maruti Suzuki"<<endl;
    }
};

int main(){
    SwiftDzire msd;
    msd.Car::feature();
    return 0;
}