#include <iostream>
#include <string>
using namespace std;

int main()
{

    string str = "al sakib";

    // for (int i = 0; i < str.length(); i++) // . = doc operator
    // {
    //     cout << str[i] << " ";
    // }

    // todo; For each loop
    for (char ch : str)
    {
        cout << ch << " ";
    }

    return 0;
}