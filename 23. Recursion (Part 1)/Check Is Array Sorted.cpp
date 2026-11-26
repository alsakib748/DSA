#include <iostream>
using namespace std;

bool isSorted(int arr[], int n, int i)
{
    if (i == (n - 1))
    {
        return true;
    }

    // work
    if (arr[i] > arr[i + 1])
    {
        return false;
    }

    // base case
    return isSorted(arr, n, i + 1);
}

int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6};
    int arr2[] = {1, 2, 4, 3, 5, 6};
    int n = sizeof(arr) / sizeof(int);
    int i = 0;
    cout << isSorted(arr, n, i) << endl;
    cout << isSorted(arr2, n, i) << endl;
    return 0;
}