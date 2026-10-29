#include <iostream>
using namespace std;

void binToDec(int binNum)
{
    int n = binNum;
    int decNum = 0;
    int pow = 1;
    while (n > 0)
    {
        int last_digit = n % 10;
        decNum += last_digit * pow;
        pow = pow * 2;
        n = n / 10;
    }

    cout << decNum << endl;
}

int main()
{
    int n = 1010;
    // cout << "Enter the number : ";
    // cin >> n;
    binToDec(n);
    return 0;
}