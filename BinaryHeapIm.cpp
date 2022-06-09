#include <bits/stdc++.h>
using namespace std;

#define MAX 1000

void swap(int *x, int *y)
{
    int temp = *x;
    *x = *y;
    *y = temp;
}

void heapify(int arr[], int n, int i)
{
    int largest = i;
    int l = 2 * i + 1;
    int r = 2 * i + 2;

    if (l < n && arr[l] > arr[largest])
    {
        largest = l;
    }
    if (r < n && arr[r] > arr[largest])
    {
        largest = r;
    }

    if (largest != i)
    {
        swap(&arr[i], &arr[largest]);

        heapify(arr, n, largest);
    }
}

void insertElement(int arr[], int n, int key)
{
    n = n + 1;

    arr[n - 1] = key;

    heapify(arr, n, n - 1);
}
void deleteRoot(int arr[], int n)
{

    int lastElement = arr[n - 1];

    arr[0] = lastElement;

    n = n - 1;

    heapify(arr, n, 0);
}
void buildHeap(int arr[],int n){
    int startIdx=(n-2)/2;

    for(int i=startIdx;i>=0;i--){
        heapify(arr,n,i);
    }
}

void heapsort(int arr[],int n){
    for(i=(n/2)-1;i>=0;i--){
        heapify(arr,n,i);
    }
    swap(arr[0],arr[n-1]);
    for(int i=n-1;i>=0;i--){
        heapify(arr,i,0);
    }
}
void printArray(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}

int main()
{
    int arr[MAX] = {10, 5, 3, 2, 4};
    int n = 5;
    int key = 15;
    insertElement(arr, n, key);
    printArray(arr, 6);

    return 0;
}