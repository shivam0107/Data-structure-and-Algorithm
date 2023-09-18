/*
      reverse a linked list 

      1 -> 23 -> 12 -> null

      first make a prev node with null value 
      curr node = head,
      and froward node 

      set froward =  curr -> next  
      then curr -> next =  prev par set with NULL value
      prev  = cuur
      curr = forward 


      this is for one iteration 

      iteratively solution


      time complexity = O(n)
      space complexity = O(1)

*/




#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
   int data;
   Node *next;

   Node(int data)
   {
      this->data = data;
      this->next = NULL;
   }
};

void reverse(Node* &head , Node* curr , Node* prev){
      if(curr == NULL){
      head = prev;
      return;
   }

   Node *forward = curr->next;
   reverse(head, forward, curr);

   curr->next = prev;
}

Node* reverseList(Node *head)
{

   // if (head == NULL || head->next == NULL)
   // {
   //    return head;
   // }

   Node *prev = NULL;
   Node *curr = head;

   reverse(head, curr, prev);
   // Node *forward = NULL;

   // while (curr != NULL)
   // {
   //    forward = curr->next;
   //    curr->next = prev;
   //    prev = curr;
   //    curr = forward;
   // }

   return head;
}

void print(Node *&head)
{
   Node *temp = head;
   while (temp != NULL)
   {
      cout << temp->data << " ";
      temp = temp->next;
   }
   cout << endl;
}

int main()
{
   Node *node1 = new Node(10);
   Node *node2 = new Node(12);
   Node *node3 = new Node(13);

   Node *head = node1;
   head->next = node2;
   head->next->next = node3;
   print(head);
   head = reverseList(head);
   print(head);

   return 0;
}