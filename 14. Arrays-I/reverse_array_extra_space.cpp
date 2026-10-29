#include <iostream>
using namespace std;

void reverseArray(int *arr, int n)
{
    int tempArr[n];

    for (int i = n - 1; i >= 0; i--)
    {
        tempArr[(n - 1) - i] = arr[i];
        // cout << arr[i] << endl;
    }

    for (int i = 0; i < n; i++)
    {
        arr[i] = tempArr[i];
        cout << arr[i] << ", ";
    }

    // cout << tempArr[0];
}

int main()
{

    int arr[5] = {5, 4, 3, 9, 2};
    int n = sizeof(arr) / sizeof(int);

    reverseArray(arr, n);

    return 0;
}