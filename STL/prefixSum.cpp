/*

    pre computation using prefix sum
    
    given array a of N integers. given q queries and in each query given L and R print sum 
    of all element from index L to R(L , R included )



    constraints 
    1 <= N <= 10^5
    1 <= a[i] <= 10^9
    1 <= q <= 10^5
    1 <= L , R <= N

*/


#include <bits/stdc++.h>
using namespace std;

const int N = 1e5 +10;
int a[N];
int pf[N];

int main()
{
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
        pf[i] = pf[i-1] + a[i];
    }

    for (int i = 1; i <= n; i++){
        cout << pf[i] << " ";
    }

        int q;
        cin >> q;

        while(q--){
            int l, r;
            cin >> l >> r;
            // long long sum = 0;

            // for (int i = l; i <= r; i++)
            // {
            //     sum += a[i];
            // }

            cout << pf[r] - pf[l - 1] << endl;

            // cout << sum << endl;
        }

        // time complexity
        //  O(N) + O(q*N) = 10^10;
        //  O(N) + O(q) = 10^5; // prefix sum
        // cannot execute in 1 sec;

        return 0;
}