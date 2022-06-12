#include <bits/stdc++.h>
using namespace std;

struct Knap
{

    double value;
    double weight;
};

bool comp(Knap k1, Knap k2)
{
    double a = (double)k1.value / k1.weight;
    double b = (double)k2.value / k2.weight;

    return a > b;
}

int KnapsackProb(int W, Knap k[], int n)
{
    sort(k, k + n, comp);
    double res = 0.0;

    for (int i = 0; i < n; i++)
    {
        if (k[i].weight <= W)
        {
            res += k[i].value;
            W -= k[i].weight;
        }
        else
        {

            res += W * ((double)k[i].value / k[i].weight);
            break;
        }
    }

    return res;
}

int main()
{
    Knap k[] = {{120, 30}, {100, 20}, {60, 10}};
    int n = sizeof(k) / sizeof(k[0]);

    cout << "The maximum profit obtained is " << KnapsackProb(50, k, n);
    return 0;
}