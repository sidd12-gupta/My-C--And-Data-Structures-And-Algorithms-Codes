#include <iostream>
#include <map>
using namespace std;

void subarray_sum(int arr[], int n)
{
    int sum;
    cout << "Enter the sum you want the subarray for: ";
    cin >> sum;
    int start = 0;
    int end = -1;
    int curr_sum = 0;

    for (int i = 0; i < n; i++)
    {
        curr_sum += arr[i];

        if (curr_sum == sum){
            start=0;
            end=i;
        }

        if(map.)
    }
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

    return 0;
}