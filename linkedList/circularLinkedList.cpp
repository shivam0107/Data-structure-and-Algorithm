/*
in circular linked list we do not need head pointer
we can add or delete Nodes by Tail pointer

*/

#include <bits/stdc++.h>
using namespace std;

class Node
{
    public:
    int data;
    Node *next;

    // constructor
    Node(int d)
    {
        this->data = d;
        this->next = NULL;
    }

    ~Node()
    {
        int value = this->data;
        if (this->next != NULL)
        {
            delete next;
            next = NULL;
        }
        cout << "memory free for node with data   " << value << endl;
    }
};

void insertNode(Node* &tail, int element, int d)
{

    // empty list
    if (tail == NULL)
    {
        Node *newNode = new Node(d);
        tail = newNode;
        newNode->next = newNode;
    }
    else
    {
        // non empty list
        // assuming that the element present in the linked list
        Node *curr = tail;

        while (curr->data != element)
        {
            curr = curr->next;
        }

        // current is representing curr element wala node
        Node *temp = new Node(d);
        temp->next = curr->next;
        curr->next = temp;
    }
}

void print(Node* tail)
{
    //empty list
    if(tail == NULL){
        cout << "List is empty" << endl;
    }
    Node *temp = tail;
   

    do{
        cout << tail->data << " ";
        tail = tail->next;

    }while (tail != temp);
    cout << endl;
}

void deleteNode(Node* &tail,int value){
    if(tail == NULL){
        cout << "list is empty" << endl;
    }
    else{
            //non - empty
        Node *prev = tail;
        Node *curr = prev->next;

        while(curr->data!=value){
            prev = curr;
            curr = curr->next;

        }

        prev->next = curr->next;
        //1 Node Linked list
        if(curr == prev){
            tail = NULL;
        }

        //>=2 Node linked list
        if(tail == curr){
            tail = prev;
        }

        
        curr->next = NULL;
        delete curr;
    }
}

int main()
{

    Node *tail = NULL;
    insertNode(tail, 3, 4);
    print(tail);
    deleteNode(tail, 4);
    print(tail);
    return 0;
}