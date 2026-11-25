#include <iostream>
using namespace std;

void print(int n)
{
    if (n == 0)
    {
        return;
    }
    cout << n << endl; // work
    print(n - 1);      // faith, next call
    // cout << n << endl; // work
}

int main()
{
    print(10);
    return 0;
}