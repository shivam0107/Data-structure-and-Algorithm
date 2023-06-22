#include <bits/stdc++.h>
using namespace std;
    
//  douuble pointer 
// when a pointer holds the address of 
//another pointer is called double pointer

 
void update(int **p){
   //p = p + 1;
   /*
      no changes because function call is done by pass by value
      no change in actual address of ptr2 
   */

 // *p = *p + 1;
  /*
      address of ptr will changed
  */

  **p = **p + 1;
  /*
      value present at i will achanged
  */
}
 
int main()
{
   
   int i = 5;
   int *ptr = &i;                // pointer
   int **ptr2 = &ptr;         //double pointer

   // cout << i << endl;
   // cout << *ptr << endl;
   // cout << **ptr2 << endl;

   /*
      5
      5
      5
   */

   // cout << ptr << endl;
   // cout << &i << endl;
   // cout << *ptr2 << endl;

   // cout << &ptr << endl;
   // cout << ptr2 << endl;

   /*
      0x61feb8
      0x61feb8
      0x61feb8

      0x61feb4
      0x61feb4

   */

   cout << "before " << i << endl;
   cout <<"before "<< ptr << endl;
   cout << "before " <<ptr2<< endl;

   update(ptr2);

   cout << "after " << i << endl;
   cout << "after " << ptr << endl;
   cout << "after " << ptr2 << endl;


   return 0;
}