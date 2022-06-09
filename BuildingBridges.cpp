#include <bits/stdc++.h>
using namespace std;

//Giving Wrong Answer..!
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

struct bridge
{
    int first;
    int second;
};

bool comp(bridge a, bridge b)
{
    if (b.first == a.first)
    {
        return a.second < b.second;
    }
    else
    {
        return a.first < b.first;
    }
}

int BuildingBridges(bridge b[], int n)
{
    sort(b, b + n, comp);

    int lis[n];
    lis[0] = 1;

    for (int i = 1; i < n; i++)
    {
        lis[i] = 1;
        for (int j = 0; j < i; j++)
        {
            if (b[i].second > b[j].second)
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
    struct bridge arr[] = {(6, 2), (4, 3), (2, 6), (1, 5)};

    int n = 4;

    cout << "Maximum No. of Bridges are: " << BuildingBridges(arr, n) << endl;

    return 0;
}