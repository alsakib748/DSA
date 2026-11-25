#include <iostream>
using namespace std;

// todo; factorial recursion function
int factorial(int n)
{
    if (n == 0)
    {
        return 1;
    }
    // cout << n * factorial(n - 1) << endl;
    return n * factorial(n - 1);
}

int main()
{
    int result = factorial(5);
    cout << result << endl;
    return 0;
}