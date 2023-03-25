/*
    character hashing
     hash[s[i] - 'a']++;
     it means
      if s[i] = a
      'a' - 'a';
      97 - 97 = 0

      hash[0] = counts the frequency of 'a'
      similarly
      if s[i] = f
      'f' - 'a';
      102 - 97 = 5

      hash[5] = counts the frequency of 'f'

      this method is also using in printing





*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin >> s;
   

    // precompute
    // for the lowercase letter
    int hash[26] = {0};
    for (int i = 0; i < s.size(); i++)
    {
        hash[s[i] - 'A']++;
    }

    int q = 0;
    cin >> q;
    while(q--){
        char c;
        cin >> c;
        // fetch
        cout << hash[c - 'A']<<"\n";
    }


    // for any character
    // UPPERCASE , any special character

    /*
        int hash[256] = {0};
    for (int i = 0; i < s.size(); i++)
    {
        hash[s[i]]++;
    }

    int q = 0;
    cin >> q;
    while(q--){
        char c;
        cin >> c;
        // fetch
        cout << hash[c]<<"\n";
    }

    */
    return 0;
}