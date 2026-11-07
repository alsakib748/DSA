#include <iostream>
#include <cstring>
using namespace std;

int main()
{

    // char word[30];
    // cin >> word; // ignore whitespace and after char of whitespace
    // cout << "Your word was : " << word << endl;
    // cout << "Your word length is : " << strlen(word) << endl;

    char sentence[50];
    cin.getline(sentence, 50, '*'); // third argument: delimiter
    cout << "Your word was : " << sentence << endl;
    cout << "Your word of 0 index is : " << sentence[0] << endl;
    cout << "Your word length is : " << strlen(sentence) << endl;

    return 0;
}