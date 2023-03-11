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

void swapAlternate(int arr[],int size){
    
    int start = 0;
    int nextStart = 1;


   
     while(nextStart<size){

        if(nextStart>size){
            // nextStart = nextStart+2;

            break;

        }
        else{
             swap(arr[start],arr[nextStart]);

        }

        start = start+2;
        nextStart = nextStart+2;

    }
    

   

       
    
}

int main(){
    int arr[6] = {1};
  

     swapAlternate(arr,1);

    printArray(arr,1);
    






}