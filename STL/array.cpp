#include <bits/stdc++.h>
using namespace std;
    
 // array stl is static array
 
int main()
{
   array<int ,4> a = {11,2,3,5};

   int size = a.size();
   for (int i = 0; i < size; i++)
   {
       cout << a[i] << " ";
   }

   cout << endl;

    // element at particular index
    cout << "element at index 2 " << a.at(2)<< endl;


    //check for isEmpty
    cout <<"Empty or not "<< a.empty() << endl;

    //get first element
    cout << "first element " << a.front() << endl;

    //last element
    cout << "last element " << a.back() << endl;


    return 0;
}