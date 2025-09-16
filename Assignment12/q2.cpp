//q1 and define a constructor to initalise member variable.
#include<iostream>
using namespace std;

struct node{
    node* prev;
    int item;
    node* next;
};

class queuedoublylinkedlist{
    private:
      node* front;
      node* rear;
    public:
      queuedoublylinkedlist();
};

queuedoublylinkedlist::queuedoublylinkedlist(){
    front=rear=nullptr;
}