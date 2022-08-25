#include <iostream>
#include <limits.h>
using namespace std;

int minCoins(int coins[], int n, int val)
{

    int dp[val + 1];

    for (int i = 0; i < val + 1; i++)
    {
        dp[i] = INT32_MAX;
    }

    dp[0] = 0;

    for (int i = 1; i <= val; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (coins[j] <= i)
            {
                int sub_res = dp[i - coins[j]];

                if (sub_res != INT_MAX)
                {
                    dp[i] = min(dp[i], sub_res + 1);
                }
            }
        }
    }

    return dp[val];
}

int main()
{
    int coins[] = {3, 4, 1};
    int n = 3;

    int val = 5;

    cout << "Minimum no of coins are: " << minCoins(coins, n, val);
    return 0;
}