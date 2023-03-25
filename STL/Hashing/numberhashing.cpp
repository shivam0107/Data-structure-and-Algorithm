/*
hashing technique
input-->

5     [size of the array]
1 3 2 1 3    [values in  the array]
5            [total no to find]
1 4 2 3 12   [input no whom counts we have to find]
ans;

2
0
1
2
0

locally  ---> 10^6
globally  ---> 10^7

*/

#include <bits/stdc++.h>
using namespace std;
    
int main()
{

    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++){
        cin >> arr[i];

    }

    // precompute
    
    int hash[10000000] = {0}; 
    // I can not declare array more 
    //than 10^6 if declare it will throw
    //segmentation error
    for (int i = 0; i < n; i++){
        hash[arr[i]] += 1;

    }


    int q;
    cin >> q;
    while(q--){
        int number;
        cin >> number;
        // fetch

        cout << hash[number] << endl;
    }

    return 0;
}