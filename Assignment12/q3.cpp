//define the methods to insert a new elements at the front.
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
      void insertdatabeginning(int);
      void showdata();
};

queuedoublylinkedlist::queuedoublylinkedlist(){
    front=rear=nullptr;
}
bool queuedoublylinkedlist::Isempty(){
    return (front==nullptr);
}
void queuedoublylinkedlist::insertdatabeginning(int data){
    node* n=new node;
    n->item=data;
    n->prev=nullptr;
    n->next=front;
    if(front==nullptr){
        front=rear=n;
    }else{
        front->prev=n;
        front=n;
    }

}

void queuedoublylinkedlist::showdata(){
   if(Isempty()){
    cout<<"queue Doublylinkedlist Is Empty: ";
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
    cout<<"queue Doubly linkedlist data: ";
    qd1.showdata();
    qd1.insertdatabeginning(100);
    qd1.insertdatabeginning(200);
    qd1.insertdatabeginning(300);
    qd1.insertdatabeginning(400);
     cout<<endl;
     cout<<"queue Doubly linkedlist data: ";
     qd1.showdata();

     return 0;
}