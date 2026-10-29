#include <iostream>
using namespace std;

void maxProfit(int *prices, int n)
{
    // int bestBuy[n];
    int bestBuy[100000];
    bestBuy[0] = INT32_MAX;
    cout << bestBuy[0] << ", ";
    for (int i = 1; i < n; i++)
    {
        bestBuy[i] = min(bestBuy[i - 1], prices[i - 1]);
        cout << bestBuy[i] << ", ";
    }

    /** todo; Best Buy
     * i = 0 ; max_value = 2147483647
     * i = 1 ; min(max_value/infinity, 7) = 7
     * i = 2 ; min(7, 1) = 1
     * i = 3 ; min(1, 5) = 1
     * i = 4 ; min(1, 3) = 1
     * i = 5 ; min(1, 6) = 1
     */

    cout << endl;

    int maxProfit = 0;

    for (int i = 0; i < n; i++)
    {
        int currProfit = prices[i] - bestBuy[i];
        maxProfit = max(maxProfit, currProfit);
    }

    /** todo; Profit
     * i = 0 ; currProfit = -214748640 ; maxProfit = 0
     * i = 1 ; currProfit = -6 ; maxProfit = 0
     * i = 2 ; currProfit = 4 ; maxProfit = 4
     * i = 3 ; currProfit = 2 ; maxProfit = 4
     * i = 4 ; currProfit = 5 ; maxProfit = 5
     * i = 5 ; currProfit = 3 ; maxProfit = 5
     */

    // todo; TC O(n+n) = O(2n) = O(n)
    cout << "Max profit : " << maxProfit << endl;
}

int main()
{

    int prices[6] = {7, 1, 5, 3, 6, 4};
    // int prices[6] = {7, 6, 5, 4, 3, 2};
    int n = sizeof(prices) / sizeof(int);

    maxProfit(prices, n);

    return 0;
}