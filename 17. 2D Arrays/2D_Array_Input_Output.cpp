#include <iostream>
using namespace std;

int main()
{

    int n, m;
    cout << "Enter the number of student : ";
    cin >> n;
    cout << "Enter the number of subject : ";
    cin >> m;

    // int student[3][3] = {
    //     {100, 100, 100},
    //     {85, 74, 84},
    //     {63, 72, 65}};

    int student[n][m];

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cout << "Enter the " << i + 1 << " Student " << " and " << j + 1 << " Subject Mark: ";
            cin >> student[i][j];
        }
        cout << endl;
    }

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << student[i][j] << ", ";
        }
        cout << endl;
    }

    return 0;
}