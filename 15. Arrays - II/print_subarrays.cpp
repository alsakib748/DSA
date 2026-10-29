#include <iostream>
using namespace std;

int main()
{

    int arr[5] = {1, 2, 3, 4, 5};
    int n = sizeof(arr) / sizeof(int);

    for (int i = 0; i < n; i++)
    { // n
        // cout << arr[i] << ", ";
        for (int j = i; j < n; j++)
        { // n
            // cout << arr[i] << arr[j] << ", ";
            // cout << i << j << ", ";
            for (int k = i; k <= j; k++)
            { // n
                cout << arr[k];
                // cout << k;
            }
            cout << ", ";
        }
        cout << endl;
    }

    return 0;
}
// todo; TC = O(n^3)