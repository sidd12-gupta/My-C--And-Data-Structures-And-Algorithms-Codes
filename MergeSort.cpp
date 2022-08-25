#include <iostream>
using namespace std;

void printArray(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}

void Merge(int arr[], int mid, int low, int high)
{
    int i, j, k;
    int B[high + 1];
    i = low;
    j = mid + 1;
    k = low;

    while (i <= mid && j <= high)
    {
        if (arr[i] < arr[j])
        {
            B[k] = arr[i];
            i++;
            k++;
        }

        else
        {
            B[k] = arr[j];
            j++;
            k++;
        }
    }

    while (i <= mid)
    {
        B[k] = arr[i];
        i++;
        k++;
    }

    while (j <= high)
    {
        B[k] = arr[j];
        j++;
        k++;
    }

    for (int i = low; i <= high; i++)
    {
        arr[i] = B[i];
    }
}

void MergeSort(int arr[], int low, int high)
{
    int mid;
    if (low < high)
    {
        mid = (low + high) / 2;
        MergeSort(arr, low, mid);
        MergeSort(arr, mid + 1, high);
        Merge(arr, mid, low, high);
    }
}

int main()
{
    int arr[] = {23, 22, 56, 34, 78, 90};
    int n = sizeof(arr) / sizeof(arr[0]);

    MergeSort(arr, 0, n - 1);
    printArray(arr, n);

    return 0;
}