#include <iostream>
using namespace std;

int main()
{
    int a = 10;
    int *ptr = &a;

    float pi = 3.1416;
    float *ptr2 = &pi;

    int **pptr = &ptr;

    int *nullPtr = NULL;

    cout << nullPtr << endl;

    cout << &a << endl;
    cout << *(&a) << endl;
    cout << &pi << " = " << *ptr2 << endl;
    cout << &a << " = " << *ptr << "\n";
    cout << &ptr << " = " << **pptr << "\n";
    return 0;
}