// todo; This problem not solve yet
#include <iostream>
using namespace std;

void printArr(int arr[][3], int n, int m)
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

void RotateImage(int arr[][3], int n, int m)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            arr[j][m - (i + 1)] = arr[i][j];
            // cout << "|" << j << "," << (m - i - 1) << "| ";
        }
        cout << endl;
    }
    printArr(arr, 3, 3);
}

int main()
{

    int arr[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};

    RotateImage(arr, 3, 3);

    return 0;
}