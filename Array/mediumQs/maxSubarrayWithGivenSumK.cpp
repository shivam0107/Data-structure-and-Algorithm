#include<bits/stdc++.h>
using namespace std;
    
 int longestSubarray(int arr[],int k ,int n){
     int len = 0;
     /*
        bruteForce Approach
        Time complexity -- ~ O(n^3) somewhere around

        for (int i = 0; i < n;i++){
               for (int  j = i; j < n;j++)
               {
                   int sum = 0;
                       for (int k = i; k <=j;k++){
                           sum = sum + arr[k];
                       }
                       if(sum == k){
                           len = max(len, j - i + 1);
                       }
               }

        }

     */

     

       // bruteForce approach - ~ O(n^2)

    //       for (int i = 0; i < n; i++){
    //         int sum = 0;

    //         for (int j = i; j < n; j++)
    //         {

    //             sum = sum + arr[j];

    //             if (sum == k)
    //             {
    //                 len = max(len, j - i + 1);
    //             }
    //         }
    //   }
     


    // Hashing for better solution for positive and optimal for, positive and negetive
    // long long sum =0;
    // map<long long, int> preSum;

    // for (int i = 0; i < n;i++)
    // {   //calculating prefix sum
    //     sum += arr[i];
    //     if(sum == k){
    //         len = max(len, i + 1);
    //     }

    //     long long rem = sum - k;
    //     // check for rem previously in hashmap
    //     if(preSum.find(rem) != preSum.end()){
    //         int len1 = i - preSum[rem];
    //         len = max(len, len1);
    //     }

    //     /*
    //         keep the prefix sum as left as you can
    //         {2,0,0,3}
    //         longest subarray should be {0,0,3}
    //         do not update the prefix sum if it stored once
    //     */

    //     if(preSum.find(sum) == preSum.end()){
    //         preSum[sum] = i;

    //     }
    // }

    // optimal for positive
    // two pointer approach
    // if sum exceeded by k then trim the array from left 

     int left = 0, right = 0;
     long long sum = arr[0];
     while(right < n){
         while(left <= right  && sum > k){
             sum -= arr[left];
             left++;
         }

         if(sum == k){
             len = max(len, right - left + 1);
         }

         right++;
         if(right < n) sum += arr[right];
     }

     return len;
 }
 
 
 
int main()
{
   int arr[3] = {1,2,3};
   int k = 3;

   int len = longestSubarray(arr, k, 10);
   cout << len << endl;

   return 0;
}