#include <bits/stdc++.h>
using namespace std;

struct Activity
{
    int start;
    int end;
};

bool comp(Activity act1, Activity act2)
{
    return (act1.end < act2.end);
}

int maxActivity(Activity act[], int n)
{
    sort(act, act + n, comp);

    int prev = 0;
    int res = 1;

    for (int curr = 1; curr < n; curr++)
    {
        if (act[curr].start >= act[prev].end)
        {
            res++;
            prev = curr;
        }
    }

    return res;
}

int main()
{
    Activity act[] = {{12, 25}, {10, 27}, {27, 28}};

    int n = sizeof(act) / sizeof(act[0]);
    cout << "The optimal solution is " << maxActivity(act, n);

    return 0;
}