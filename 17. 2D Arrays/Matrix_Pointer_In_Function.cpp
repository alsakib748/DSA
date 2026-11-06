#include <iostream>
using namespace std;

void func(int mat[][4], int n, int m)
{
    // todo; One row point one pointer . that's point has full one row value of all column.
    cout << "0st row ptr " << mat << endl;     // 0 Row Pointer address
    cout << "1st row ptr " << mat + 1 << endl; // 1 Row Pointer address
    cout << "2st row ptr " << mat + 2 << endl; // 2 Row Pointer address

    cout << "0st row value " << *mat << endl;              // 0 Row Pointer address
    cout << "1st row value " << *(mat + 1) << endl;        // 1 Row Pointer address
    cout << "2st row value " << *(*(mat + 2) + 2) << endl; // todo; mat[2][2] == 2nd row = *(mat + 2) and 2nd col = 2 == *(*(mat + 2) + 2); To value print using pointer
}

void func2(int (*mat)[4], int n, int m)
{
}

int main()
{

    int mat[4][4] = {{1, 2, 3, 4},
                     {5, 6, 7, 8},
                     {9, 10, 11, 12},
                     {13, 14, 15, 16}};

    func(mat, 4, 4);

    return 0;
}