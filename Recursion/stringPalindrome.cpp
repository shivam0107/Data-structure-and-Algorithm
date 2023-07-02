/*
    checking string for palindrome or not
*/

#include <bits/stdc++.h>
using namespace std;

bool checkPalindrome(string str, int i){
    //base case
    if(i == str.length()-1){
        return true;
    }

    if(str[i] != str[str.length()-1]){
        return false;
    }
    i++;
    

    return checkPalindrome(str, i);
}

int main()
{
    string str = "shivam";
    cout << endl;

    bool isPalindrome = checkPalindrome(str, 0);

    if(isPalindrome){
        cout << "palindrome" << endl;
    }
    else{
        cout << "Not palindrome" << endl;
    }

    return 0;
}
