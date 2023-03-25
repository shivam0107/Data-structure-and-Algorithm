/*
  map stores the data into key value paires
      int    int
  map<key , value>
     number   frequency


     we can use map of character
     map<string , int> mpp;

     unordered map
     stored everything in unsorted manner
     


*/

#include <bits/stdc++.h>
using namespace std;

int main()
{

    int n;
    cin >> n;
    int arr[n];
    map<int, int> mpp;

    for (int i = 0; i < n; i++){
        cin >> arr[i];
        mpp[arr[i]]++;
    }

    
    // precomputing
    // map<int, int> mpp;
    // for (int i = 0; i < n;i++){
    //     mpp[arr[i]]++;
    // }

    // iterate
    for (auto it : mpp)
    {
        cout << it.first << "-->" << it.second << endl;
    }

        int q = 0;
    cin >> q;

    while(  q--){
        int number;
        cin >> number;

        // fetch
        cout << mpp[number] << endl;
    }
    return 0;
}