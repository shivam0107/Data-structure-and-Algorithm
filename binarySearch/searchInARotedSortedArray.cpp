#include <bits/stdc++.h>
using namespace std;

int binarySearch(int arr[], int s, int e, int k)
{
    
    int mid = s + (e - s) / 2;

    while (s < e)
    {
        if (arr[mid] == k)
        {
            return mid;
        }
        else if (arr[mid] < k)
        {
            s = mid + 1;
        }
        else
        {
            e = mid - 1;
        }

        mid = s + (e - s) / 2;
    }

    return -1;
}

int getPivot(int arr[], int n)
{

    int s = 0;
    int e = n - 1;
    int mid = s + (e - s) / 2;

    while (s < e)
    { // s<=e --> it will in infinite loop
        if (arr[mid] >= arr[0])
        {
            s = mid + 1;
        }
        else // arr[mid] <= arr[n-1]
        {
            e = mid;
        }

        mid = s + (e - s) / 2;
    }

    return s;
}

int main()
{
    int arr[5] = {6, 7, 8, 1, 2};
    int pivot = getPivot(arr, 5);

    // cout << pivot << endl;
    int k = 0;
    int index = 0;
    cin >> k;

    if (k >= arr[pivot] && k <= arr[5])
    {
        index =  binarySearch(arr, pivot, 4, k);
    }
    else
    {

        index =  binarySearch(arr, 0, pivot, k);
    }

    cout << index;

    return 0;
}