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

// Normal Recursive Solution..!
int maximumcuts(int n, int a, int b, int c)
{
    if (n < 0)
    {
        return -1;
    }

    if (n == 0)
    {
        return 0;
    }

    int res = max(maximumcuts(n - a, a, b, c), maximumcuts(n - b, a, b, c), maximumcuts(n - c, a, b, c));

    if (res == -1)
    {
        return res;
    }

    else
    {
        return (res + 1);
    }
}

// Dynamic Programming Tabulation..!
int maximumcutsDPT(int n, int a, int b, int c)
{
    int dp[n + 1];

    dp[0] = 0;

    for (int i = 1; i <= n; i++)
    {
        dp[i] = -1;

        if (i - a >= 0)
        {
            dp[i] = max(dp[i], dp[i - a]);
        }

        if (i - b >= 0)
        {
            dp[i] = max(dp[i], dp[i - b]);
        }

        if (i - c >= 0)
        {
            dp[i] = max(dp[i], dp[i - c]);
        }

        if (dp[i] != -1)
        {
            dp[i]++;
        }
    }

    return dp[n];
}

int main()
{
    int n = 5;
    int a = 1;
    int b = 2;
    int c = 3;

    cout << "Maximum Cuts are: " << maximumcutsDPT(n, a, b, c) << endl;
    cout << "Maximum Cuts are: " << maximumcuts(n, a, b, c) << endl;
    return 0;
}