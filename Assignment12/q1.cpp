//define the class deque with node type pointers front and rear as member variables implement queue using doubly linkedlist.
#include<iostream>
using namespace std;

struct node{
    node* prev;
    int item;
    node* next;
};

class queuedoublylinkedlist{
    private:
      node* rear;
      node* front;
};