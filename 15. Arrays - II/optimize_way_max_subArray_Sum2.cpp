#include <iostream>
using namespace std;

void maxSubarraySumOptimize(int *arr, int n)
{

    // int maxSum = INT_MIN;
    int maxSum = INT32_MIN;

    // start = 2
    for (int start = 0; start < n; start++)
    {
        int currSum = 0;
        // end = 2,3,4,5
        for (int end = start; end < n; end++)
        {
            currSum += arr[end];
            cout << arr[end] << ",";
            maxSum = max(maxSum, currSum);
        }
        cout << endl;
    }

    cout << "Maximum subarray sum = " << maxSum << endl;
}

int main()
{

    int arr[6] = {2, -3, 6, -5, 4, 2};
    // int arr[6] = {2, 3, -6, 5, -4, 2};
    int n = sizeof(arr) / sizeof(int);

    maxSubarraySumOptimize(arr, n);

    return 0;
}