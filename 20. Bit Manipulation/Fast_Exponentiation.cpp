#include <iostream>
using namespace std;

void fastExpo(int x, int n)
{
    int ans = 1;

    while (n > 0)
    {
        int lastBit = n & 1;
        if (lastBit)
        {
            ans = ans * x;
        }

        x = x * x;  // x ^ 2
        n = n >> 1; // right shift 1.

        // todo; 1 : 3 ^ 1 ; x = 3; ans = 3 * 1; ans = 3;
        // todo; 0 : 3 ^ 2 ; x = 9; ans = 3;
        // todo; 1 : 3 ^ 2 = 3 ^ 1 * 3 ^ 2 * 3 ^ 2 ; x = 81; ans = 3 * 81; ans =  243;
    }

    cout << ans << endl;
}

int main()
{
    fastExpo(3, 5);
    fastExpo(3, 4);
    return 0;
}