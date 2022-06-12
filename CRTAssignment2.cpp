#include <iostream>
using namespace std;

// Binary Search Technique.(Array must be sorted in order to apply this technique)!

void binarysearch(int arr[], int low, int high, int key)
{
    int mid = (low + high) / 2;

    if (low <= high)
    {
        if (arr[mid] == key)
        {
            cout << "Element found at " << mid << endl;
        }

        else
        {
            if (arr[mid] > key)
            {
                binarysearch(arr, low, mid - 1, key);
            }

            else if (arr[mid] < key)
            {
                binarysearch(arr, mid + 1, high, key);
            }
        }
    }
}

int main()
{
    int n, key;

    cout << "Enter the size of the array: ";
    cin >> n;

    int arr[n];

    cout << "Enter elements: ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    cout << "Enter the element you want to search in the array: ";
    cin >> key;

    binarysearch(arr, 0, n - 1, key);

    return 0;
}