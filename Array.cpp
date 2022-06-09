#include<iostream>
using namespace std;

void ArrayTraversal(int arr[], int n){

    for(int i=0;i<n;i++){
        cout<<" "<<arr[i]<<endl;
    }


}

void ArrayInsertion(int arr[], int size, int capacity, int element, int index){
    if(size>=capacity){
        cout<<"The size of the array exceeds the capacity of the array!"<<endl;
    }

    else{
        for(int i=size-1;i>=index;i--){
            arr[i+1]=arr[i];
        }

        arr[index]=element;
        size+=1;
    }

}

void ArrayDeletion(int arr[], int size, int index){

    for(int i=index;i<=size-1;i++){
        arr[i]=arr[i+1];

    }

    size-=1;
}

int main(){
    int arr[50]={12,25,45,66};

    ArrayDeletion(arr,4,2);
    ArrayTraversal(arr,3);
    
    return 0;

}