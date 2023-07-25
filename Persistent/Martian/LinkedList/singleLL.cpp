#include <bits/stdc++.h>

using namespace std;

class Node
{
  public:
    int data;
    Node* next;
};

void push(Node** head, int data)
{
  Node* new_node = new Node();
  new_node->data = data;
  new_node->next = (*head);
  (*head) = new_node;
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