// binary search through recursion

#include <bits/stdc++.h>
using namespace std;

void print(int arr[],int s,int e){
    for (int i = s; i <= e; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int binarySearch(int arr[], int s, int e, int key)
{
    print(arr, s, e);

    // base case
    // element not found
    if (s > e)
    {
        return 0;
    }
    int mid = s + (e - s) / 2;

    // element found
    if (arr[mid] == key)
    {
        return mid;
    }

    if (arr[mid] < key)
    {
        return binarySearch(arr, mid + 1, e, key);
    }
    else
    {
        return binarySearch(arr, s, mid - 1, key);
    }
}

int main()
{

    int arr[6] = {2, 4, 8, 10, 14, 16};
    int size = 6;
    int key = 10;

    int ans = binarySearch(arr, 0, 5, key);
    if (ans == 0)
    {
        cout << "Not found" << endl;
    }
    else
    {
        cout << "Element found at index = " << ans << endl;
        }
    return 0;
}
