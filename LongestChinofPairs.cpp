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

struct Number
{
    int first;
    int second;
};

bool comp(Number a, Number b)
{
    return a.first < b.first;
}

int LongestChain(Number p[], int n)
{
    sort(p, p + n, comp);

    int lis[n];
    lis[0] = 1;

    for (int i = 1; i < n; i++)
    {
        lis[i] = 1;
        for (int j = 0; j < i; j++)
        {
            if (p[i].first > p[j].second)
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

int main()
{
    struct Number n1[] = {(5, 24), (39, 60), (15, 28), (27, 40), (50, 90)};
    int n = 5;

    struct Number n2[] = {(6, 8), (3, 4)};
    int n3 = 2;

    cout << "Maximum Length of the Longest Chain is " << LongestChain(n1, n) << endl;
    cout << "Maximum Length of the Longest Chain is " << LongestChain(n2, n3) << endl;

    return 0;
}