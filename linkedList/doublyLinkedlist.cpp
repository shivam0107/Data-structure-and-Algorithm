//doubly linked list

#include <bits/stdc++.h>
using namespace std;
    
 class Node{
    public:
        int data;
        Node *prev;
        Node *next;


        Node(int d){
            this->data = d;
            this->next = NULL;
            this->prev = NULL;
        }

        ~Node(){
            int val = this->data;
            if(next != NULL){
                delete next;
                next = NULL;
            }

            cout << "memory free fro node with data" << val << endl;
        }
 };


// traversing list
 void print(Node* head){
        Node *temp = head;
        while(temp!= NULL){
            cout << temp->data<<" ";
            temp = temp->next;
        }

        cout << endl;
 }

 // finding the length of the list;
 int getLength(Node *head)
 {
        int len = 0;
        Node *temp = head;
        while (temp != NULL)
        {
            len++;
            temp = temp->next;
        }

        return len;
 }

void insertAtHead(Node* &head,Node* &tail ,int d){

        if(head == NULL){
            Node *temp = new Node(d);
            head = temp;
            tail = temp;
        }
        else{
            Node *temp = new Node(d);
            temp->next = head;
            head->prev = temp;
            head = temp;
        }
        
    }

void insertAtTail(Node* &tail,Node* &head,int d){

        if (tail == NULL)
        {
            Node *temp = new Node(d);
            tail = temp;
            head = temp;
        }
        else
        {
            Node *temp = new Node(d);
            tail->next = temp;
            temp->prev = tail;
            tail = temp;
        }
       
}

void insertAtPosition(Node* &tail,Node* &head,int position,int d){
        // insert at start;
        if (position == 1)
        {
            insertAtHead(head,tail, d);
            return;
        }

        Node *temp = head;
        int count = 1;
        while (count < (position - 1))
        {
            temp = temp->next;
            count++;
        }

        if (temp->next == NULL)
        {
            insertAtTail(tail,head, d);
            return;
        }
        //creating node
        Node *nodeToinsert = new Node(d);
        nodeToinsert->next = temp->next;
        temp->next->prev = nodeToinsert;
        temp->next = nodeToinsert;
        nodeToinsert->prev = temp;
}

void deleteNode(Node *&tail, Node *&head, int position)
{
        // deleting start node
        if (position == 1)
        {
            Node *temp = head;
            temp->next->prev = NULL;
            head = temp->next;
            temp->next = NULL;
            delete temp;
        }
        else
        {
            // deleting any middle node or last Node
            Node *curr = head;
            Node *prev = NULL;

            int count = 1;
            while (count < position)
            {
                prev = curr;
                curr = curr->next;
                count++;
            }

            curr->prev = NULL;
            prev->next = curr->next;
            tail = prev;
            curr->next = NULL;
            delete curr;
        }
}

int main()
{
        // Node *node1 = new Node(10);
        Node *head = NULL;
        Node *tail = NULL;

        print(head);
        cout << getLength(head) << endl;

        insertAtHead(head,tail, 11);
        print(head);
        insertAtHead(head,tail, 15);
        print(head);
        insertAtHead(head,tail, 17);
        print(head);
        insertAtTail(tail,head, 19);
        print(head);
        insertAtPosition(tail, head, 2, 100);
        print(head);
        insertAtPosition(tail, head, 3, 100);
        print(head);
        insertAtPosition(tail, head, 7, 100);
        print(head);
        deleteNode(tail, head, 1);
        print(head);
        deleteNode(tail, head, 3);
        print(head);
        deleteNode(tail, head, 5);
        print(head);
        cout << "head " << head->data << endl;
        cout << "tail " << tail->data << endl;
        deleteNode(tail, head, 4);
        print(head);
        cout << "head " << head->data << endl;
        cout << "tail " << tail->data << endl;
        return 0;
}