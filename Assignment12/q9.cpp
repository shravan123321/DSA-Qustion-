//q1 and define a destructore to deallocate the memory.
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
    public:
      ~queuedoublylinkedlist();
};

queuedoublylinkedlist::~queuedoublylinkedlist(){
    node* temp=front;
    while(temp){
        node* newnode=temp->next;
        delete temp;
        temp = newnode;
    }
    front=rear=nullptr;
}