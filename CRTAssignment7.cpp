#include <iostream>
using namespace std;

// Longest Increasing Series in an Array..!

void longest_inc_s(int arr[], int n)
{
    int i = 0;

    int brr[n];

    for (int i = 0; i < n; i++)
    { // Initializing brr with -1.
        brr[i] = -1;
    }

    if (n == 0)
    {
        cout << "No element is present in the array" << endl;
    }

    else
    {
        for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
                if(arr[j]>=arr[i]){
                    brr[i]=arr[i];
                }
            }
        }
    }

    for (int i = 0; i < n; i++)
    {
        cout << brr[i] << " ";
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

    longest_inc_s(arr, n);

    return 0;
}