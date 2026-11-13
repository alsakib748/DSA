#include <iostream>
#include <string>
using namespace std;

void lowercaseVowels(string str)
{
    int vowelsCount = 0;
    string vowels = "aeiou";
    for (int i = 0; i < str.length(); i++)
    {
        if (str[i] >= 'A' && str[i] <= 'Z')
        {
            continue;
        }

        if (vowels.find(str[i]) != string::npos)
        {
            vowelsCount++;
        }
    }

    cout << "Vowels count : " << vowelsCount << endl;
}

int main()
{
    string str = "Al Sakib Ayon";
    // string str = "al sakib ayon";
    lowercaseVowels(str);
    return 0;
}