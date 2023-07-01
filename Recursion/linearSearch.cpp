//linesr search through recursion


#include <bits/stdc++.h>
using namespace std;


   bool search(int arr[],int size,int key){
    //base case
    if(size == 0){
        return false;
    }

    if(arr[0] == key){
        return true;
    }
    else{

        bool ans = search(arr + 1, size - 1,key);
        return ans;
    }

   } 
 
 
 
 
int main()
{

    int arr[5] = {2, 4, 8, 4, 9};
    int size = 5;
    int key = 2;

    bool ans = search(arr, size, key);

    if(ans){
        cout << "Present" << endl;
    }
    else{
        cout << "Not present" << endl;
    }

    return 0;
}