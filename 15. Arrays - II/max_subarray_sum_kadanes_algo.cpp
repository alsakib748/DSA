#include <iostream>
using namespace std;

void maxSubarraySumKadanesAlgo(int *arr, int n)
{

    int maxSum = INT32_MIN;
    int currSum = 0;
    for (int start = 0; start < n; start++)
    {
        currSum += arr[start];
        maxSum = max(currSum, maxSum);
        if (currSum < 0)
        {
            currSum = 0;
        }
        // cout << endl;
    }

    cout << "Maximum subarray sum = " << maxSum << endl;
}

int main()
{

    int arr[6] = {2, -3, 6, -5, 4, 2};
    // int arr[4] = {-1, -2, -3, -4};
    int n = sizeof(arr) / sizeof(int);

    maxSubarraySumKadanesAlgo(arr, n);

    return 0;
}