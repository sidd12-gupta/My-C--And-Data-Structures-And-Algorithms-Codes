#include <iostream>
using namespace std;

int min_jumps(int arr[], int n)
{
    int dp[n];

    for(int i=0;i<n;i++){
        dp[i]=-1;
    }

    dp[0]=0;

    for(int i=0;i<n;i++){
        for(int j=0;j<arr[i];j++){
            if()
        }
    }
}

int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    cout << "Minimum Jumps: " << min_jumps(arr, n) << endl;
}