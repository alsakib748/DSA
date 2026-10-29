#include <iostream>
using namespace std;

// void linearSearch(int arr[], int n, int key)
void linearSearch(int *arr, int n, int key)
{
    int index = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == key)
        {
            index = i;
            break;
        }
        else
        {
            index = -1;
        }
    }

    if (index == -1)
    {
        cout << "Data not found" << endl;
    }
    else
    {
        cout << "Data found on index " << index << endl;
    }
}

int main()
{
    int key = 8;
    int arr[] = {2, 4, 6, 8, 10, 12, 14, 16};
    int n = sizeof(arr) / sizeof(int);

    linearSearch(arr, n, key);
}