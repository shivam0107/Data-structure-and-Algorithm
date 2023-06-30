//  faunction calls itself called recursion

#include <bits/stdc++.h>
using namespace std;

void print(int n){
    if(n == 0){
        return;
    }
    
    print(n - 1);
    cout << n << " ";
}

int power(int n){
     if(n == 0){
         return 1;
     }

    //  int smallerProblem = power(n - 1);
    //  int biggerProblem = 2 * smallerProblem;
    //  return biggerProblem;

     return 2 * power(n - 1);
}  
 int factorial(int n){
    if(n == 0){
        return 1;
    }
       
     return n * factorial(n - 1);
    
 }
 
 
 
int main()
{
   
int n;
cin >> n;
int ans = factorial(n);
int ans1 = power(n);
print(n);
cout <<"\nfactorial "<< ans << endl;
cout << "power " << ans1;

return 0;
}