#include <iostream>
#include <vector>
using namespace std;

int singleNumber(vector<int> nums)
{
    int unique = 0;
    for (int num : nums)
    {
        // cout << "Curr Unique : " << unique << endl;
        unique = unique ^ num;
    }

    cout << "Unique element is : " << unique << endl;
    return unique;
}

int main()
{
    vector<int> nums = {4, 1, 2, 1, 2};
    singleNumber(nums);
    return 0;
}