#include <iostream>
using namespace std;

void PrintNumber(int arr[][3], int n, int m, int key)
{
    int i = 1;
    int j = 0;

    for (int i = 1; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (arr[i][j] == key)
            {
                cout << j << endl;
                return;
            }
        }
    }
}

int main()
{

    int arr[2][3] = {{4, 7, 8}, {8, 8, 7}};

    PrintNumber(arr, 3, 2, 7);

    return 0;
}