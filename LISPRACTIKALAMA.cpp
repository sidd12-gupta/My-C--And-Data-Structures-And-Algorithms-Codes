#include <bits/stdc++.h>
using namespace std;
int max(int a, int b)
{
    if (a > b)
    {
        return a;
    }
    else
    {
        return b;
    }
}
int LIS(int arr[], int n)
{
    int lis[n];

    for (int i = 0; i < n; i++)
    {
        lis[i] = 0;
    }

    lis[0] = 1;

    for (int i = 1; i < n; i++)
    {
        lis[i] = 1;

        for (int j = 0; j < i; j++)
        {
            if (arr[i] > arr[j])
            {
                lis[i] = max(lis[i], lis[j] + 1);
            }
        }
    }

    int res = lis[0];

    for (int i = 0; i < n; i++)
    {
        res = max(lis[i], res);
    }

    return res;
}

int main()
{

    int arr[] = {3, 4, 2, 8, 10, 5, 1};
    int n = sizeof(arr) / sizeof(arr[0]);

    cout << "Length of the longest increasing subsequence is: " << LIS(arr, n) << endl;
    return 0;
}