#include <iostream>
using namespace std;

int main()
{
    // int marks[50] = {1, 2, 3};
    int marks[4] = {1, 2, 3, 4};

    // cout << marks[0] << endl;
    // cout << marks[1] << endl;
    // cout << marks[2] << endl;
    // cout << marks[3] << endl;
    // cout << marks[50] << endl;

    // cout << sizeof(marks) / sizeof(int) << endl;

    int n;
    cout << "Enter the size of array : ";
    cin >> n;

    int arr[n];
    int len = sizeof(arr) / sizeof(int);

    for (int i = 0; i < len; i++)
    {
        cout << "Enter the value of index " << i << " : ";
        cin >> arr[i];
    }

    for (int j = 0; j < n; j++)
    {
        cout << arr[j] << " ";
    }

    cout << endl;

    return 0;
}