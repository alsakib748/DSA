#include <iostream>
#include <cstring>
using namespace std;

int main()
{

    char str1[100];
    char str2[100] = "Hello C++";
    char str3[100] = "Al Sakib";
    char str4[100] = " Ayon";
    char str5[100] = "abcf";
    char str6[100] = "abcd";

    // str1 = "apna college";

    strcpy(str1, str2);

    strcat(str3, str4);

    cout << str1 << endl;

    cout << str3 << endl;

    cout << strcmp(str5, str6) << endl;

    return 0;
}