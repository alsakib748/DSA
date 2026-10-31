#include <iostream>
using namespace std;

void BubbleSort(int *arr, int n)
{

    for (int i = 0; i < n - 1; i++)
    {
        bool isSwap = false;
        cout << i << " : outer loop" << endl;
        for (int j = 0; j < n - i - 1; j++)
        {
            cout << "  ->" << j << " : inner loop" << endl;
            if (arr[j] > arr[j + 1])
            {
                swap(arr[j], arr[j + 1]);
                isSwap = true;
            }
        }

        if (!isSwap)
        {
            // array is already sorted
            return;
        }
    }
}

int main()
{
    int arr[5] = {5, 4, 1, 3, 2};
    // int arr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int n = sizeof(arr) / sizeof(int);
    BubbleSort(arr, n);
    return 0;
}