#include <iostream>
using namespace std;

void BinarySearch(int arr[], int l, int r, int x)
{
    while (l <= r)
    {
        int mid = (l + r) / 2;

        if (arr[mid] == x)
        {
            cout << "Element Found at " << mid << endl;
            break;
        }

        else if (x < arr[mid])
        {
            BinarySearch(arr, 0, mid-1, x);
        }

        else
        {
            BinarySearch(arr, mid + 1, r, x);
        }
    }
}

int main()
{
    int arr[] = {10, 20, 30, 40, 50, 60};
    int n = sizeof(arr) / sizeof(arr[0]);
    int x=20;
    BinarySearch(arr, 0,n-1,x);

    return 0;
}