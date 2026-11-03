#include <iostream>
using namespace std;

void printArr(char ch[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << ch[i] << ", ";
    }
}

void InsertionSort(char ch[], int n)
{
    for (int i = 1; i < n; i++)
    {
        int curr = ch[i];
        int prev = i - 1;
        while (prev >= 0 && curr > ch[prev])
        {
            swap(ch[prev], ch[prev + 1]);
            prev--;
        }
    }
    printArr(ch, n);
}

int main()
{
    char ch[] = {'f', 'b', 'a', 'e', 'c', 'd'};
    int n = sizeof(ch) / sizeof(char);
    // cout << n << endl;
    InsertionSort(ch, n);
    return 0;
}