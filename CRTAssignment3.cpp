#include <iostream>
using namespace std;

// Insert new element in an unsorted array at a particular position.

void insert(int arr[], int n, int data)
{
    int brr[n + 1]; // Auxiliary Array created as an extra data is input to the array..!!
    int loc;
    cout << "Enter the location at which you want to enter the element: ";

    cin >> loc;

    for (int i = 0; i < n; i++)
    {
        brr[i] = arr[i];
    }

    for (int i = n; i > loc; i--) /*We don't want to assign prev value to next value as it will cause repetition and we
                                  have assigned next value to prev value to avoid repetition*/
    {
        brr[i] = brr[i - 1];
    }

    brr[loc] = data;

    cout << "Updated array is: ";

    for (int i = 0; i < n + 1; i++)
    {
        cout << brr[i] << " ";
    }
}

int main()
{

    int data, n;

    cout << "Enter the size of the array: ";
    cin >> n;

    int arr[n];

    cout << "Enter the elements of the array: ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    cout << "Enter the data you want to insert in the array: ";
    cin >> data;

    insert(arr, n, data);

    return 0;
}