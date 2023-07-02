/*
    input a =3 ,b = 2;
    output a^b


*/


#include <bits/stdc++.h>
using namespace std;
    
 int calcPower(int a,int b){
    //base case
    if(b == 0){
        return 1;
    }

    if(b == 1){
        return a;
    }

    //return a * calcPower(a, b - 1);
    int ans = calcPower(a, b /2);
    if(b%2 == 0){
        return ans * ans;
    }
    else{
        return a * ans * ans;
    }
 }
 
 
 
int main()
{
   int a,b;
   cin >> a >> b;
   int ans = calcPower(a, b);
   cout << ans << endl;

   return 0;
}