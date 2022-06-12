#include<iostream>
using namespace std;

void read_array(int arr[],int );
void display_array(int arr[],int);
void interchange(int arr[],int);
int fnd_biggest_pos(int arr[],int);
int fnd_smallest_pos(int arr[],int);

void swap(int *x,int *y){
    int temp;

    temp=*x;
    *x=*y;
    *y=temp;
}

int main(){

    int arr[1000],n;

    cout<<"Enter the size of the array: ";
    cin>>n;

    read_array(arr,n);

    interchange(arr,n);

    cout<<"The new array is ";
    display_array(arr,n);


    return 0;
}

void read_array(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<"arr["<<i<<"]"<<" = "<<endl;
        cin>>arr[i];
    }
}

void display_array(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}

int fnd_biggest_pos(int arr[],int n){
    int max=arr[0],pos=0;

    for(int i=1;i<n;i++){
        if(arr[i]>max){
            max=arr[i];
            pos=i;
        }
    }

    return pos;
}

int fnd_smallest_pos(int arr[],int n){
    int min=arr[0],pos=0;

    for(int i=1;i<n;i++){
        if(arr[i]<min){
            min=arr[i];
            pos=i;
        }
    }

    return pos;
}

void interchange(int arr[],int n){

    int biggest=fnd_biggest_pos(arr,n);
    int smallest=fnd_smallest_pos(arr,n);

    swap(&arr[smallest],&arr[biggest]);

}