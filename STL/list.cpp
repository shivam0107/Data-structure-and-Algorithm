#include <bits/stdc++.h>
using namespace std;

int main()
{
    list<int> l;
    l.push_back(1);
    l.push_back(4);
    l.push_back(2);
    l.push_back(6);

    l.push_front(6);

    for (int i : l)
    {
        cout << i << " ";
    }

    cout << endl;

    // erase function
    l.erase(l.begin());

    cout << "after erase " << endl;

    for (int i : l)
    {
        cout << i << " ";
    }

    cout << endl;

    // for size
    cout << "size of list " << l.size() << endl;

    return 0;
}