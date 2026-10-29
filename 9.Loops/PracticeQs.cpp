#include <iostream>
using namespace std;

int main()
{

    int number;
    cout << "Enter the number : ";
    cin >> number;

    int sum = 0;

    while (number > 0)
    {

        int last_digit = number % 10;
        cout << "Last Digit Take : " << last_digit << endl;
        if (last_digit % 2 != 0)
        {
            sum += last_digit;
        }
        number = number / 10;
        cout << "Last Digit Remove : " << number << endl;
    }

    cout << "Enter the result : " << sum << endl;

    return 0;
}