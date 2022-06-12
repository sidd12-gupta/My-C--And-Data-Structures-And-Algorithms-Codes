#include <bits/stdc++.h>
using namespace std;

// Memoization
int fib(int n)
{
    int res;
    int memo[n + 1];
    for (int i = 0; i < n + 1; i++)
    {
        memo[i] = -1;
    }

    if (memo[n] == -1)
    {
        if (n == 0 || n == 1)
        {
            res = n;
            memo[n] = res;
        }
        else
        {
            res = fib(n - 1) + fib(n - 2);
            memo[n] = res;
        }
    }

    return memo[n];
}

// Tabulation

int fibt(int n)
{
    int f[n + 1];

    f[0] = 0;
    f[1] = 1;

    for (int i = 2; i <= n; i++)
    {
        f[i] = f[i - 1] + f[i - 2];
    }
    return f[n];
}

int main()
{
    int n = 5;

    cout << "Fibonacci Number is " << fib(6) << endl;
    cout << "Fibonacci Number by Tabulation is " << fibt(7) << endl;
    return 0;
}