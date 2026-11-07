#include <iostream>
using namespace std;

int main()
{
    int n1, n2;
    cout << "Enter the row number : ";
    cin >> n1;
    cout << "Enter the column number : ";
    cin >> n2;

    cout << "\n\n";

    for (int i = 0; i < n1; i++)
    {
        for (int j = 0; j < n2; j++)
        {
            cout << " * ";
        }
        cout << "\n";
    }

    cout << "\n";

    return 0;
}