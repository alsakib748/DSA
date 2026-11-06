#include <iostream>
using namespace std;

// void diagonalSum(int arr[][3], int n, int m)
// {
//     int sum = 0;
//     int check[n][m] = {0};
//     for (int i = 0; i < n; i++)
//     {
//         for (int j = i; j <= i; j++)
//         {
//             if (arr[i][j] != check[i][j])
//             {
//                 cout << arr[i][j] << ", ";
//                 sum += arr[i][j];
//                 check[i][j] = arr[i][j];
//             }
//         }
//         cout << endl;
//         for (int k = n - i - 1; k >= n - i - 1; k--)
//         {
//             if (arr[i][k])
//             {
//                 if (arr[i][k] != check[i][k])
//                 {
//                     cout << arr[i][k] << ", ";
//                     sum += arr[i][k];
//                     check[i][k] = arr[i][k];
//                 }
//             }
//         }
//         cout << endl;
//     }

//     cout << "Enter the sum : " << sum;
// }

void diagonalSum(int arr[][3], int n, int m)
{
    int sum = 0;
    // O(N^2)
    // todo; Old Way
    // for (int i = 0; i < n; i++)
    // {
    //     for (int j = 0; j <= n; j++)
    //     {
    //         if (i == j)
    //         {
    //             cout << arr[i][j] << ", ";
    //             sum += arr[i][j];
    //         }
    //         else if (j == n - i - 1)
    //         {
    //             cout << arr[i][j] << ", ";
    //             sum += arr[i][j];
    //         }
    //     }
    //     cout << endl;
    // }

    // todo; Optimize Way
    // todo; O(N)
    for (int i = 0; i < n; i++)
    {
        sum += arr[i][i]; // pd
        if (i != n - i - 1)
        {
            sum += arr[i][n - i - 1]; // sd
        }
    }

    cout << "Enter the sum : " << sum;
}

int main()
{

    // int arr[4][4] = {{1, 2, 3, 4},
    //                  {5, 6, 7, 8},
    //                  {9, 10, 11, 12},
    //                  {13, 14, 15, 16}};

    // // diagonalSum(arr, 4, 4);
    // diagonalSum(arr, 4, 4);

    int arr2[3][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9},
    };

    // todo; Matrix must be n * n size matrix.

    // diagonalSum(arr, 4, 4);
    diagonalSum(arr2, 3, 3);

    return 0;
}