#include<iostream>
using namespace std;

//wap to read an array of n numbers and find the smallest no..!

void read_array(int arr[],int n);

int find_smallest(int arr[],int n);

int main(){

    int num[10000],smallest;
    int n;

    cout<<"Enter the size of the array: ";
    cin>>n;

    read_array(num,n);

    smallest=find_smallest(num,n);
    cout<<"Smallest Number is "<<smallest<<endl;

    return 0;
}

void read_array(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<"arr["<<i<<"]"<<" = "<<endl;
        cin>>arr[i];
    }
}

int find_smallest(int arr[],int n){
    int i=0;
    int small=arr[0];

    for(int i=1;i<n;i++){
        if(arr[i]<small){
            small=arr[i];
        }
    }

    return small;
}