#include <iostream>
using namespace std;

// Normal Recursive Method..!

void getCount(int coins[], int n, int sum)
{
    int res = 0;

    if (sum == 0 || n == 0)
    {
        cout << "No of coins are: " << res << endl;
    }

    if (coins[n - 1] > sum)
    {

        getCount(coins, n - 1, sum);
    }

    else
    {
        sum -= coins[n - 1];
        res++;
        getCount(coins, n, sum);
    }
}

int main()
{
    int coins[] = {10, 20, 30, 60};
    int n = 4;
    int sum = 100;

    getCount(coins, n, sum);

    return 0;
}