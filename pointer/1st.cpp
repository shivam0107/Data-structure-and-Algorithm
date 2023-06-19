#include <bits/stdc++.h>
using namespace std;
    
 //*p where * is dereference operator
//  int *p , bad practice 

// formula is arr[i] = *(arr +i)
// game = i[arr] = *(i + arr) not gives error

// arr = arr + 1; cannot change symbol table mapping
// char *c = "abcsds";  risky

int main()
{
    int s = 9;
    int *ptr = &s;
    cout << ptr << endl;
    int arr[10] = {1, 3, 55};

    cout << "address of first memory block is" << arr << endl;
    cout << arr[0] << endl;
    cout << "address of first memory block is" << &arr[0] << endl;
    cout << "4th " << *arr << endl;
    cout << "5th " << *arr + 1 << endl;
    cout << "6th " << *(arr + 1) << endl;
    cout << "7th " << *(arr) + 1 << endl;
    // arr[2] = internally written as *(arr+2)
    cout << "8th " << *(arr + 2) << endl;

    int i = 2;
    cout << i[arr] << endl;

    int temp[10];
    cout << sizeof(temp) << endl;
    int *pt = &temp[0];
    cout << sizeof(pt) << endl;
    cout << sizeof(*pt) << endl;
    cout <<  &pt << endl; // address of pointer

    int a[10];

    //arr = arr + 1; cannot change symbol table mapping

    int *p = &a[0];
    cout << p << endl;
    ptr = p + 1;
    cout << p << endl;

    cout << "---------------------------------" << endl;

    int b[5] = {1, 2, 3, 4, 5};
    char ch[6] = "abcde";

    cout << arr << endl;
    cout << ch << endl;

    char *c = &ch[0];
    cout << c << endl;//print entire string


    return 0;
}