#include <bits/stdc++.h>
using namespace std;
    
 
 //brute force approach
 
 
 
int longSubarray(int arr[] ,int K){
    int len = 0;
    for(int i =0;i<10;i++){
        for(int j=i;j<10;j++){
            
            
            int sum = 0;
            for(int k = i;k<=j;k++){
                sum += arr[k];
            }
            
            if(sum == K){
                len = max(len ,j - i + 1);
            }
        }
    }
    
    return len;
}



int main()
{
    int arr[10] = {1,2,3,4,3,21,5,7,5,9};
    int k =3;
    
    
    int len = longSubarray(arr,k);
    cout<<len;
}






