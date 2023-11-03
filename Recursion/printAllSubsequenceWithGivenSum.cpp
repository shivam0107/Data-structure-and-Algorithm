/******************************************************************************

printing all the subsequence with given sum -- make function void
printing any of the subsequence with given sum -- make bool return type

*******************************************************************************/
#include <bits/stdc++.h>

// print any subsequence with given sum;
using namespace std;

bool print(int i, int arr[], int n, vector<int> &ds, int s, int sum)
{
    //base case
    if (i == n)
    {
        if (s == sum)
        {
            for (auto it : ds)
            {
                cout << it << " ";
            }
            cout << endl;
            return true;
        }

        return false;
    }

    ds.push_back(arr[i]);
    s += arr[i];
    if (print(i + 1, arr, n, ds, s, sum) == true) // pick
        return true;

    s -= arr[i];
    ds.pop_back();

    if (print(i + 1, arr, n, ds, s, sum) == true) // not pick
        return true;
    return false;
}

int main()
{
    int arr[] = {1, 2, 1};
    int sum = 2;
    vector<int> ds;

    int n = 3;
    print(0, arr, n, ds, 0, sum);

    return 0;
}
