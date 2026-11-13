#include <iostream>
#include <string>
#include <cstring>
using namespace std;

bool anagram(string str1, string str2)
{
    int count[26] = {0};
    // counting
    for (int i = 0; i < str1.length(); i++)
    {
        int idx = str1[i] - 'a';
        count[idx]++;
    }

    // check anagram
    if (str1.length() != str2.length())
    {
        cout << "Not anagram" << endl;
        return false;
    }

    for (int i = 0; i < str2.length(); i++)
    {
        int idx = str2[i] - 'a';
        if (count[idx] == 0)
        {
            cout << "Not anagram" << endl;
            return false;
        }
        count[idx]--;
    }

    cout << "Anagram" << endl;
    return true;
}

int main()
{

    // string str1 = "anagram";
    // string str2 = "nagaram";
    string str1 = "mam";
    string str2 = "ama";
    anagram(str1, str2);
    return 0;
}