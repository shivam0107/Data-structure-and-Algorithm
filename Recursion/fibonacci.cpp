//fibonacci number
//input is n nth term of fibonacci series
// 0,1,1,2,3,5,8,.....

// for input 3 ans is 2;

#include <bits/stdc++.h>
using namespace std;

    int fibonacci(int n){
        // base case
        if(n == 0){
            return 0;
        }
        if(n == 1){
            return 1;
        }

        return (fibonacci(n - 1) + fibonacci(n - 2));
    }
    
 void reachHome(int src ,int dest){

     cout << "source " << src << " destination " << dest << endl;
     // base case
     if (src == dest)
     {
         cout << "pahunch gaye" << endl;
         return;
    }

    // recursive call

    reachHome(++src, dest);

 }
 
 
int main()
{
    int dest =3;
    int src = 1;
    int n;
    cin>>n;

    int ans = fibonacci(n);
    cout <<n<< "th term is " << ans << endl;
    cout << endl;
    reachHome(src, dest);

    return 0;
}