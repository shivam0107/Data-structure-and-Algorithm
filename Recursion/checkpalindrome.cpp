/*
    check for the number that it is palindrome or not
    151 
    is palindrome no.
    151.

*/

#include <bits/stdc++.h>
using namespace std;
    
 int checkPalindrome(int n){
    //base case
    if(n == 0){
        return 0;
    }
    static int sum = 0;
    int r = n % 10;
    sum = r + sum * 10;
    n = n / 10;

    checkPalindrome(n);

    return sum;
 }
 
 
 
int main()
{
    int n;
    cin >> n;

    int ans = checkPalindrome(n);
    if(n == ans){
        cout << "no is palindrome" << endl;
    }
    else{
        cout << "no is not palinfrome" << endl;
    }

    return 0;
}