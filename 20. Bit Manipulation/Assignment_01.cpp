#include <iostream>
using namespace std;

int clearRangeOfBit(int num, int i, int j)
{
    int bitmask;
    while (i <= j)
    {
        bitmask = ~(1 << i);
        cout << bitmask << endl;
        num = (num & bitmask);
        cout << "num : " << num << endl;
        i++;
    }

    // bitmask = bitmask;

    // cout << "Bitmask : " << bitmask << endl;

    cout << "Final Output : " << num << endl
         << endl;

    return num;
}

// todo; Optimize Way
void clearBitsInRange(int num, int i, int j)
{
    int a = (~0) << (j + 1);
    int b = (1 << i) - 1;
    int mask = a | b;
    num = num & mask;
    cout << num << endl;
}

int main()
{

    clearRangeOfBit(15, 1, 3);
    clearRangeOfBit(31, 1, 3);

    return 0;
}