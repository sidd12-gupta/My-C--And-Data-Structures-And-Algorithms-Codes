#include <bits/stdc++.h>
using namespace std;

// By using Normal Recursion
int LCS(string a, string b, int m, int n)
{
    if (m == 0 || n == 0)
    {
        return 0;
    }

    if (a[m - 1] == b[n - 1])
    {
        return 1 + LCS(a, b, m - 1, n - 1);
    }
    else
    {
        return max(LCS(a, b, m - 1, n), LCS(a, b, m, n - 1));
    }
}
// By using Dynamic Programming..(Memoization)!(ERROR OCCURING!!)
/*int LCSDP(string a, string b, int m, int n, int memo[][])
{

    if (memo[m][n] == -1)
    {
        if (m == 0 || n == 0)
        {
            return 0;
        }
        if (a[m - 1] == b[n - 1])
        {
            memo[m][n] = 1 + LCSDP(a, b, m - 1, n - 1);
        }

        else
        {
            memo[m][n] = max(LCSDP(a, b, m - 1, n), LCSDP(a, b, m, n - 1));
        }
    }
    return memo[m][n];
}

// Took Reference from GFG code..!
int lcs(char *X, char *Y, int m, int n,
        vector<vector<int>> &dp)
{
    if (m == 0 || n == 0)
        return 0;
    if (X[m - 1] == Y[n - 1])
        return dp[m][n] = 1 + lcs(X, Y, m - 1, n - 1, dp);

    if (dp[m][n] != -1)
    {
        return dp[m][n];
    }
    return dp[m][n] = max(lcs(X, Y, m, n - 1, dp),
                          lcs(X, Y, m - 1, n, dp));
}*/

//Dynamic Programming using Tabulation..!

int lcs(string s1,string s2){
    int m = s1.length();
    int n = s2.length();
    
    int dp[m+1][n+1];

    for(int i=0;i<=m;i++){
        dp[0][i]=0;
    }
    for(int i=0;i<=n;i++){
        dp[i][0]=0;
    }

    for(int i=1;i<=m;i++){
        for(int j=1;j<=n;j++){
            if(s1[i-1]==s2[j-1]){
                dp[i][j]=1+dp[i-1][j-1];
            }
            else{
                dp[i][j]=max(dp[i-1][j],dp[i][j-1]);
            }
        }
    }

    return dp[m][n];
}

int main()
{
    string s1 = "AXYZ";
    string s2 = "BAZ";
    int m = s1.length();
    int n = s2.length();

    int memo[m + 1][n + 1];

    for (int i = 0; i < m + 1; i++)
    {
        for (int j = 0; j < n + 1; j++)
        {
            memo[i][j] = -1;
        }
    }

    cout << "Longest Common Subsquence is " << lcs(s1, s2);
    return 0;
}