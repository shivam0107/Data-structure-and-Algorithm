#include <bits/stdc++.h>
using namespace std;
    

 int printSum(int *arr,int n){
     int sum = 0;
     for (int i = 0; i < n;i++){
         sum += arr[i];

     }

     return sum;
 }

 void print(int *p){
     cout << *p << endl;
 }
 
 void update(int *p){
    //  p = p + 1;
     cout <<"inside "<< p << endl;

     *p = *p + 1;
 }
 
int main()
{

     int arr[5] = {1, 2, 3, 4, 5};
     int sum = printSum(arr, 5);

     cout <<"sum = "<< sum << endl;
     int a = 90;
     //    print(&a);
     //    int *p = &a;

     cout << "before " << a << endl;
     update(&a);

     cout << "after  " << a << endl;

     return 0;
}