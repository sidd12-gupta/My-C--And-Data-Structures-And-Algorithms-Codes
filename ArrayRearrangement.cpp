#include <iostream>
using namespace std;

void printArray(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}

void RearrangementArr(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        arr[i] = i;
    }
}

int main()
{
    int n;
    cout << "Enter a number: ";
    cin >> n;

    int arr[n];

    RearrangementArr(arr, n);
    printArray(arr, n);
    return 0;
}