#include <iostream>
#include <map>
using namespace std;

void count_distinct(int arr[], int k, int n)
{
    map<int, int> map;
    for (int i = 0; i < k; i++)
    {
        map[arr[i]] = map[arr[i]] + 1;
    }
    cout << map.size() << " ";

    for (int i = k; i < n; i++)
    {
        if (map[arr[i - k]] == 1)
        {
            map.erase(arr[i - k]);
        }

        else
        {
            map[arr[i - k]] -= 1;
            cout << map.size() << " ";
        }
    }
}

int main()
{
    int n, k;
    cout << "Enter size of the array: ";
    cin >> n;

    int arr[n];
    cout << "Enter the elements of the array: ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    cout << "Enter the size of the window: ";
    cin >> k;

    count_distinct(arr, k, n);

    return 0;
}