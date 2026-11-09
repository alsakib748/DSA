#include <iostream>
#include <string>
using namespace std;

int main()
{
    string str = "I love coding in c++ & c++. I don't like c++";

    cout << str.length() << endl;
    cout << str.at(3) << endl;
    cout << str.substr(0, 3) << endl;
    cout << str.find("c++", 25) << endl;

    return 0;
}