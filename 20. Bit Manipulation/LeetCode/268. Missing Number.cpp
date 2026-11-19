#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int missingNumber(vector<int> nums)
{
    sort(nums.begin(), nums.end());
    int start = 0;
    for (int i = 0; i < nums.size(); i++)
    {
        if (start != nums[i])
        {
            return start;
        }
        start++;
    }
    return start;
}

int main()
{

    vector<int> nums = {9, 6, 4, 2, 3, 5, 7, 0, 1};
    vector<int> nums2 = {3, 0, 1};
    vector<int> nums3 = {0, 1};

    cout << missingNumber(nums) << endl;
    cout << missingNumber(nums2) << endl;
    cout << missingNumber(nums3) << endl;

    return 0;
}