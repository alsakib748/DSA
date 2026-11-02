#include <iostream>
using namespace std;

void printArr(int *arr, int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}

void CountingSort(int arr[], int n)
{
    int freq[100000] = {0};
    int minVal = INT32_MAX;
    int maxVal = INT32_MIN;

    // cout << "Min Val : " << minVal << endl;
    // cout << "Max Val : " << maxVal << endl;

    // for (int i = 0; i < n; i++)
    // {
    //     minVal = min(minVal, arr[i]);
    //     maxVal = max(maxVal, arr[i]);
    // }

    // 1st Step O(n)
    for (int i = 0; i < n; i++)
    {
        freq[arr[i]]++; // todo; Array value is Freq-array index. Freq-array index value also increment according to specific value count of main array
        // cout << "|" << freq[i] << "|";
        minVal = min(minVal, arr[i]); // todo; Traverse to find min value of original array
        maxVal = max(maxVal, arr[i]); // todo; Traverse to find max value of original array
    }

    cout << "Min Val : " << minVal << endl;
    cout << "Max Val : " << maxVal << endl;

    cout << endl;

    // 2nd step O(range) = max - min
    for (int i = minVal, j = 0; i <= maxVal; i++)
    {
        while (freq[i] > 0)
        {
            arr[j++] = i;

            freq[i]--;
        }
    }
    // todo; Debug and iterator to code of changes
    /***  todo Min value = 1, Max value = 7;
     ***  freq[7] = [0,2,1,2,2,0,0,1]
     ***  i= 1, j=0; 1 < 7 ; while:: freq[1] > 0 = 2 > 0 ; arr[0] = 1 ; freq[i]-- :== 2--
     ***  i= 1, j=1; 1 < 7 ; while:: freq[1] > 0 = 1 > 0 ; arr[1] = 1 ; freq[i]-- :== 1-- ; after this false of index while
     ***  i= 2, j=2; 2 < 7 ; while:: freq[2] > 0 = 1 > 0 ; arr[2] = 2 ; freq[i]-- :== 1-- ; after this false of index while
     ***  i= 3, j=3; 3 < 7 ; while:: freq[3] > 0 = 2 > 0 ; arr[3] = 3 ; freq[i]-- :== 2-- ;
     ***  i= 3, j=4; 3 < 7 ; while:: freq[3] > 0 = 1 > 0 ; arr[4] = 3 ; freq[i]-- :== 1-- ; after this false of index while
     ***  i= 4, j=5; 4 < 7 ; while:: freq[4] > 0 = 2 > 0 ; arr[5] = 4 ; freq[i]-- :== 2-- ;
     ***  i= 4, j=6; 4 < 7 ; while:: freq[4] > 0 = 1 > 0 ; arr[6] = 4 ; freq[i]-- :== 1-- ; after this false of index while
     ***  i= 5, j=;  5 < 7 ; while:: freq[5] > 0 = 0 > 0 ; this is false in while condition
     ***  i= 6, j=;  6 < 7 ; while:: freq[6] > 0 = 0 > 0 ; this is false in while condition
     ***  i= 7, j=7; 7 < 7 ; while:: freq[7] > 0 = 1 > 0 ; arr[7] = 7 ; freq[i]-- :== 1-- ; this is false in while condition
     ***/

    printArr(arr, n);
}

int main()
{
    int arr[8] = {1, 4, 1, 3, 2, 4, 3, 7};
    int n = sizeof(arr) / sizeof(n);
    CountingSort(arr, n);
    return 0;
}