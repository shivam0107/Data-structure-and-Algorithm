/*
you are given a number of stair,
 you have to reach the nth stair
 each time you can climb 1 step or 2 step

 find out possible distinct ways to reach the nth stair



 base case-->
 n<0            if stairs are grounded negetive such case return 0
 return 0;

 n == 0
 means you are at the oth step then the possible ways to reach the
 oth step is 1

 return 1;


 recursive relation----->

 you can climb either one step or 2 step

 f(n) = f(n-1) + f(n-2);


*/
#include <bits/stdc++.h>
using namespace std;

int distinctWays(int n){
    // base case
    if(n<0){
        return 0;

    }
    if(n == 0){
        return 1;

    }

    return distinctWays(n - 1) + distinctWays(n - 2);
}  
 
 
 
 
int main()
{
   int n;
   cin >> n;
int ans =    distinctWays(n);
cout << ans << endl;
return 0;
}