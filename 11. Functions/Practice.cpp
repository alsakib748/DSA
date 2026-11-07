#include <iostream>
using namespace std;

int factorial(int n)
{
    int fact = 1;
    for (int i = 1; i <= n; i++)
    {
        fact *= i;
    }

    return fact;
}

void binomialCoefficient(int n, int r)
{
    int factN = factorial(n);
    int factR = factorial(r);
    int factNR = factorial(n - r);

    int result = (factN / (factR * factNR));

    cout << "Binomial coefficient is : " << result << endl;
}

int main()
{

    binomialCoefficient(3, 2);

    return 0;
}