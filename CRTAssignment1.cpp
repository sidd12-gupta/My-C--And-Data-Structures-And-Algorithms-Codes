#include <iostream>
using namespace std;

// Linear Searching in Array..!!

void linearsearch(int arr[], int n, int key)
{
    int flag = 0;
    int loc;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == key)
        {
            flag = 1;
            loc = i;
        }
    }

    if (flag == 1)
    {
        cout << "The element has been found at location " << loc << endl;
    }

    if (flag == 0)
    {
        cout << "The element has not been found in the array" << endl;
    }
}

int main()
{

    int n, key;

    cout << "Enter the size of the array: ";
    cin >> n;

    int arr[n];

    cout << "Enter elements: ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    cout << "Enter the element you want to search in the array: ";
    cin >> key;

    linearsearch(arr, n, key);

    return 0;
}
