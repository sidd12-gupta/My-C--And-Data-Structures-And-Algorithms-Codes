#include <iostream>
using namespace std;

// Check whether a given array is sorted in increasing order or not..!

void increasing_arr(int arr[], int n)
{
    int flag = 0;

    for (int i = 0; i < n - 1; i++)
    {
        if (arr[i] <= arr[i + 1])
        {
            flag = 1;
        }

        else
        {
            flag = 0;
            break;
        }
    }

    if (flag == 1)
    {
        cout << "This array is sorted in increasing order" << endl;
    }

    else
    {
        cout << "This array is not sorted in increasing order" << endl;
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

    increasing_arr(arr, n);

    return 0;
}