#include <iostream>
using namespace std;

int hammingWeight(int n)
{
    int ans = 0;
    while (n > 0)
    {
        if (n & 1)
        {
            ans++;
        }
        n = n >> 1;
    }
    cout << "Total Set Bit : " << ans << endl;
    return ans;
}

int main()
{
    int n = 11;
    hammingWeight(n);
    hammingWeight(128);
    hammingWeight(2147483645);
    return 0;
}