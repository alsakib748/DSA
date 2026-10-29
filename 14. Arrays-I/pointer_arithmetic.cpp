#include <iostream>
using namespace std;

void printArr(int *ptr, int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << *(ptr + i) << endl;
    }
}

int main()
{

    int a = 10;
    int *aptr = &a;

    cout << aptr << "\n";
    aptr++;
    cout << aptr << "\n";
    aptr--;
    cout << aptr << "\n";

    // aptr++;
    cout << (aptr + 3) << "\n";
    // cout << (aptr - 2) << "\n";

    int arr[] = {1, 2, 3, 4, 5};
    int n = sizeof(arr) / sizeof(int);
    printArr(arr, n);

    return 0;
}