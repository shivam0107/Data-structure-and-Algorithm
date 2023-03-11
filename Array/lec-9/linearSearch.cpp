#include<bits/stdc++.h>
using namespace std;

bool search(int arr[] ,int size,int key){

    for(int i = 0; i<size; i++){
        if(arr[i] == key){
            return true;
        }
    }
    return false;


}

int main(){

    int arr[10] = {5,1,2,4,-5,6,7,-23,4,-12};
    //whether 1 is presnt or not

    cout<<"Enter the element to search for "<<endl;

    int key;
    cin>>key;

    bool found = search(arr,10,key);

    if(found){
        cout<<"key is present"<<endl;
    }
    else{
        cout<<"key is not present"<<endl;

    }



    return 0;

}