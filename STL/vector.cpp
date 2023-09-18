/*
    vector is dynamic array\
    whenever a vector is full it will create a new
    vector of double size of it 
    and copy all the value into new vector and first vector will be deleted

*/

#include <bits/stdc++.h>
using namespace std;
    
 
 
 
 
int main()
{
    vector<int> v;

    vector<int> v1(5,1);
    for (int i = 0; i < v1.size(); i++)
    {
        cout << v1[i] << " ";
    }
    cout << endl;

    //to copy a vector into another
    vector<int> last(v1);
    for (int i = 0; i < last.size(); i++)
    {
        cout << last[i] << " ";
    }

    cout << endl;
    // capacity of vector
    cout << "capacity " << v.capacity() << endl;

    v.push_back(1);
    cout << "capacity " << v.capacity() << endl;

    v.push_back(2);
    cout << "capacity " << v.capacity() << endl;

    v.push_back(3); // capacity double
    cout << "capacity " << v.capacity() << endl;

    // size of vector
    cout << "size " << v.size() << endl;

    // v.at()-->
    cout << "element at 2nd index " << v.at(2) << endl;

    cout << "before pop_back" << endl;
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
        
    }
    cout << endl;


    //v.pop_back() delete 1 last element
    v.pop_back();

    cout << "after pop_back" << endl;

    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
    cout << endl;

    cout << "before clear " << v.size() << endl;
    cout << "before clear capacity " << v.capacity() << endl;

    // it will clear size of the vector not capacity
    v.clear();

    cout << "after clear " << v.size() << endl;
    cout << "after clear capacity " << v.capacity() << endl;

    
    
    
    
    
    
    
    
    
    
    
    
    return 0;
}