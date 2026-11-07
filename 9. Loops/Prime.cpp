#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int number;
    cout << "Enter the number : ";
    cin >> number;
    bool prime = true;

    // for (int i = 2; i < (number - 1); i++)
    // {
    //     if (number % i == 0)
    //     {
    //         prime = false;
    //         break;
    //     }
    // }

    // todo; Optimize way
    for (int i = 2; i <= sqrt(number); i++)
    {
        if (number % i == 0)
        {
            prime = false;
            break;
        }
    }

    if (prime == true)
    {
        cout << "Prime Number" << endl;
    }
    else
    {
        cout << "Not Prime Number" << endl;
    }
}