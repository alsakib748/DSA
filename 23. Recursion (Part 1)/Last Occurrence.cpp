#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int lastOccur(vector<int> arr, int i, int target)
{
    if (i == 0)
    {
        return -1;
    }

    if (arr[i] == target)
    {
        return i;
    }

    return lastOccur(arr, i - 1, target);
}

int lastOccur2(vector<int> arr, int i, int target)
{
    if (i == arr.size())
    {
        return -1;
    }

    int idxFound = lastOccur2(arr, i + 1, target);

    // cout << "idx : " << idxFound << endl;

    if (idxFound == -1 && arr[i] == target)
    {
        return i;
    }

    return idxFound;
}

int main()
{
    // vector<int> arr = {1, 2, 3, 3, 3, 4, 5};
    vector<int> arr = {1, 2, 3, 3, 4, 3, 5};
    int i = arr.size();
    int target = 3;
    cout << lastOccur(arr, i, target) << endl;
    cout << lastOccur2(arr, 0, target) << endl;
    // cout << lastOccur(arr, i, 2) << endl;
    // cout << lastOccur(arr, i, 30) << endl;
    return 0;
}