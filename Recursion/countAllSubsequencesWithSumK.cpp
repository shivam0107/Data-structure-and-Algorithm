/******************************************************************************

// base case 
if the condition satisfies -- return 1
if not -- return 0


*******************************************************************************/
#include <bits/stdc++.h>

// count all subsequence with given sum;
using namespace std;

int print(int i, int arr[], int n, int s, int sum)
{
    //base case
    if (i == n)
    {
        if (s == sum)
        {
            return 1;
        }

        return 0;
    }

    s += arr[i];
    int l = print(i + 1, arr, n, s, sum); //recursive call

    s -= arr[i];

    int r = print(i + 1, arr, n, s, sum); //recursive call
    return l + r;
}

int main()
{
    int arr[] = {1, 2, 1};
    int sum = 2;

    int n = 3;
    int cnt = print(0, arr, n, 0, sum);

    cout << "count " << cnt << endl;

    return 0;
}
