#include <iostream>
using namespace std;

int sumNNaturalNum(int n)
{
    if (n == 1)
    {
        return 1;
    }
    return n + sumNNaturalNum(n - 1);
}

int main()
{
    cout << sumNNaturalNum(5) << endl;
    cout << sumNNaturalNum(6) << endl;
    return 0;
}