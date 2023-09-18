/*
    finding maximum sum with max subarray 
    kadanes algorithm
*/

#include <bits/stdc++.h>
using namespace std;

int maxSubarraySum(int arr[], int n){

    int maximum = INT_MAX;   // INT_MAX for finding min sum
    int len = 0;
    int sum = 0;
    int start = -1;
    int ansStart = -1;
    int ansEnd = -1;

    for(int i = 0; i < n; i++){
        //calculate sum
        if(sum == 0){
            start = i;
        }
        sum += arr[i]; 

            //check weather sum is greater than maximum 
          if(sum < maximum){  // sum < maximum for finding min sum 
            maximum = sum;
            ansStart = start;  
            ansEnd = i;
          }

          //check if sum is lesser than 0 then do not carry it

          if(sum > 0){    // sum > 0 for finding min sum 
              sum = 0;
          }

       
    }

   // check for empty set
    if (maximum < 0)
    {
          sum = 0;
    }

    len = ansEnd - ansStart + 1;

   // return len;// return max len of max sum
    return maximum;  //return max sum
}

    int main()
{               // 0  1   2   3  4  5  6  7  8
    int arr[10] = {18, -6, -6, -5, 7, 10, 16, -6, -2, 0};

    int sum = maxSubarraySum(arr,  10);
    cout << sum << endl;

    return 0;
}