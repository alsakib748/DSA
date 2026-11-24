#include <iostream>
#include <string>
using namespace std;

class Example
{
public:
    Example()
    {
        cout << "constructor...\n";
    }

    ~Example()
    {
        cout << "destructor...\n";
    }
};

int main()
{
    int a = 0;
    if (a == 0)
    {
        // Example eg1;
        static Example eg1; // stay before end of code
    }

    cout << "code ending...\n";

    return 0;
}