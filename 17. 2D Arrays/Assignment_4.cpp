// todo; This problem not solve yet
#include <iostream>
using namespace std;

void printArr(int arr[][2], int n, int m)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cout << arr[i][j] << " | ";
        }
        cout << endl;
    }
}

void _1DTo2DArray(int arr[], int n)
{

    int TwoDarray[2][2] = {0};

    for (int i = 0; i < n; i++)
    {
        TwoDarray[i][i] = arr[i];
    }
    printArr(TwoDarray, 2, 2);
}

int main()
{

    int arr[4] = {1, 2, 3, 4};
    int n = sizeof(n) / sizeof(int);
    // printArr(arr, 2, 3);
    _1DTo2DArray(arr, n);

    return 0;
}