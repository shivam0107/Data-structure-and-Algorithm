/*
    stack implementation through linked list


*/


#include <bits/stdc++.h>
using namespace std;

class Node{
    public:
        int data;
        Node* next;
};

class Stack{
        Node *head;
        int size;

    public:
        

        Stack()
        {
            head = NULL;
            size = 0;
            
        }

        void push(int element){

            Node *temp = new Node();
            temp->data = element;
            temp->next = head;
            head = temp;

            size++;
        }

        void pop(){

            if(head == NULL){
                cout << "stack underflow";
            }
            Node *temp = head;
            head = temp->next;
            temp->next = NULL;

            cout << "element poped" << endl;

            delete temp;

            size--;
        }

        int top(){
            if(head == NULL){
                cout << "stack is empty" << endl;
                return -1;
            }

            return head->data;
        }


        int stackSize(){
            return size;
        }

        bool isEmpty(){
            if(head == NULL){
                return true;
            }
            else{
                return false;
            }
        }

        
};

int main()
{

        Stack s;
        cout<<s.stackSize()<<endl;

        if(s.isEmpty()){
            cout << "stack is empty" << endl;
        }
        else{
            cout << "stck is not empty" << endl;
        }
        s.push(2);
        s.push(34);
        s.push(23);
        s.push(67);
        s.push(78);

        
        cout << s.top() << endl;

        s.pop();
        cout << s.top() << endl;

        return 0;
}