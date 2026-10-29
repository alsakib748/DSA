#include <iostream>
using namespace std;

int main()
{

    // todo; Pattern One
    for (int i = 1; i <= 5; i++)
    {
        for (int j = 1; j <= 5; j++)
        {
            cout << i << " ";
        }
        cout << endl;
    }

    cout << endl
         << endl;

    // todo; Pattern Two
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < (i + 1); j++)
        {
            cout << "*" << " ";
        }
        cout << endl;
    }

    cout << endl
         << endl;

    // todo; Pattern Three
    for (int i = 0; i < 5; i++)
    {
        for (int j = (5 - i); j > 0; j--)
        {
            cout << "*" << " ";
        }
        cout << endl;
    }

    cout << endl
         << endl;

    // todo; Pattern Four
    for (int i = 1; i <= 5; i++)
    {
        for (int j = 1; j < (i + 1); j++)
        {
            cout << j << " ";
        }
        cout << endl;
    }

    cout << endl
         << endl;

    // todo; Pattern Five
    char ch = 'A';
    for (int i = 0; i <= 5; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            cout << ch << " ";
            ch++;
        }
        cout << endl;
    }

    cout << endl
         << endl;

    // todo; Pattern Six
    int limit = 5;
    for (int i = 1; i <= limit; i++)
    {
        cout << "*";
        for (int j = 1; j <= limit - 1; j++)
        {
            if (i == 1 || i == limit)
            {
                cout << "*";
            }
            else
            {
                cout << " ";
            }
        }
        cout << "*" << endl;
    }

    cout << endl
         << endl;

    // todo; Pattern Two
    int l = 5;
    for (int i = 0; i < l; i++)
    {
        for (int j = 0; j < l - i; j++)
        {
            cout << " ";
        }
        for (int k = 0; k < i + 1; k++)
        {
            cout << "*";
        }
        cout << endl;
    }

    cout << endl
         << endl;

    // todo; Pattern Five
    int number = 1;
    for (int i = 0; i <= 5; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            cout << number << " ";
            number++;
        }
        cout << endl;
    }

    cout << endl
         << endl;

    // todo; Pattern Two
    int ll = 5;
    // todo; 1st Pyramid
    for (int i = 0; i < ll; i++)
    {
        for (int j = 0; j < ll - i; j++)
        {
            cout << " ";
        }
        for (int k = 0; k < (2 * i - 1); k++)
        {
            cout << "*" << "";
        }
        cout << endl;
    }
    // todo; 2st Pyramid
    for (int m = ll; m >= 1; m--)
    {
        for (int n = 1; n <= ll - m; n++)
        {
            cout << " ";
        }
        for (int o = 1; o <= 2 * m - 1; o++)
        {
            cout << "*";
        }
        cout << endl;
    }

    cout << endl
         << endl;

    // todo; butterfly pattern
    int b = 6;
    for (int i = 1; i <= b; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << "*";
        }
        for (int k = 2 * (b - i); k > 0; k--)
        {
            cout << " ";
        }
        for (int l = 1; l <= i; l++)
        {
            cout << "*";
        }
        cout << endl;
    }

    for (int m = b; m > 0; m--)
    {
        for (int n = m; n > 0; n--)
        {
            cout << "*";
        }
        for (int o = 0; o < 2 * (b - m); o++)
        {
            cout << " ";
        }
        for (int p = m; p > 0; p--)
        {
            cout << "*";
        }
        cout << endl;
    }
}