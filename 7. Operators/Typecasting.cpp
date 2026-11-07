#include <iostream>
using namespace std;

int main()
{
    // todo; Implicit Conversion
    cout << (10 / 3) << endl;   // 3
    cout << (10 / 3.0) << endl; // 3.33
    cout << ('A' + 1) << endl;
    cout << ('A' - 1) << endl;
    cout << ('a' - 1) << endl;

    // todo; Explicit Conversion
    cout << (int)('A') << endl;
    float PI = 3.1416;
    cout << (int)(PI) << endl;
    cout << ((float)10 / 3) << endl;
    cout << ((char)('A' + 2)) << endl;

    // todo; Boolean
    cout << (bool)3 + 2 << endl;
    cout << (bool)0 + 2 << endl;

    cout << (23.5 + 2 + 'A') << endl;

    return 0;
}