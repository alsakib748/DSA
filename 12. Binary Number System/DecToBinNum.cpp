#include <iostream>
using namespace std;

void DecToBin(int dec)
{
    int n = dec;
    int binNum = 0;
    int pow = 1;

    while (n > 0)
    {
        int rem = n % 2;
        binNum += rem * pow;
        n = n / 2;
        pow = pow * 10;
    }

    cout << "Binary of " << dec << " Number is : " << binNum << endl;
}

int main()
{
    int n = 7;
    DecToBin(n);
}