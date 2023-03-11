#include <bits/stdtr1c++.h>
using namespace std;

// learning
/*
    XOR operation

    a^a = 0;
    0^a = a;
*/

// void printArray(int arr[], int size)
// {
//     for (int i = 0; i < size; i++)
//     {
//         cout << arr[i] << " ";
//     }
//     cout << endl;
// }

int findUnique(int arr[], int size)
{
    int ans = 0 ;
    for(int i=0 ;i<size; i++){
        ans = ans^arr[i];

    }
   return ans;
}

int main()
{
    int arr[7] = {1,3,2,4,2,3,1};

    int ans  = findUnique(arr, 7);

    cout<<ans<<endl;
}