//q1 and define a methods to get front elements.
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
      bool Isempty();
      void insertdata(int);
      int getfront();
      void showdata();
};

queuedoublylinkedlist::queuedoublylinkedlist(){
    front=rear=nullptr;
}

bool queuedoublylinkedlist::Isempty(){
    return (front==nullptr);
}

void queuedoublylinkedlist::insertdata(int data){
    node* n=new node;
    n->item=data;
    n->next=nullptr;
    n->prev=nullptr;
    if(rear==nullptr){
        rear=front=n;
    }else{
       rear->next=n;
       n->prev=rear;
       rear=n;
    }
}

int queuedoublylinkedlist::getfront(){
    if(Isempty()){
        cout<<"queue is empty: ";
        return -1;
    }
    return front->item;
}

void queuedoublylinkedlist::showdata(){
    if(Isempty()){
        cout<<"queue is empty: ";
        return ;
    }else{
          
    node* temp=front;
    while(temp){
        cout<<temp->item<<" ";
        temp=temp->next;
    }
    }
    cout<<endl;
}

int main(){
    queuedoublylinkedlist qd1;
    qd1.insertdata(1);
    qd1.insertdata(2);
    qd1.insertdata(3);
    qd1.insertdata(4);
    qd1.insertdata(5);
    cout<<"queue data: ";
    qd1.showdata();
    cout<<"queue data front: "<<qd1.getfront();
    return 0;
}