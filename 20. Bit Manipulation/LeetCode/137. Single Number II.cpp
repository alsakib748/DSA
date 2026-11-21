#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int singleNumber(vector<int> nums)
{
    sort(nums.begin(), nums.end());
    for (int i = 0; i < nums.size(); i += 3)
    {
        if (i + 2 >= nums.size() || nums[i] != nums[i + 2])
        {
            return nums[i];
        }
    }
    return -1;
}

int secondWaySingleNumber(vector<int> &nums)
{
    int ones = 0;
    int twos = 0;

    for (int num : nums)
    {
        ones = (ones ^ num) & ~twos;
        twos = (twos ^ num) & ~ones;
    }

    return ones;
}

int main()
{
    vector<int> nums = {2, 2, 3, 2};
    vector<int> nums2 = {0, 1, 0, 1, 0, 1, 99};

    // cout << singleNumber(nums) << endl;
    cout << secondWaySingleNumber(nums) << endl;
    // cout << singleNumber(nums2) << endl;

    return 0;
}