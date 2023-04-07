/*
        Push the max at the last by adjacent Swap

         bubble sort-->

                    12,3,21,34,56,78,24;
        step-1      Check first two adjacent Elements and check them are they in the sorted order,
                    if not then swap them Till one iteration
                    3,12,21,34,56,24,78;

        step-2      Check first two adjacent Elements and check them are they in the sorted order,
                    if not then swap them Till one iteration
                    3,12,21,34,24,56,78;


        step-3      Check first two adjacent Elements and check them are they in the sorted order,
                    if not then swap them Till one iteration
                    3,12,21,24,34,56,78;


        step-4      Check first two adjacent Elements and check them are they in the sorted order,
                    if not then swap them Till one iteration
                    3,12,21,24,34,56,78;


         Time complexity =  O(n^2) -- worst / average
               optimized =  O(n) -- best case

*/

#include <bits/stdc++.h>
using namespace std;

void bubbleSort(int arr[], int n)
{

    for (int i = n - 1; i >= 1; i--)
    {
        int didSwap = 0;
        for (int j = 0; j <= i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                swap(arr[j], arr[j + 1]);
                didSwap = 1;
            }
        }

        if (didSwap == 0)
        { // optimized  -- O(n) -- best case
            break;
        }
    }
}

int main()
{

    int arr[7] = {12, 3, 21, 34, 56, 78, 24};
    bubbleSort(arr, 7);

    for (int i = 0; i < 7; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}