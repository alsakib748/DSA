#include <iostream>
#include <cstring>
using namespace std;

void reverseArray(char chr[], int n)
{
    int start = 0;
    int end = n - 1;
    while (start < end)
    {
        swap(chr[start++], chr[end--]);
        // or
        // start++;
        // end--;
    }
}

int main()
{

    char chr[] = "code";
    int n = strlen(chr);
    // int n = sizeof(chr) / sizeof(char);

    // cout << n << endl;

    reverseArray(chr, n);

    cout << chr;

    return 0;
}