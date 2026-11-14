#include <iostream>
#include <vector>
using namespace std;

// todo; worst way; brute force; TC = O(n^2)
vector<int> BruteForcePairSum(vector<int> arr, int target)
{
    vector<int> ans;
    int currSum = 0;
    for (int i = 0; i < arr.size(); i++)
    {
        for (int j = i + 1; j < arr.size(); j++)
        {
            currSum = arr[i] + arr[j];

            // cout << i << ":" << arr[i] << endl;
            // cout << j << ":" << arr[j] << endl;

            if (currSum == target)
            {
                ans.push_back(i + 1);
                ans.push_back(j + 1);
                return ans;
            }
        }
    }

    return ans;
}

// todo; Best way; 2 Pointer Approach; TC = O(n);
vector<int> pairSum(vector<int> arr, int target)
{
    int st = 0, end = arr.size() - 1;
    int currSum = 0;
    vector<int> ans;
    while (st < end)
    {
        currSum = arr[st] + arr[end];
        if (currSum == target)
        {
            ans.push_back(st + 1);
            ans.push_back(end + 1);
            return ans;
        }
        else if (currSum > target)
        {
            end--;
        }
        else
        {
            st++;
        }
    }

    return ans;
}

int main()
{
    // vector<int> vec = {2, 7, 11, 13};
    vector<int> vec = {2, 3, 4};
    // int target = 9;
    int target = 6;
    vector<int> ans = pairSum(vec, target);
    vector<int> ans2 = BruteForcePairSum(vec, target);
    cout << ans[0] << "," << ans[1] << endl
         << endl;
    cout << ans2[0] << "," << ans2[1] << endl;
    return 0;
}