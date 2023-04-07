#include <bits/stdc++.h>
using namespace std;

int binarySearch(int arr[], int s, int e, int k)
{

    int mid = s + (e - s) / 2;

    while (s <= e)
    {
        if (arr[mid] == k)
        {
            e =  mid - 1;
        }
        else{

        }
        

        mid = s + (e - s) / 2;
    }

    return mid;
}

int main()
{
    int arr[9] = {1, 3, 5, 5, 5, 5, 67, 123, 125};
    int x = 0;
    cin >> x;

    int left = binarySearch(arr, 0, 8, x);
    cout << left << " ";


    return 0;
}