#include<iostream>
using namespace std;

void swap(int *x, int *y);

int main(){
    int a,b;
    cout<<"Enter your first number: "<<endl;
    cin>>a;

    cout<<"Enter your second number: "<<endl;
    cin>>b;

    swap(&a,&b);

    return 0;
}

void swap(int *x,int *y){
    int temp;
    temp=*x;
    *x=*y;
    *y=temp;

    cout<<"The values after swapping become: "<<*x<<" "<<*y<<endl;
}