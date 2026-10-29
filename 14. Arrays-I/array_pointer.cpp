#include <iostream>
using namespace std;

void func(int arr[])
{
    arr[0] = 1000;
}

void func2(int *ptr)
{
    ptr[0] = 1000;
}

void printArr(int nums[], int n)
{
    cout << sizeof(nums) << endl;

    // int n = sizeof(nums) / sizeof(int);

    for (int i = 0; i < n; i++)
    {
        // cout << *(nums + i) << endl;
        cout << nums[i] << endl;
    }
}

int main()
{

    int a = 5;
    int *ptr = &a;
    cout << ptr << endl;

    int arr[] = {1, 2, 3, 4, 5, 9};
    int n = sizeof(arr) / sizeof(int);

    // cout << *arr << endl; # arr[0]
    // cout << *(arr + 1) << endl; # arr[1]

    for (int i = 0; i < n; i++)
    {
        cout << *(arr + i) << endl;
    }

    func(arr); // passing array name is eq. to passing to pointer
    cout << arr[0] << endl;

    cout << "Print array function" << endl;

    printArr(arr, n);

    return 0;
}