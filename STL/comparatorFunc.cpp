#include <bits/stdc++.h>
using namespace std;

//this function decide behavior of sorting called 
// this func is called comparator func

//  bool shouild_i_swap(int a, int b){
//     if(a > b)
//     return true;

//     return false;
//  }

// if first element is equal then second element print in 
//decreasing order
bool cmp(pair<int, int> a, pair<int, int> b)
{
    /*
        if(a.first != b.first) {
        if(a.first > b.first)
            // return true;
            return false;

        // return false;
        return true;
    }
    else{
        if(a.second < b.second)
            // return true;
            return false;
        // return false;
        return true;
    }
    */

   // easy way for above code

   if(a.first != b.first)
       return a.first < b.first;
    else
       return a.second > b.second;
 }

int main()
{
   int n;
   cin >> n;

   vector<pair<int ,int>> a(n);
   for (int i = 0; i < n; i++){
       cin >> a[i].first >> a[i].second;
   }

   // inbuilt
   //    sort(a.begin(), a.end());
   // this will sort in increasing order
   // according to both first and second

   sort(a.begin(), a.end() , cmp); // it will sort just opposite we did before
// to do it right 
// if you have to sort return FALSE
// if you don't return TRUE
// inbuilt comparator ulta chalta hai bhaiya

  



   //    sort in N^2

   //    for (int i = 0; i < n;i++){
   //        for (int j = i + 1; j < n; j++){
   //          if(shouild_i_swap(a[i], a[j])){
   //              swap(a[i], a[j]);
   //          }
   //        }
   //    }

   cout << endl;

   for (int i = 0; i < n; i++){
       cout << a[i].first << " "<<a[i].second<<endl;
    }

       return 0;
}