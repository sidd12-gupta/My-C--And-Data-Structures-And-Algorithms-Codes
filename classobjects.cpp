#include<iostream>
using namespace std;

class Car{
    public:
    int mileage;
    string fullmodel;
    float price;
};

int main(){
    Car Honda;
    


    Honda.mileage=56;
    Honda.fullmodel="Honda City SV";
    Honda.price=1250000;

    Car Toyota;

    Toyota.mileage=78;
    Toyota.fullmodel="Toyota Corolla Altis";
    Toyota.price=2450000;

    cout<<Honda.mileage<<endl;
    cout<<Honda.fullmodel<<endl;
    cout<<Honda.price<<endl;

    cout<<Toyota.mileage<<endl;
    cout<<Toyota.fullmodel<<endl;
    cout<<Toyota.price<<endl;

    if(Toyota.mileage==Honda.mileage){
        if(Honda.price<Toyota.price){
            cout<<"Buying Honda is a better option as it saves money"<<endl;
        }
        else{
            cout<<"Buying Toyota is better as it has a better brand value and it is cheaper than Honda"<<endl;
        }

    }
    else{
        if(Toyota.mileage<Honda.mileage){
            cout<<"Buy Honda"<<endl;
        }
        else {
            cout<<"Buy Toyota"<<endl;
        }
    }

    return 0;

}