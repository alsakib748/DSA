// todo; Not Correct Answer
#include <iostream>
#include <string>
#include <cstring>
using namespace std;

bool swapString(string s1, string s2)
{
    if (s1.length() != s2.length())
    {
        return false;
    }

    int n = s2.length();

    for (int i = 0; i < 1; i++)
    {
        swap(s2[i], s2[n - i - 1]);
        // s2[i].swap(s2[n - i - 1]);
    }

    for (int i = 0; i < s1.length(); i++)
    {
        if (s1[i] != s2[i])
        {
            return false;
        }
    }

    return true;
}

int main()
{
    string s1 = "bank";
    string s2 = "kanb";

    bool result = swapString(s1, s2);

    cout << result << endl;

    return 0;
}