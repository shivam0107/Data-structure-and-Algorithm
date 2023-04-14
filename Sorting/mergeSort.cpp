#include <bits/stdc++.h>
using namespace std;

void merge(int arr[],int low ,int mid ,int high){
    vector<int> temp;
    int left = low;
    int right = mid+1;

    while(left <= mid && right <= high){
        if(arr[left] <= arr[right]){
            temp.push_back(arr[left]);
            left++;
        }
        else{
            temp.push_back(arr[right]);
            right++;
        }
    }

    while (left <= mid){
        temp.push_back(arr[left]);
        left++;
    }

    while (right <= high){
        temp.push_back(arr[right]);
        right++;
    }

    for (int i = low; i <= high; i++)
    {
        arr[i] = temp[i - low];
    }
}
    
 void mergeSort(int arr[], int low , int high){
    if(low>= high){
        return;
    }

    int mid = (low + high) / 2;
    mergeSort(arr, low, mid);
    mergeSort(arr, mid+1, high);
    merge(arr, low, mid,high);
 }

int main()
{
    int arr[10] = {1, 4, 3, 5, 6, 9, 6, 4, 6, 5};
    mergeSort(arr , 0 , 9);

    for (int i = 0; i < 10;i++){
        cout << arr[i] << " ";

    }



        return 0;
}