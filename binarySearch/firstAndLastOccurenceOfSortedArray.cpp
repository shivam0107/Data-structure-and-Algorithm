#include <iostream>
using namespace std;

int firstOccurance(int arr[], int n, int key)
{

    int s = 0;
    int e = n - 1;
    int ans = -1;

    int mid = s + (e - s) / 2;

    while (s <= e)
    {
        if (arr[mid] == key)
        {
            ans = mid;
            e = mid - 1;
        }
        else if (key > arr[mid])
        {
            s = mid + 1;
        }
        else
        {
            e = mid - 1;
        }

        mid = s + (e - s) / 2;
    }

    return ans;
}



int lastOccurance(int arr[], int n, int key)
{

    int s = 0;
    int e = n - 1;
    int ans = -1;

    int mid = s + (e - s) / 2;

    while (s <= e)
    {
        if (arr[mid] == key)
        {
            ans = mid;
            s = mid + 1;
        }
        else if (key > arr[mid])
        {
            s = mid + 1;
        }
        else
        {
            e = mid - 1;
        }

        mid = s + (e - s) / 2;
    }

    return ans;
}


int main()
{

    int arr[5] = {1, 2, 3, 3, 3};

    cout << "First Occurence of 3 is at index " << firstOccurance(arr, 5, 3)<<endl;
    cout << "last Occurence of 3 is at index " << lastOccurance(arr, 5, 3);
}