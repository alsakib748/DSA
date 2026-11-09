#include <iostream>
using namespace std;

// void toLowercase(char ch[], int n)
// {
//     for (int i = 0; i < n; i++)
//     {
//         char cur = ch[i];
//         if (cur >= 'a' && cur <= 'z')
//         {
//             continue;
//         }
//         ch[i] = cur - 'A' + 'a';
//     }
// }

void toLowercase(char ch[], int n)
{
    for (int i = 0; i < n; i++)
    {
        // char cur = ch[i];
        if (ch[i] >= 'a' && ch[i] <= 'z')
        {
            continue;
        }
        ch[i] = ch[i] - 'A' + 'a';
    }
}

int main()
{

    char ch[] = "AlSaKibAyon";
    int n = sizeof(ch) / sizeof(char);

    toLowercase(ch, n);

    cout << "Lowercase is : " << ch << endl;

    return 0;
}