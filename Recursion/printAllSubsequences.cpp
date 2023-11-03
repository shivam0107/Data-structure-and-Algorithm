//printing all subsequences

#include <bits/stdc++.h>

// print any subsequence with given sum;
using namespace std;

void print(int i, int arr[], int n, vector<int> &ds)
{
    // base case;
    if (i == n)
    {
        
        for (auto it : ds)
        {
            cout << it << " ";
        }
        if(ds.size() == 0)
            cout << "{}" << endl;
        cout << endl;
           
        

        return;
    }

    ds.push_back(arr[i]);

    print(i + 1, arr, n, ds); // take the element

    ds.pop_back();

    print(i + 1, arr, n, ds); //not take the element
}

int main()
{
    int arr[] = {1, 2, 5};
   
    vector<int> ds;

    int n = 3;
    print(0, arr, n, ds);

    return 0;
}
