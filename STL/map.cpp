/*
map store the data into key value paires

*/

#include <bits/stdc++.h>
using namespace std;
    
 
 
 
 
int main()
{
   // Map is an Associated array
   map<string, int > marks;
   marks["shivam"] = 99;
   marks["neelesh"] = 101;
   marks["suraj"] = 102;

   // itrator
   map<string, int> :: iterator itr;
   for (itr = marks.begin(); itr != marks.end();itr++){
      cout << (*itr).first << " " << (*itr).second << "\n";
   }

      return 0;
}


