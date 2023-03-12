/*
  binarySearch: --> 
  there is a condition for binary search 
  elements should be in a monotonic function

  it means either in increasing order or decresing order



*/


#include<iostream>
using namespace std;

int binarySearch(int arr[],int size,int key){
    int start = 0;
    int end = size-1;

    // int mid  = (start+end)/2;
    int mid  = start + ((end - start)/2);

    while(start<=end){
        if(arr[mid] == key){
            return mid;
        }



        // right part
        if(key > arr[mid]){
            start = mid+1;
        }
        else{
            end = mid-1; // left part
        }

    // mid = (start + end)/2;
        mid  = start + ((end - start)/2);


    }


    return -1;

}


int main(){
    int even[6] = {2,4,6,8,12,18};
    int odd[5] = {3,8,11,14,15};

    cout<<"for even array"<<endl;
    int index = binarySearch(even , 6 , 12);
    cout<<"index = "<<index<<endl;

    cout<<"for odd array"<<endl;

    index = binarySearch(odd , 5 , 13);
    cout<<"index = "<<index<<endl;



   return 0;

}