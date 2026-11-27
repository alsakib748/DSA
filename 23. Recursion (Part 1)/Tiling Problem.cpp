#include <iostream>
#include <string>
using namespace std;

int tilingProblem(int n) // 2 x n
{

    if (n == 0 || n == 1)
    {
        return 1;
    }

    // // todo; vertical
    // int ans1 = tilingProblem(n - 1); // 2 x n-1

    // // todo;  horizontal
    // int ans2 = tilingProblem(n - 2); // 2 x n-2

    // return ans1 + ans2;

    return tilingProblem(n - 1) + tilingProblem(n - 2);
}

int main()
{
    // int n = 2;
    int n = 3;
    // int n = 4;
    // int n = 5;
    cout << tilingProblem(n) << endl;
    return 0;
}