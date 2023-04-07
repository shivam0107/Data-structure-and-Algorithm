/*
    takes the element and places its in its correct position



*/

#include <bits/stdc++.h>
using namespace std;
    
 
 void insertionSort(int arr[],int n){
     for (int i = 0; i < n;i++){
         int j = i;
         while(j>0 && arr[j-1]>arr[j]){
             swap(arr[j - 1], arr[j]);
             j--;
         }

     }
 }
 
 
int main()
{
   int arr[6] = {4,7,15,3,10,8};
   insertionSort(arr, 6);
   for (int i = 0; i < 6;i++){
       cout << arr[i] << " ";
   }

       return 0;
}