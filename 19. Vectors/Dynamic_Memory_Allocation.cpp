#include <iostream>
using namespace std;

void funcInt()
{
    int *ptr = new int;
    *ptr = 5;

    cout << *ptr;

    delete ptr;
}

void func()
{
    int size;
    cout << "Enter the size : ";
    cin >> size;

    // *** Dynamic memory allocate
    int *ptr = new int[size];
    // ptr[0] = *(arr + 0);

    int x = 1;
    for (int i = 0; i < size; i++)
    {
        ptr[i] = x;
        cout << ptr[i] << " ";
        x++;
    }
    cout << endl;

    delete[] ptr;
}

int main()
{
    // int arr[100] = {1, 2, 3, 4, 5};

    // func();

    funcInt();

    return 0;
}