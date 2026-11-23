// todo; Compile time Overloading
#include <iostream>
#include <string>
using namespace std;

class Print
{
public:
    void show(int x)
    {
        cout << "Int : " << x << endl;
    }

    void show(string str)
    {
        cout << "string: " << str << endl;
    }
};

int main()
{
    Print obj1;
    obj1.show(25);
    obj1.show("Al Sakib");
    return 0;
}