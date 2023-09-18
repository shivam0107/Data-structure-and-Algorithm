/*
    given an array with equal no of pos element and neg element 
    our task is to rearrange element like pos and neg element should be alternate 
    and element should start with positive element

    bruteForce = time complexity = O(n) + O(n)
                 space complexity = O(n)


    optimal    = TC = O(n)
               = SC = O(n)


        another version  = pos != neg (it may be or not)   follow up question
*/


#include <bits/stdc++.h>
using namespace std;

void rearrangeElement(int arr[],int n){

    vector<int> pos;
    vector<int> neg;

    for (int i = 0; i < n; i++)
    {
        if(arr[i] >= 0){
            pos.push_back(arr[i]);

        }
        else{
            neg.push_back(arr[i]);
        }
    }

    if(pos.size() > neg.size()){
        for (int i = 0; i < neg.size(); i++)
        {
            arr[2 * i] = pos[i];
            arr[2 * i + 1] = neg[i]; // brute force approach
        }

        int index = neg.size() * 2;
        for (int i = neg.size(); i < pos.size(); i++)
        {
            arr[index] = pos[i];
            index++;
        }
    }
    else{

        for (int i = 0; i < pos.size(); i++)
        {
            arr[2 * i] = pos[i];         // this loop will run for equal case
            arr[2 * i + 1] = neg[i]; // brute force approach
        }

        int index = pos.size() * 2;
        for (int i = pos.size(); i < neg.size(); i++)
        {
            arr[index] = neg[i];
            index++;
        }
    }
    
    //  int n = nums.size();
    //     vector<int> ans(n,0);
    //     int positive = 0,negetive = 1;

    //     for(int i =0; i<n ;i++){
    //         if(nums[i] < 0){
    //             ans[negetive] = nums[i];
    //             negetive += 2;
    //         }
    //         else{
    //             ans[positive] = nums[i];
    //             positive += 2;
    //         }
    //     }
        

        // return ans;

    
   
}

    
    int main() {


    int arr[6] = {-1, 2, 3, 4, -3, 1};

    rearrangeElement(arr, 6);

    for (int  i = 0; i < 6; i++)
    {
        cout << arr[i] << " ";

    }


    

    return 0;
}