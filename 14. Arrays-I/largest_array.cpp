#include <iostream>
using namespace std;

int main()
{

    int arr[10] = {5, 7, 8, 9, 6, 3, 2, 4, 1, 0};
    int max = 0;
    int index = 0;

    for (int i = 0; i < sizeof(arr) / sizeof(int); i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
            index = i;
        }
    }

    cout << "The max number is : " << max << " and index is " << index << endl;

    return 0;
}