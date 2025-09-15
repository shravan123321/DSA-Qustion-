//q1 and define a constructor to initialise member variable.
#include<iostream>
using namespace std;
struct node{
    int item;
    node* next;
};

class queuelinkedlist{
    private:
      node* rear;
      node* front;
    public:
       queuelinkedlist();
};

queuelinkedlist::queuelinkedlist(){
 front=rear=nullptr;
}

