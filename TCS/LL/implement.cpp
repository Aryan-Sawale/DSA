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

class LinkedList
{
public:
  Node *head = NULL;

  void insert(int data)
  {
    Node *new_node = new Node(data);
    if (this->head == NULL)
    {
      head = new_node;
    }
    else
    {
      Node *temp = this->head;
      while (temp->next != NULL)
      {
        temp = temp->next;
      }

      temp->next = new_node;
    }
  }

  void printList()
  {
    Node *temp = this->head;
    while (temp->next != NULL)
    {
      cout << temp->data << " -> ";
      temp = temp->next;
    }

    cout << temp->data;
  }
};

int main()
{
  LinkedList ll;
  ll.insert(8);
  ll.insert(7);
  ll.insert(88);
  ll.printList();
}