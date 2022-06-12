#include <iostream>
using namespace std;

// Merge two sorted arrays.(Garbage Value as O/P is coming).

void merge_two_arr(int arr[], int brr[], int n1, int n2)
{
    int crr[n1 + n2];

    int i, j, k = 0;

    while (i < n1 && j < n2)
    {
        if (arr[i] < brr[j])
        {
            crr[k] = arr[i];
            i++;
            k++;
        }

        else
        {
            crr[k] = brr[j];
            j++;
            k++;
        }
    }

    while (i < n1) // When anyone of the above conditions in the while loop becomes false.
    {
        crr[k] = arr[i];
        i++;
        k++;
    }

    while (j < n2)
    {
        crr[k] = brr[j];
        j++;
        k++;
    }

    // Updated array..!!

    for (int u = 0; u < n1 + n2; u++)
    {
        cout << crr[u] << " ";
    }
}

int main()
{
    int n1, n2;
    cout << "Enter the size of the first array: ";
    cin >> n1;
    cout << "Enter the size of the second array: ";
    cin >> n2;

    int arr[n1];
    int brr[n2];
    cout << "Enter the elements of the 1st array(sorted): ";
    for (int i = 0; i < n1; i++)
    {
        cin >> arr[i];
    }

    cout << "Enter the elements of the second array(sorted): ";
    for (int i = 0; i < n2; i++)
    {
        cin >> brr[i];
    }

    merge_two_arr(arr, brr, n1, n2);

    return 0;
}