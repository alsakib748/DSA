// todo; Wrong Answer
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector<int> findErrorNums(vector<int> nums)
{
    sort(nums.begin(), nums.end());
    int missing = 0, errorVal = 0;

    // Find Duplicate
    for (int i = 0; i < nums.size() - 1; i++)
    {
        if (nums[i] == nums[i + 1])
        {
            errorVal = nums[i];
            break;
        }
    }

    // Find missing number
    int expected = 1;

    for (int num : nums)
    {
        if (num == expected)
        {
            expected++;
        }
        else if (num > expected)
        {
            missing = expected;
            break;
        }
    }

    if (missing == 0)
    {
        missing = expected;
    }

    return {errorVal, missing};
}

int main()
{
    vector<int> nums = {1, 2, 2, 4};
    vector<int> nums2 = {3, 2, 3, 4, 6, 5};
    vector<int> result = findErrorNums(nums);
    cout << result[0] << endl;
    cout << result[1] << endl;
    return 0;
}