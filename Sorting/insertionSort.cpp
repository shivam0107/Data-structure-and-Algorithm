/*
    takes the element and places its in its correct position
*/

#include <bits/stdc++.h>
using namespace std;

void insertionSort(int arr[], int n)
{
    //  for (int i = 0; i < n;i++){
    //      int j = i;
    //      while(j>0 && arr[j-1]>arr[j]){
    //          swap(arr[j - 1], arr[j]);
    //          j--;
    //      }
        // Striver
    //  }
     
    // pankaj sir code..

    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (arr[i] > arr[j])
            {
                swap(arr[i], arr[j]);


            }
        }
    }
}

int main()
{
    int arr[5] = {50, 30, 20, 10, 40};
    insertionSort(arr, 5);
    for (int i = 0; i < 5; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}