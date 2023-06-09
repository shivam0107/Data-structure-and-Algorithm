/*
    base case size 0 or 1 return true

*/

#include <bits/stdc++.h>
using namespace std;
    
 bool isSorted(int *arr,int size){
    // base case
    if(size == 0 || size == 1){
        return true;
    }

    if(arr[0] > arr[1]){
        return false;
    }
    else{
        bool remainingPart = isSorted(arr + 1, size - 1);
        return remainingPart;
    }
 }
 
 
 
int main()
{
    int arr[5] = {2, 4, 9, 9, 9};
    int size = 5;

    bool ans = isSorted(arr,size);

    if(ans){
        cout << "array is sorted" << endl;
    }
    else{
        cout << "not sorted" << endl;
    }

    return 0;
}