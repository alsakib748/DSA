#include <iostream>
using namespace std;

void oddOrEven(int num)
{
    if (!(num & 1)) // return true
    {
        cout << "Even\n";
    }
    else
    {
        cout << "Odd\n";
    }
}

int main()
{
    oddOrEven(5);
    oddOrEven(8);
    return 0;
}