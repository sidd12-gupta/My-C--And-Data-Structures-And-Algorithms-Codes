#include <iostream>
#include <unordered_set>
using namespace std;

// Count Distinct Elements in an Array.

int count_distinct(int arr[], int n)
{
    unordered_set<int> s;

    for (int i = 0; i < n; i++)
    {
        s.insert(arr[i]);
    }

    return s.size();
}

int main()
{
    int n;
    cout << "Enter the size of the array: ";
    cin >> n;
    int arr[n];
    cout << "Enter the elements of the array: ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    cout << "The number of distinct elements in the array are: " << count_distinct(arr, n) << endl;

    return 0;
}