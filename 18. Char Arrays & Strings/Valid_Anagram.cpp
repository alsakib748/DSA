#include <iostream>
#include <string>
using namespace std;

bool isAnagram(string str1, string str2)
{
    // todo; If length not equal, then it's not anagrams
    if (str1.length() != str2.length())
    {
        cout << "Not valid anagrams\n";
        return false;
    }

    int count[26] = {0};
    for (int i = 0; i < str1.length(); i++)
    {
        int idx = str1[i] - 'a';
        count[idx]++;
    }

    for (int i = 0; i < str2.length(); i++)
    {
        int idx = str2[i] - 'a';
        if (count[idx] == 0)
        {
            cout << "Not valid anagrams\n";
            return false;
        }
        count[idx]--;
    }

    cout << "Valid Anagram\n";
    return true;
}

int main()
{
    string str1 = "anagram";
    string str2 = "nagaram";
    // string str1 = "cat";
    // string str2 = "dog";

    isAnagram(str1, str2);

    return 0;
}