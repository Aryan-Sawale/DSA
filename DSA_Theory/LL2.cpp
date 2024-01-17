#include <bits/stdc++.h>

using namespace std;

class Node
{
  public:
    int data;
    Node* next;
};

void push(Node** head_ptr, int data)
{
  Node* new_node = new Node();
  new_node->data = data;
  new_node->next = (*head_ptr);
  (*head_ptr) = new_node;
}

void append(Node** head, int data)
{
  Node* new_node = new Node();
  new_node->data = data;
  new_node->next = NULL;

  Node* current = (*head);
  while (current->next != NULL)
  {
    current = current->next;
  }
  current->next = new_node;
}

void printList(Node** head)
{
  Node* current = (*head);
  while (current != NULL)
  {
    cout << current->data << " ";
    current = current->next;
  }
  cout<<endl;
}

/*
INSERT AFTER
  new_node->data = new_data;
  new_node->next = prev_node->next;
  prev_node->next = new_node;
*/

bool search(Node* head, int x)
{
  Node* current = head; 
  while (current != NULL) {
      if (current->data == x)
          return true;
      current = current->next;
  }
  return false;
}

int getCount(Node* head)
{
  int count = 0; 
  Node* current = head; 
  while (current != NULL) {
      count++;
      current = current->next;
  }
  return count;
}

void reverseList(Node** head)
{ 
  Node* prev = NULL;
  Node* next = NULL;
  Node* current = (*head);
  while (current != NULL)
  { 
    next = current->next;
    current->next = prev;

    prev = current;
    current = next;
  }

  (*head) = prev;
}

int main()
{
  Node* head = NULL;
  push(&head, 10);
  push(&head, 13);
  push(&head, 7);
  append(&head, 99);
  printList(&head);
  reverseList(&head);
  printList(&head);
}

/*

#include <bits/stdc++.h>

using namespace std;

class Node {
  public:
    int data;
    Node* next;
};


void push(Node*& head_ref, int data)
{
  // obj(data, next)
  //   ^        ^
  // new_node head
  Node* new_node = new Node();
  new_node -> data = data;
  new_node -> next = head_ref;
  head_ref = new_node;
}

void append(Node* head_ref, int data)
{
  //   obj      obj obj obj
  //  ^                 ^
  // head              curr
  Node* new_node = new Node();
  new_node -> next = NULL;
  new_node -> data = data;

  Node* curr = head_ref;
  // The next pointer of last element will be NULL
  // while (curr is not last element) i.e while (curr -> next is not NULL)
  while (curr -> next != NULL)
  {
    curr = curr -> next;
  }

  curr -> next = new_node;
}

void printList(Node*& head_ref)
{
  //  obj(data, next)        obj obj obj
  //  ^    ^
  // Head curr
  Node* curr = head_ref;
  while (curr != NULL) 
  {
    cout << curr -> data << " ";
    // to move curr to the next object
    curr = curr -> next;
  }
   cout << endl;
}

bool findInt(Node*& head_ref, int data)
{
  Node* curr = head_ref;
  while (curr != NULL)
  {
    if (curr -> data == data) return true;
    curr = curr -> next;
  }

  return false;
}


void reverseLL(Node*& head_ref)
{
  // node -> node -> node -> node
  // convert to
  // node <- node <- node <- node

  // node <- node <- node   <-    node <-  node 
  //    ^     ^      ^
  //  prev  curr    nextPtr

  Node* curr = head_ref;
  Node* prev = NULL;
  Node* nextPtr = head_ref;

  while (curr != NULL)
  {
    // next pointer will be 1 step ahead
    nextPtr = curr -> next;

    // point the current node to it's previous node (node <- node)
    curr -> next = prev;

    // move the prev pointer ahead
    prev = curr;

    // move the curr pointer ahead
    curr = nextPtr;
  }

  // at the end of while loop, prev will be on last node and curr will be NULL
  head_ref = prev;
}

int main()
{
  Node* head = NULL;
  push(head, 77);
  push(head, 99);
  append(head, 88);
  append(head, 658);
  printList(head);
  reverseLL(head);
  printList(head);
}

*/