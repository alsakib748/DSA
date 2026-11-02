#include <iostream>
#include <algorithm>
using namespace std;

void printArr(int *arr, int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}

int main()
{
    int arr[8] = {1, 4, 1, 3, 2, 4, 3, 7};
    int n = sizeof(arr) / sizeof(n);

    sort(arr, arr + n); // for asc
    // sort(arr, arr + n, greater<int>()); // for desc
    // sort(arr + 2, arr + 5);

    printArr(arr, n);
    return 0;
}