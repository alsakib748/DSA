#include <iostream>
using namespace std;

void trap(int *heights, int n)
{
    // cout << "N: " << n << endl;
    // int leftMAX[n]; // todo; not work in c++
    int leftMAX[20000], rightMAX[20000];
    // leftMAX[0] = INT32_MIN;
    leftMAX[0] = heights[0];
    rightMAX[n - 1] = heights[n - 1];
    cout << "0 : " << leftMAX[0] << ", " << endl;

    for (int i = 1; i < n; i++)
    {
        leftMAX[i] = max(leftMAX[i - 1], heights[i - 1]);
        cout << i << " : " << leftMAX[i] << ", " << endl;
    }

    /** todo; Debug left Max
     *  set 0 index;  leftMax[0] = heights[0]; leftMax[0] = 4; leftMax = 4
     *  i = 1; leftMax[1] :: max(leftMax[0], heights[0]) = max(4, 4) ; leftMax = 4
     *  i = 2; leftMax[2] :: max(leftMax[1], heights[1]) = max(4, 2) ; leftMax = 4
     *  i = 3; leftMax[3] :: max(leftMax[2], heights[2]) = max(4, 0) ; leftMax = 4
     *  i = 4; leftMax[4] :: max(leftMax[3], heights[3]) = max(4, 6) ; leftMax = 6
     *  i = 5; leftMax[5] :: max(leftMax[4], heights[4]) = max(6, 3) ; leftMax = 6
     *  i = 6; leftMax[6] :: max(leftMax[5], heights[5]) = max(6, 2) ; leftMax = 6
     */

    cout << endl;

    cout << "6 : " << rightMAX[n - 1] << ", " << endl;
    for (int i = n - 2; i >= 0; i--)
    {
        rightMAX[i] = max(rightMAX[i + 1], heights[i + 1]);
        cout << i << " : " << rightMAX[i] << ", " << endl;
    }

    /** todo; Debug Right Max
     *  set 6 index;  rightMAX[6] = heights[6]; rightMAX[6] = 5; rightMAX = 5
     *  i = 5; rightMAX[5] :: max(rightMAX[6], heights[6]) = max(5, 5) ; rightMAX = 5
     *  i = 4; rightMAX[4] :: max(rightMAX[5], heights[5]) = max(5, 2) ; rightMAX = 5
     *  i = 3; rightMAX[3] :: max(rightMAX[4], heights[4]) = max(5, 3) ; rightMAX = 5
     *  i = 2; rightMAX[2] :: max(rightMAX[3], heights[3]) = max(5, 6) ; rightMAX = 6
     *  i = 1; rightMAX[1] :: max(rightMAX[2], heights[2]) = max(6, 0) ; rightMAX = 6
     *  i = 0; rightMAX[0] :: max(rightMAX[1], heights[1]) = max(6, 2) ; rightMAX = 6
     */

    cout << endl;

    int waterTrapped = 0;
    for (int i = 0; i < n; i++)
    {
        int currWater = min(leftMAX[i], rightMAX[i]) - heights[i];
        if (currWater > 0)
        {
            cout << i << ":" << waterTrapped << "=" << waterTrapped << "+" << currWater << "=";
            waterTrapped += currWater;
            cout << waterTrapped << endl;
        }
        // cout << endl
        //      << i << endl;
    }

    /** todo;  Debug Water Trap Loop
     *  i = 0; waterTrapped =  0:: currWater = min(leftMAX[0], rightMAX[0]) - heights[0] = min(4,6) - 4 ; currWater = 0 ; waterTrapped = 0 + 0 = 0
     *  i = 1; waterTrapped =  0:: currWater = min(leftMAX[1], rightMAX[1]) - heights[1] = min(4,6) - 2 ; currWater = 2 ; waterTrapped = 0 + 2 = 2
     *  i = 2; waterTrapped =  2:: currWater = min(leftMAX[2], rightMAX[2]) - heights[2] = min(4,6) - 0 ; currWater = 4 ; waterTrapped = 2 + 4 = 6
     *  i = 3; waterTrapped =  6:: currWater = min(leftMAX[3], rightMAX[3]) - heights[3] = min(4,5) - 6 ; currWater = -2/0 ; waterTrapped = 6  = 6 ! if not work
     *  i = 4; waterTrapped =  6:: currWater = min(leftMAX[4], rightMAX[4]) - heights[4] = min(6,5) - 3 ; currWater = 2 ; waterTrapped = 6 + 2 = 8
     *  i = 5; waterTrapped =  8:: currWater = min(leftMAX[5], rightMAX[5]) - heights[5] = min(6,5) - 2 ; currWater = 3 ; waterTrapped = 8 + 3 = 11
     *  i = 6; waterTrapped =  11:: currWater = min(leftMAX[6], rightMAX[6]) - heights[6] = min(6,5) - 5 ; currWater = 0 ; waterTrapped = 11 = 11 ! if not work
     */

    cout << endl
         << "Water Trapped : " << waterTrapped;

    cout << endl;
}

int main()
{
    int heights[7] = {4, 2, 0, 6, 3, 2, 5};
    // int heights[5] = {5, 4, 3, 2, 1};
    int n = sizeof(heights) / sizeof(int);

    trap(heights, n);

    return 0;
}