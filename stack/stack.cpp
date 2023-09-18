/*
    stack implementation using array
*/

#include <bits/stdc++.h>
using namespace std;
    
class Stack{
    //properties 
    public:
    int *arr;
    int size;
    int top;


    //behavior
    Stack(int size){
        this->size = size;
        arr = new int[size];
        top = -1;
    }
    void push(int element){
        if(size - top > 1){
            top++;
            arr[top] = element;
        }
        else{
            cout << "stck is overflow" << endl;
        }
    }

    void pop(){
        if(top != -1){
            top--;
        }
        else{
            cout << "stck is underflow" << endl;
        }

    }

    int peek(){
        if(top != -1){
            return arr[top];
        }
        else{
            cout << "stack is empty" << endl;
            return -1;
        }
    }

    bool isEmpty(){
        if(top  == -1){
            return true;
        }
        else{
            return false;
        }

    }
};

int main()
{

    Stack s(10);
    s.push(10);
    s.push(35);
    s.push(34);
    s.push(16);
    s.push(13);

    cout << s.peek() << endl;
    if (s.isEmpty())
    {
        cout << "stack is empty" << endl;
    }
    else{
        cout << "stack is not empty"<<endl;
    }
    s.pop();
    s.pop();
    s.pop();
    s.pop();
    s.pop();
    s.pop();
    cout << s.peek() << endl;

    return 0;
}