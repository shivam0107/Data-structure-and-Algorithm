/*
        selection sort-->

                    12,3,21,34,56,78,24;
        step-1      get the minimam from index 0 to n-1 and swap it with 0th index of unsorted array
                    3,12,21,34,56,78,24;

        step-2      get the minimam from index 1 to n-1 and swap it with 0th index of unsorted array
                    3,12,21,34,56,78,24;

        step-3      get the minimam from index 2 to n-1 and swap it with 0th index of unsorted array
                    3,12,21,34,56,78,24;

        step-4      get the minimam from index 3 to n-1 and swap it with 0th index of unsorted array
                    3,12,21,24,56,78,34;

        step-5      get the minimam from index 4 to n-1 and swap it with 0th index of unsorted array
                    3,12,21,24,34,78,56;

        step-6      get the minimam from index 5 to n-1 and swap it with 0th index of unsorted array
                    3,12,21,24,34,56,78;



        Time complexity ---> O(n^2)   (Near about)


*/

#include <bits/stdc++.h>
using namespace std;

void selectionSort(int arr[],int size){

    for (int i = 0; i <= size - 2;i++){
        int min = i;
        for (int j = i; j <= size - 1;j++){
            if(arr[j] < arr[min])
            {
                min = j;
            }

        }
        swap(arr[min], arr[i]);
    }
}

int main()
{

    int arr[7] = {12, 3, 21, 34, 56, 78, 24};
    selectionSort(arr, 7);

    for (int i = 0; i < 7;i++)
    {
        cout << arr[i] << " ";
    }


   return 0;
}