#include <iostream>
#include <algorithm>
using namespace std;

// bool checkElement(int *arr, int n)
// {
//     for (int i = 0; i < n; i++)
//     {
//         for (int j = i + 1; j < n; j++)
//         {
//             if (arr[i] == arr[j])
//             {
//                 return true;
//             }
//         }
//     }

//     return false;
// }

//  TC = O(n^2)

bool checkElement(int *arr, int n)
{
    sort(arr, arr + n);
    for (int i = 0; i < n - 1; i++)
    {
        if (arr[i] == arr[i + 1])
        {
            return true;
        }
    }
    return false;
}

//  TC : O(nlogn)

int main()
{

    // int arr[4] = {1, 2, 3, 4};
    int arr[5] = {1, 2, 3, 4, 1};
    // int arr[10] = {1, 1, 1, 3, 3, 4, 3, 2, 4, 2};
    int n = sizeof(arr) / sizeof(int);

    int result = checkElement(arr, n);

    cout << "Value appears at least twice : " << result << endl;

    return 0;
}