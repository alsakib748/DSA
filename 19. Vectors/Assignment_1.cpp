#include <iostream>
#include <vector>
using namespace std;

vector<int> findErrorNums(vector<int> nums)
{
    vector<int> ans;
    for (int i = 0; i < nums.size() - 1; i++)
    {

        if (nums[i] == nums[i + 1])
        {
            ans.push_back(nums[i]);
            ans.push_back(i + 2);
            // cout << nums[i] << "=" << nums[i + 1] << endl;
            return ans;
        }
    }
    return ans;
}

int main()
{

    vector<int> nums = {1, 2, 2, 4};
    // vector<int> nums = {1, 1};

    vector<int> ans = findErrorNums(nums);

    cout << ans[0] << " " << ans[1] << endl;

    return 0;
}