/*
    say digit is
    i/p = 432
    o/p = Four three two

*/

#include <bits/stdc++.h>
using namespace std;

void sayDigit(int n, string arr[])
{
    // base case
    if (n == 0)
    {
        return;
    }

    int digit = n % 10;
    n = n / 10;

    sayDigit(n, arr);
    cout << arr[digit] << " ";
}

int main()
{
    int n;
    cin >> n;

    string arr[10] = {"zero", "one", "two", "three", "Four", "five", "six", "seven", "eight", "nine"};

    sayDigit(n, arr);

    return 0;
}