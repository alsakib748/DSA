#include <iostream>
#include <vector>
using namespace std;

// vector<int> countBits(int n)
// {
//     int i = n;
//     int num = n;
//     int count = 0;
//     vector<int> arr = {0};
//     while (i >= 0 && num >= 0)
//     {
//         cout << num << endl;
//         if (num & 1)
//         {
//             count++;
//         }
//         arr.push_back(count);

//         num = num >> 1;
//         i--;
//     }

//     // cout << count << endl;

//     // for (int a : arr)
//     // {
//     //     cout << a << ", ";
//     // }

//     return arr;
// }

vector<int> countBits(int n)
{
    vector<int> arr = {};
    for (int i = 0; i <= n; i++)
    {
        int num = i;
        int count = 0;
        while (num > 0)
        {
            if (num & 1)
            {
                count++;
            }

            num = num >> 1;
        }

        arr.push_back(count);
    }

    // cout << count << endl;

    for (int a : arr)
    {
        cout << a << ", ";
    }

    return arr;
}

int main()
{
    int n = 5;
    countBits(n);
    return 0;
}