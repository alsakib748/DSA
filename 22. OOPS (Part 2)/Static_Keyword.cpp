#include <iostream>
#include <string>
using namespace std;

class Example
{
public:
    // static int x = 0;
    // static const int x = 0;
    static int x;
};

int Example::x = 0;

// void counter()
// {
//     // int count = 0;
//     static int count = 0;
//     count++;
//     cout << "count : " << count << endl;
// }

int main()
{
    // counter();
    // counter();
    // counter();
    // counter();

    Example eg1;
    Example eg2;
    Example eg3;

    cout << eg1.x++ << endl; // 0
    cout << eg2.x++ << endl; // 1
    cout << eg3.x++ << endl; // 2

    return 0;
}