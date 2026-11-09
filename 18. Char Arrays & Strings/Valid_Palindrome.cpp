#include <iostream>
#include <cstring>
using namespace std;

bool validPalindrome(char chr[], int n)
{
    int start = 0;
    int end = n - 1;
    while (start <= end)
    {
        if (chr[start] != chr[end])
        {
            cout << "Not valid palindrome\n";
            return false;
        }
        start++;
        end--;
    }

    return true;
}

int main()
{

    char chr[] = "code";
    // char chr[] = "racecar";
    int n = strlen(chr);

    bool result = validPalindrome(chr, n);

    cout << chr << endl;
    cout << result;

    return 0;
}