#include <iostream>
using namespace std;

void printArr(int *arr, int n, string message)
{
    cout << message << endl;
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << ", ";
    }
    cout << endl
         << endl;
}

void BubbleSort(int arr[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - 1 - i; j++)
        {
            if (arr[j] < arr[j + 1])
            {
                swap(arr[j], arr[j + 1]);
            }
        }
    }
    string message = "============Bubble Sort============";
    printArr(arr, n, message);
}

void SelectionSort(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        int idx = i;
        for (int j = i; j < n; j++)
        {
            if (arr[idx] < arr[j])
            {
                idx = j;
            }
        }
        swap(arr[i], arr[idx]);
    }
    string message = "============Selection Sort============";
    printArr(arr, n, message);
}

void InsertionSort(int *arr, int n)
{
    for (int i = 1; i < n; i++)
    {
        int curr = arr[i];
        int prev = i - 1;
        while (prev >= 0 && arr[prev] < curr)
        {
            swap(arr[prev], arr[prev + 1]);
            prev--;
        }
    }
    string message = "============Insertion Sort============";
    printArr(arr, n, message);
}

void CountingSort(int arr[], int n)
{
    int freq[100000] = {0};
    int minVal = INT32_MAX;
    int maxVal = INT32_MIN;
    for (int i = 0; i < n; i++)
    {
        freq[arr[i]]++;
        minVal = min(minVal, arr[i]);
        maxVal = max(maxVal, arr[i]);
    }

    // for (int j = minVal, k = 0; j <= maxVal; j++)
    // {
    //     while (freq[j] > 0)
    //     {
    //         arr[k++] = j;
    //         freq[j]--;
    //     }
    // }

    for (int j = maxVal, k = 0; j >= 0; j--)
    {
        while (freq[j] > 0)
        {
            arr[k++] = j;
            freq[j]--;
        }
    }

    string message = "============Counting Sort============";
    printArr(arr, n, message);
}

int main()
{

    int arr[] = {3, 6, 2, 1, 8, 7, 4, 5, 3, 1};
    int n = sizeof(arr) / sizeof(int);
    // cout << n;
    BubbleSort(arr, n);
    SelectionSort(arr, n);
    InsertionSort(arr, n);
    CountingSort(arr, n);
    return 0;
}