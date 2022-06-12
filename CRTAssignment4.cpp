#include <iostream>
using namespace std;

// Insert new element at a particular position in the unsorted array..!

void insert_sort(int arr[], int n, int data)
{
    int brr[n + 1];
    int loc = n;
    for (int i = 0; i < n; i++)
    {
        brr[i] = arr[i];
    }

    for (int i = 0; i < n; i++)
    {
        if (data <= brr[i])
        {
            loc = i;
            break;
        }
    }

    for (int i = n; i > loc; i--)
    {
        brr[i] = brr[i - 1];
    }

    brr[loc] = data;

    // Updated Array..!!

    for (int i = 0; i <= n; i++)
    {
        cout << brr[i] << " ";
    }
}

int main()
{
    int n;

    cout << "Enter the size of the array: ";
    cin >> n;

    int arr[n];
    cout << "Enter the elements of the array: ";

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int data;
    cout << "Enter the data you want to insert in the array: ";
    cin >> data;

    insert_sort(arr, n, data);

    return 0;
}