#include <bits/stdc++.h>
using namespace std;

int maximum(int a[], int n)
{
    int max = INT32_MIN;
    for (int i = 0; i < n; i++)
    {
        if (max < a[i])
        {
            max = a[i];
        }
    }
    return max;
}

void countSort(int a[], int n)
{
    int i, j;
    int max = maximum(a, n);
    int *count = (int *)malloc((max + 1) * sizeof(int));

    for (i = 0; i < max + 1; i++)
    {
        count[i] = 0;
    }

    for (i = 0; i < n; i++)
    {
        count[a[i]]++;
    }

    i = 0;  //counter of count array..

    j = 0;  //counter of given array..

    while (i <= max)
    {
        if (count[i] > 0)
        {
            a[j] = i;
            count[i]--;
            j++;
        }
        else
        {
            i++;
        }
    }
}

void printAr(int a[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
}

int main()
{
    int a[] = {12, 34, 56, 11, 23, 15, 4};
    int n = sizeof(a) / sizeof(a[0]);
    countSort(a, n);
    printAr(a, n);
}