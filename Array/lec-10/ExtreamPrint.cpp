#include<iostream>
using namespace std;

void extreamPrint(int arr[] ,int n){
int i = 0;
int j = n-1;
    while(i<=j){
        cout<<arr[i]<<" ";
        if(!(i==j))
        cout<<arr[j]<<" ";

        i++;
        j--;

    }

}

int main(){
    int arr[6] = {1,3,5,2,6,4};
    extreamPrint(arr,6);

    return 0;
}