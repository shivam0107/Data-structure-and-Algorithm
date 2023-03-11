#include<bits/stdc++.h>
using namespace std;

void update(int arr[] ,int n){

    cout<<" Inside the function"<<endl;

    arr[0] = 120;
    //printing

    for(int i=0;i<4;i++){
        cout<<arr[i]<<" ";
    }

    cout<<endl;

    cout<<" going back to main function"<<endl;



}

int main(){

    int arr[4] = {1,3,4,5};

    update(arr,4);

    //printing

    for(int i=0;i<4;i++){
        cout<<arr[i]<<" ";
    }

    return 0;





}