//define a queue with node type pointer front and rear as member variables implements queue using singly linked list.
#include<iostream>
using namespace std;
struct node{
    int item;
    node* next;
};

class queuelinkedlist{
      node* front;
      node* rear;
};