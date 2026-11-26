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
    int halfPow = pow(x, n / 2);
    int halfPowSquare = halfPow * halfPow;

    if (n % 2 != 0)
    {
        // odd
        return x * halfPowSquare;
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