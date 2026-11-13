#include <iostream>
using namespace std;

int main()
{

    // int arr[100] = {1, 2, 3, 4, 5};

    int size;
    cout << "Enter the size : ";
    cin >> size;

    // *** Dynamic memory allocate
    int *arr = new int[size];
    // arr[0] = *(arr + 0);

    int x = 1;
    for (int i = 0; i < size; i++)
    {
        arr[i] = x;
        cout << arr[i] << " ";
        x++;
    }
    cout << endl;

    return 0;
}