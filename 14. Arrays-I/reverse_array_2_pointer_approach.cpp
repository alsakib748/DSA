#include <iostream>
using namespace std;

int main()
{
    int arr[5] = {5, 4, 3, 9, 2};
    int n = sizeof(arr) / sizeof(int);

    int start = 0, end = n - 1;
    // start = 0 ; end = 4 arr[0] = 2 ; arr[4] = 5
    // start = 1 ; end = 3 arr[1] = 9 ; arr[3] = 4
    // start = 2 ; end = 2 arr[2] = 3 ; arr[2] = 3
    // start = 3 ; end = 2 // condition false so loop not work.

    while (start < end)
    {
        // swap
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        // swap(arr[start], arr[end]);

        start++;
        end--;
    }

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << ", ";
    }
}