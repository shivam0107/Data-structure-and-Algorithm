#include <bits/stdc++.h>
using namespace std;
    
 class Node{
    public:
    int data;
    Node* next;

    Node(int data){
        this->data = data;
        this->next = NULL;
    }

    ~Node(){

        // code for freeup memory;
        int value = this->data;
        if(this->next !=NULL){
            delete next;
            next = NULL;
        }

        cout << "memory is free for node with data" << value << endl;
    }
 };


// insertion at begennig 

 void insertAtHead(Node* &head,int d){
    Node *temp = new Node(d);
    temp->next = head;
    head = temp;
 }


// insertion at end

 void insertAtTail(Node* &tail ,int d){
    Node *temp = new Node(d);
    tail->next = temp;
    tail = tail->next;
 }

// insertiona t any position

 void insertAtPosition(Node* &tail,Node* &head,int position,int d){
    if(position == 1){
        insertAtHead(head, d);
        return;
    }

    Node *temp = head;
    int count = 1;
    while(count < (position-1)){
        temp = temp->next;
        count++;
    }

    if(temp->next == NULL){
        insertAtTail(tail, d);
        return;
    }

    Node *nodeToinsert = new Node(d);
    nodeToinsert->next = temp->next;
    temp->next = nodeToinsert;
 }

 // deletion from linked list

 void deleteNode(Node* &tail,Node* &head,int position){
    // deleting start node
    if(position == 1){
        Node *temp = head;
        head = head->next;
        temp->next = NULL;
        delete temp;
    }
    else{
        // deleting any middle node or last Node
        Node *curr = head;
        Node *prev = NULL;

        int count = 1;
        while(count < position){
            prev = curr;
            curr = curr->next;
            count++;
        }

        prev->next = curr->next;
        tail = prev;
        curr->next = NULL;
        delete curr;
    }
 }

 // print the nodes
 void print(Node* &head){
    Node *temp = head;
    while(temp!=NULL){
        cout << temp->data << " ";
        temp = temp->next;

    }
    cout << endl;
 }



int main()
{

    Node *node1 = new Node(10);

    Node *head = node1;
    Node *tail = node1;

    print(head);

    insertAtHead(head, 12);
    print(head);
    insertAtTail(tail, 13);
    print(head);
    insertAtPosition(tail,head,2, 19);
    print(head);
    insertAtPosition(tail,head, 1, 20);
    print(head);

    cout << "head " << head->data<<endl;
    cout << "tail " << tail->data<<endl;

    deleteNode(tail,head,1);
    print(head);
    deleteNode(tail,head, 4);
    print(head);
    deleteNode(tail, head, 3 );
    print(head);

    cout << "head " << head->data << endl;
    cout << "tail " << tail->data << endl;

    return 0;
}