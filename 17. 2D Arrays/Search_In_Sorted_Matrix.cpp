#include <iostream>
using namespace std;

bool search(int mat[][4], int n, int m, int key)
{
    int i = 0, j = m - 1;
    // O(n+m)
    while (i < n && j >= 0)
    {
        if (mat[i][j] == key)
        {
            cout << "Found at cell (" << i << "," << j << ")\n";
            return true;
        }
        else if (mat[i][j] > key)
        {
            // left
            j--;
        }
        else
        {
            // down
            i++;
        }
    }

    cout << "Key not found\n";
    return false;
}

bool searchOtherPattern(int arr[][4], int n, int m, int key)
{
    int i = n - 1;
    int j = 0;

    while (j < n && i >= 0)
    {
        // cout << arr[i][j] << endl;
        if (arr[i][j] == key)
        {
            cout << key << " found at the index of : [" << i << "][" << j << "]";
            return true;
        }
        else if (arr[i][j] < key)
        {
            j++;
        }
        else
        {
            i--;
        }
    }

    cout << key << " not found";
    return false;
}

int main()
{
    int matrix[4][4] = {{10, 20, 30, 40},
                        {15, 25, 35, 45},
                        {27, 29, 37, 48},
                        {32, 33, 39, 50}};

    // search(matrix, 4, 4, 50);
    searchOtherPattern(matrix, 4, 4, 100);

    return 0;
}