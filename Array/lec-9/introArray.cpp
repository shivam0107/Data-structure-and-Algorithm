#include<bits/stdc++.h>
using namespace std;

void printArray(int arr[],int n){

    cout<<"printing the array "<<endl;


    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }

    cout<<endl;
   

}

int main(){
    //declare

    int number[15];

    cout<< "value at 0th index " <<number[0]<<endl;
    cout<< "value at 200th index " <<number[200]<<endl;
    //should throw warning not declare of 200 index


    

    // printArray(number);

    int second[3] = {3,7,10};

    //accessing an element



    // cout<< "value at 2ndh index " <<second[2]<<endl;
    // cout<<endl<<" everything is fine"<<endl<<endl;

    int third[15] = {1,2};

    // cout<<endl<<" everything is fine"<<endl<<endl;
    int n = 15;

    //  printArray(third,n);
        int sizeFourth = sizeof(third)/sizeof(int);

    // cout<<"size of third array "<<sizeFourth<<endl;

    cout<<endl;
    //initalizing all location with zero;

    // int fourth[10] = {0};

    //it will intitialize first location with 1 rest of 
    //allocated with 0
    int fourth[10] = {1};


    //we can calculate size of the array

    // int sizeFourth = sizeof(fourth)/sizeof(int);

    // cout<<"size of forth array "<<sizeFourth<<endl;

    
    
    int n1 = 10;

    // printArray(fourth,n1);



    char ch[5] = {'a','b','c','d','e'};

    // printArray(ch)

    for(int i=0;i<5;i++){
        cout<<ch[i]<<" ";
    }

    return 0;
}