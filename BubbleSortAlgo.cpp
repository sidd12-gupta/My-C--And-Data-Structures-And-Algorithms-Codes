#include <iostream>
using namespace std;

void swap(int *x, int *y)
{
    int temp;
    temp = *x;
    *x = *y;
    *y = temp;
}

void BubbleSort(int arr[], int n)
{
    for (int i = 0; i < n - 1; i++) //for number of passes.
    {
        for (int j = 0; j < n - i - 1; j++) //for number of comparisons of each pass.
        {
            if (arr[j] > arr[j + 1])
            {
                swap(&arr[j], &arr[j + 1]);
            }
        }
    }
}

void BubbleSortAdaptive(int arr[], int n)
{
    int isSorted = 0;
    for (int i = 0; i < n - 1; i++)
    {

        cout << "Working on pass number " << i + 1 << endl;

        isSorted = 1;
        for (int j = 0; j < n - 1 - i; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                swap(&arr[j], &arr[j + 1]);
                isSorted = 0;
            }
        }

        if (isSorted)
        {
            return;
        }
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

    int arr[] = {12, 54, 67, 7, 23, 9};
    int a[] = {1, 2, 3, 4, 5, 6};
    int n = sizeof(arr) / sizeof(arr[0]);
    int n1 = sizeof(a) / sizeof(a[0]);
    BubbleSortAdaptive(a, n1);
    printArray(a, n1);
    return 0;
}