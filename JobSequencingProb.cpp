#include <iostream>
#include <algorithm>

using namespace std;

struct Job
{
    char id;
    int deadline;
    int profit;
};

bool comp(Job a, Job b)
{
    return (a.profit > b.profit);
}

void maxProfit(Job j[], int n)
{
    sort(j, j + n, comp);

    int result[n];
    bool slot[n];

    for (int i = 0; i < n; i++)
    {
        slot[i] = false;
    }

    for (int i = 0; i < n; i++)
    {
        for (int k = min(n, j[i].deadline) - 1; k >= 0; k--)
        {
            if (slot[k] == false)
            {
                result[k] = i;
                slot[k] = true;
                break;
            }
        }
    }

    for (int i = 0; i < n; i++)
    {
        if (slot[i])
        {
            cout << j[result[i]].id << " ";
        }
    }
}

int main()
{
    Job j[] = {{'a', 2, 100}, {'b', 1, 19}, {'c', 2, 27}, {'d', 1, 25}, {'e', 3, 15}};

    int n = sizeof(j) / sizeof(j[0]);

    cout << "Following is max profit: ";

    maxProfit(j, n);
    return 0;
}