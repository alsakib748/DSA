#include <iostream>
#include <vector>
using namespace std;

int firstOccur(vector<int> arr, int i, int target)
{
    if (i == arr.size())
    {
        return -1;
    }

    if (arr[i] == target)
    {
        return i;
    }

    return firstOccur(arr, i + 1, target);
}

int main()
{
    vector<int> arr = {1, 2, 3, 3, 3, 4, 5};
    int i = 0;
    int target = 3;
    cout << firstOccur(arr, i, target) << endl;
    cout << firstOccur(arr, i, 2) << endl;
    cout << firstOccur(arr, i, 30) << endl;
    return 0;
}