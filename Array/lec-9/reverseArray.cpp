#include<bits/stdtr1c++.h>
using namespace std;

//learning
/*
    swap function
*/

void printArray(int arr[],int size){
    for(int i=0; i<size; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

void reverse(int arr[],int size){
    int start = 0;
    int end = size-1;

    while(start<=end){


        swap(arr[start],arr[end]);
        // int temp = arr[start];
        // arr[start] = arr[end];
        // arr[end] = temp;

        start++;
        end--;
    }
}

int main(){
    int arr[6] = {1,3,2,4,6,7};
    int brr[5] = {1,-3,-2,4,6};

    reverse(arr,6);
    reverse(brr,5);

    printArray(arr,6);
    printArray(brr,5);






}