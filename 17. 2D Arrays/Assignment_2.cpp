#include <iostream>
using namespace std;

void PrintNumber(int arr[][3], int n, int m)
{
    int sum = 0;
    int row = 1;
    for (int i = 0; i < m; i++)
    {
        if (arr[row][i])
        {
            sum += arr[row][i];
        }
    }
    cout << "Output : " << sum << endl;
}

int main()
{

    int arr[3][3] = {{1, 4, 9}, {11, 4, 3}, {2, 2, 3}};

    PrintNumber(arr, 3, 3);

    return 0;
}