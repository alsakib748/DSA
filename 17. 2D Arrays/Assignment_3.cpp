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

void Transpose(int arr[][3], int n, int m)
{
    int transpose[3][2] = {0};
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            // cout << arr[j][i] << ", ";
            transpose[i][j] = arr[j][i];
        }
    }
    printArr(transpose, 3, 2);
}

int main()
{

    int arr[2][3] = {{1, 2, 3}, {4, 5, 6}};
    // printArr(arr, 2, 3);
    Transpose(arr, 2, 3);

    return 0;
}