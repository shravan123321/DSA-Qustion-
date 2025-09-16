//q1 define a method to delete the front elements.
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
      queuedoublylinkedlist();
      bool Isempty();
      void insertdata(int);
      void deletefront();
      void showdata();
};

queuedoublylinkedlist::queuedoublylinkedlist(){
    front=rear=nullptr;
}

bool queuedoublylinkedlist::Isempty(){
    return (rear==nullptr);
}
 
void queuedoublylinkedlist::deletefront(){
    if(Isempty()){
        cout<<"queue is empty: ";
        return ;
    }else{
        node* temp=front;
    front=front->next;
    if(front){
        front->prev=nullptr;
    }else{
        rear=nullptr;
    }
    delete temp;
    
    }
}

void queuedoublylinkedlist::insertdata(int data){
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
        cout<<"queue Doublylinkedlist Data: Empty";
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
    qd1.insertdata(100);
    qd1.insertdata(200);
    qd1.insertdata(300);
    qd1.insertdata(400);
    cout<<"queue Data: ";
    qd1.showdata();
    cout<<"delete the front elements: ";
    qd1.deletefront();
    qd1.showdata();

    return 0;
}