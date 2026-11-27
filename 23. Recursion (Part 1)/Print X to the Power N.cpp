#include <iostream>
using namespace std;

int printXtoN(int x, int n, int i)
{
    if (i == n)
    {
        return x;
    }

    return x * printXtoN(x, n, i + 1);
}

// another way | TC = O(log n)
int pow(int x, int n)
{
    if (n == 0)
    {
        return 1;
    }
    int halfPow = pow(x, n / 2); // n / 2

    // todo;Down/Recursive Call | Up/Return value                          | Even = square and Odd = x * square
    // pow(2, 10) ; n = 10 |    | 32 * 32 = 1024; Even;  return 1024
    // pow(2, 5)  ; n = 5  |    | 4 * 4 = 16;     odd:   2 * 16 = 32; return 32
    // pow(2, 2)  ; n = 2  |    | 2 * 2 = 4;      Even;  return 4;
    // pow(2, 1)  ; n = 1; |    | 1 * 1 = 1;      odd:   2 * 1 = 2; return 2;
    // pow(2, 0)  ; n = 0; |    | return 1; Up

    int halfPowSquare = halfPow * halfPow; // n/2 * n/2

    if (n % 2 != 0)
    {
        // odd
        return x * halfPowSquare; // x * n/2 * n/2
    }
    //  even
    return halfPowSquare;
}

int main()
{
    // cout << printXtoN(2, 10, 1) << endl;
    cout << pow(2, 10) << endl;
    return 0;
}