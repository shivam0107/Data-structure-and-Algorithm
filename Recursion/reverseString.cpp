// reverse the string using recurion
/*
    wil do the same as we do in loops
    keep two pointer i and j at first and last position
    and swap them untill they cross (i > j) this will be the base conndition


*/

#include <bits/stdc++.h>
using namespace std;

void reverse(int i, string &s)
{
    cout << "call receve for = " << s << endl;
    // base case
    if (i == s.length()-2)
    {
        return;
    }

    swap(s[i], s[s.length()-i-1]);
    i++;
  

    reverse(i, s);
}

int main()
{
    string s = "shivam";
    reverse(0, s);

    cout << s;

    return 0;
}