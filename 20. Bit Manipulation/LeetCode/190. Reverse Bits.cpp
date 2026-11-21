#include <iostream>
using namespace std;

int reverseBits(int n)
{
    int reverseBits = 0;

    int size = 32;
    int position = size - 1;

    while (position >= 0)
    {
        int bit = n & 1;
        // reverseBits = reverseBits | (bit << position);
        // OR
        reverseBits += (bit << position);
        n = n >> 1;
        position -= 1;
    }

    return reverseBits;
}

int main()
{
    int n = 43261596;
    cout << reverseBits(n) << endl;
    cout << reverseBits(2147483644) << endl;
    return 0;
}