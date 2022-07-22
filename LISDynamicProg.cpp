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

    lis[0] = 1;

    for (int i = 1; i < n; i++)
    {
        lis[i] = 1;
        for (int j = 0; j < i; j++)
        {
            if (arr[j] < arr[i])
            {
                lis[i] = max(lis[i], lis[j] + 1);
            }
        }
    }

    int res = lis[0];

    for (int i = 0; i < n; i++)
    {
        res = max(res, lis[i]);
    }

    return res;
}

//LIS Implementation in O(nlogn) time complexity using binary search..

int ceilIdx(int tail[],int l,int r,int x){
    while(r>l){
        int m = l+(r-l)/2;

        if(tail[m]>=x){
            r=m;
        }
        else{
            l=m+1;
        }

    }

    return r;
}

int LisTC(int arr[],int n){
    int tail[n];

    tail[0]=arr[0];
    int len=1;

    for(int i=1;i<n;i++){
        if(arr[i]>tail[len-1]){
            tail[len]=arr[i];
            len++;
        }

        else{
            int c = ceilIdx(tail,0,len-1,arr[i]);
            tail[c]=arr[i];
        }
    
    }

    return len;
}
int main()
{
    int arr[] = {3, 4, 2, 8, 10, 5, 1};
    int n = sizeof(arr) / sizeof(arr[0]);

    cout << "Length of Longest Increasing Subsequence is: " << LisTC(arr, n) << endl;
    return 0;
}