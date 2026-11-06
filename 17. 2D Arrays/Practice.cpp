#include <iostream>
using namespace std;

void SpiralMatrix(int spr[][4], int n, int m)
{
    int srow = 0, erow = n - 1;
    int scol = 0, ecol = m - 1;

    while (erow >= srow && ecol >= scol)
    {
        // Top boundary value show
        for (int j = scol; j <= ecol; j++)
        {
            cout << spr[srow][j] << ", ";
        }

        // Right boundary value show
        for (int i = srow + 1; i <= erow; i++)
        {
            cout << spr[i][ecol] << ", ";
        }

        // Bottom boundary value show
        for (int j = ecol - 1; j >= scol; j--)
        {
            if (srow == erow)
            {
                break;
            }
            cout << spr[erow][j] << ", ";
        }

        // Left boundary value show
        for (int i = erow - 1; i >= srow + 1; i--)
        {
            if (scol == ecol)
            {
                break;
            }
            cout << spr[i][scol] << ", ";
        }

        srow++;
        scol++;
        erow--;
        ecol--;
    }

    cout << endl;
}

int main()
{

    // int spr[][5] = {
    //     {1, 2, 3, 4, 5},
    //     {16, 17, 18, 19, 6},
    //     {15, 24, 25, 20, 7},
    //     {14, 23, 22, 21, 8},
    //     {13, 12, 11, 10, 9}};

    // SpiralMatrix(spr, 5, 5);

    int sprAnother[3][4] = {
        {1, 2, 3, 4},
        {5, 6, 7, 8},
        {9, 10, 11, 12}};

    SpiralMatrix(sprAnother, 3, 4);

    cout << endl
         << endl;

    int matrix2[5][4] = {
        {1, 2, 3, 4},
        {5, 6, 7, 8},
        {9, 10, 11, 12},
        {13, 14, 15, 16},
        {17, 18, 19, 20}};

    SpiralMatrix(matrix2, 5, 4);

    return 0;
}