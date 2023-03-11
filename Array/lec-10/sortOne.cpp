
#include <bits/stdtr1c++.h>
using namespace std;

// learning
/*
   two pointer approach
*/

void printArray(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

void sortOne(int arr[], int size)
{
    int i =0; int j = size-1;

    while(i<j){
        while(arr[i] == 0 && i<j){
            i++;
        }

        while(arr[j] == 1 && i<j ){
            j--;
        }  

            
            if(arr[i]==1 && arr[j]==0 && i<j){
                swap(arr[i] , arr[j]);
                i++;
                j--;
            }
        
    }
}

int main()
{
    int arr[8] = {1,0,1,0,1,0,1,0};

     sortOne(arr, 8);

     printArray(arr,8);

    
}