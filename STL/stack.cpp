#include <bits/stdc++.h>
using namespace std;
    
 // lifo system stack
 
 
 
int main()
{

    stack<string> s;

    s.push("shivam");
    s.push("roshan");
    s.push("mohan");

    cout << "top element " << s.top() << endl;

    s.pop();
    cout << "top element " << s.top() << endl;

    cout << "size of stack " << s.size() << endl;

    cout << "empty or not " << s.empty() << endl;

    return 0;
}  