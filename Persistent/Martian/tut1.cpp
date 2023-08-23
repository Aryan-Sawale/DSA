#include <bits/stdc++.h>

using namespace std;

void testFunc(int* num_ptr)
{
  // num_ptr -> val2
  *num_ptr = 7;
}

void testFunc2(int& num_ref)
{
  // num_ref = val2
  num_ref = 88;
}

void testFunc3(int** head_ptr)
{
  //  new_data 
  //  ^    ^
  // new_node head 
  //           ^
  //         head_ptr

  int new_data = 54;
  int* new_node = &new_data;
  *head_ptr = new_node;
}

void testFunc4(int*& head_ref)
{
  //  new_data 
  //  ^    ^
  // new_node head = head_ref 

  int new_data = 999;
  int* new_node = &new_data;
  head_ref = new_node;
}

class Node
{
  public:
    int data;
    Node* next;
};

void testFunc5(Node*& head_ref, int data)
{
  Node* new_node = new Node(); // new_node -> obj(data, next) in heap
  new_node -> data = data;
  new_node -> next = head_ref;
  head_ref = new_node;
}

int main()
{
  int val = 5; //4 bytes(val)
  // cout << val;
  // cout << &val;

  int* ptr = &val;
  // cout << *ptr;
  // ptr -> val

  int arr[] = {1, 2, 3, 4, 5};
  // data data data data data
  // ^
  // arr
  // cout << arr;
  // cout << *arr;
  // cout << arr << endl;
  // cout << arr + 1;
  // cout << *(arr + 1);
  // cout << arr[2];
  // arr[i] = *(arr + i)

  int val2 = 5;
  testFunc(&val2);
  // cout << val2;

  // ref = val
  int& ref = val2;
  ref = 77;
  // cout << val2;

  testFunc2(val2);
  // cout<<val2;

  //   data 
  //  ^    ^
  // node head 
  int data = 77;
  int* node = &data;
  int* head = node;
  testFunc3(&head);
  // cout << *head;
  testFunc4(head);
  // cout << *head;

  Node obj; //in stack, obj(data, next)
  obj.data = 33;
  obj.next = NULL;
  // cout << obj.data;

  Node* obj_ptr = &obj; //obj_ptr -> obj
  // cout << (*obj_ptr).data;  (brackets compulsary)
  // cout << obj_ptr -> data;
  // data, next   data, next
  //    ^    ^           ^
  //  node current      node

  Node* head_node = NULL;
  testFunc5(head_node, 776);
  // cout << head_node -> data;

  int* kek = new int; //kek -> memory(int) in heap
  int* arr_new = new int(5); // arr_new -> memory(5 integers)
  int arr_kek[5];
}