#include <bits/stdc++.h>
using namespace std;
    
 //doubly ended queue
 
 
 
int main()
{

    deque<int> d;

    d.push_back(1);
    d.push_front(2);

    for(int i: d){
        cout << i << endl;
    }

    //first element

    // d.pop_front()
    // d.pop_front();

    // d.pop_back()
    cout << "first index element " << d.at(0)<<endl;

    // d.empty();
    // d.front();

    // erase

    d.erase(d.begin(), d.begin() + 1);
    cout << "first index element " << d.at(0) << endl;

    return 0;
}