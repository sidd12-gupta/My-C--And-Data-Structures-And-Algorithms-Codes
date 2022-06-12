#include<iostream>
using namespace std;

int sum(int a, int b){
    return a+b;
}

int sum(int a, int b, int c){
    return a+b+c;
}

float volume(float r, float h){
    return 3.14*r*r*h;

}

float volume(int l, int b, int h){
    return l*b*h;
}

int main(){

    cout<<"The sum of the two numbers is "<<sum(4,5)<<endl;
    cout<<"The sum of the three numbers is "<<sum(5,8,9)<<endl;
    cout<<"The volume of the cuboid is "<<volume(3,5,4)<<endl;
    cout<<"The volume of the cylinder is "<<volume(7.8,9)<<endl;

    return 0;


    
}