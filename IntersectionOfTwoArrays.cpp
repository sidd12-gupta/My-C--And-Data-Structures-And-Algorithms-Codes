#include <iostream>
#include <unordered_set>
using namespace std;

// Intersection Of Two Arrays.

int intersection_size(int arr[], int brr[], int n1, int n2)
{
    unordered_set<int> s;
    int size = 0;
    for (int i = 0; i < n1; i++)
    {
        s.insert(arr[i]);
    }

    for (int i = 0; i < n2; i++)
    {
        if (s.count(brr[i]) == 1)
        {
            size++;
        }
    }

    return size;
}

int main()
{
    int n1, n2;
    cout << "Enter the size of the first array: ";
    cin >> n1;

    cout << "Enter the size of the second array: ";
    cin >> n2;

    int arr[n1];
    int brr[n2];

    cout << "Enter the elements of the first array: ";
    for (int i = 0; i < n1; i++)
    {
        cin >> arr[i];
    }

    cout << "Enter the elements of the second array: ";
    for (int i = 0; i < n2; i++)
    {
        cin >> brr[i];
    }

    cout << "The intersection size of the two arrays is: " << intersection_size(arr, brr, n1, n2) << endl;
    return 0;
}