#include <iostream>
using namespace std;

int MSIS(int arr[], int n)
{
    int msis[n];

    msis[0] = arr[0];

    for (int i = 1; i < n; i++)
    {   
        msis[i]=0;
        for (int j = 0; j < i; j++)
        {
            if (arr[j] < arr[i])
            {
                msis[i] = max(msis[i], msis[j] + arr[i]);
            }
        }
    }

    int res = msis[0];
    for (int i = 1; i < n; i++)
    {
        res = max(res, msis[i]);
    }

    return res;
}

int main()
{
    int arr[] = {5, 10, 3, 6, 7, 8};
    int n = sizeof(arr) / sizeof(arr[0]);

    cout << "Maximum Increasing Subsequence is: " << MSIS(arr, n) << endl;

    return 0;
}