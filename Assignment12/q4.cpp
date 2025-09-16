//q1 and define a methods to insert the new elements into rear.
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
      void insertdataend(int);
      void showdata();
};

queuedoublylinkedlist::queuedoublylinkedlist(){
    front=rear=nullptr;
}

bool queuedoublylinkedlist::Isempty(){
    return (front==nullptr);
}

void queuedoublylinkedlist::insertdataend(int data){
    node* n=new node;
    n->item=data;
    n->next=nullptr;
    n->prev=rear;
    if(rear==nullptr){
        front=rear=n;
    }else{
        rear->next=n;
        rear=n;
    }
}

void queuedoublylinkedlist::showdata(){
    if(Isempty()){
        cout<<"queue Is Empty: ";
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
    qd1.showdata();
    qd1.insertdataend(10);
    qd1.insertdataend(20);
    qd1.insertdataend(30);
    qd1.insertdataend(40);
    cout<<endl;
    cout<<"queue doublt linkeldist data: ";
    qd1.showdata();

    return 0;
}