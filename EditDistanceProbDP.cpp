#include <bits/stdc++.h>
#include <string.h>
using namespace std;

// Normal Recursive Solution..
int eD(string s1, string s2, int m, int n)
{
    if (m == 0)
        return n;
    if (n == 0)
        return m;

    if (s1[m - 1] == s2[n - 1])
        return eD(s1, s2, m - 1, n - 1);
    else
    {
        return 1 + min(eD(s1, s2, m, n - 1), min(eD(s1, s2, m - 1, n), eD(s1, s2, m - 1, n - 1)));
    }
}

// Dynamic Programming Solution..

int eDDP(string s1, string s2, int m, int n)
{
    int dp[m + 1][n + 1];

    for (int i = 0; i <= m; i++)
    {
        dp[i][0] = i;
    }

    for (int j = 0; j <= n; j++)
    {
        dp[0][j] = j;
    }

    for (int i = 1; i <= m; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            if (s1[i - 1] == s2[j - 1])
            {
                dp[i][j] = dp[i - 1][j - 1];
            }

            else
            {
                dp[i][j] = 1 + min(dp[i - 1][j], dp[i - 1][j - 1], dp[i][j - 1]);
            }
        }
    }
    return dp[m][n];
}

int main()
{

    string s1 = "CAT", s2 = "CUT";
    int n = 3, m = 3;

    cout << eDDP(s1, s2, m, n);
}