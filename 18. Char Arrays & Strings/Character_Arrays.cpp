#include <iostream>
#include <cstring>
using namespace std;

int main()
{

    // char arr[5] = {'a', 'b', 'c', 'd', 'e'};
    char arr[5] = {'c', 'o', 'd', 'e', '\0'};

    cout << arr << endl;
    // cout << arr[0] << endl;
    // cout << arr[1] << endl;
    // cout << arr[2] << endl;
    // cout << arr[3] << endl;
    // cout << arr[4] << endl;

    // todo; "alsakib" ; string literals
    // todo; "helloworld" ; string literals
    // todo; "a" ; string literals

    char work[] = "code";
    char work2[5] = "code";
    char work3[5] = {'c', 'o', 'd', 'e', '\0'};

    char work4[50] = {'c', 'o', 'd', 'e', '\0'};

    char work5[50] = {'h', 'e', 'l', 'l', 'o', '\0'};

    cout << work << endl;

    cout << work2 << endl;

    cout << work3 << endl;

    cout << strlen(work4) << endl;

    cout << strlen(work5) << endl;

    return 0;
}