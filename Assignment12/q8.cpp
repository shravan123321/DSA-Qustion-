//q1 and define a methods to getrear elements.
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
      int getrear();
      void showdata();
};

queuedoublylinkedlist::queuedoublylinkedlist(){
    front=rear=nullptr;
}
bool queuedoublylinkedlist::Isempty(){
    return (rear==nullptr);
}
void queuedoublylinkedlist::insertdata(int data){
    node* n=new node;
    n->item=data;
    n->next=nullptr;
    n->prev=rear;
    if(rear==nullptr){
        rear=front=n;
    }else{
        rear->next=n;
        rear=n;
    }
}

int queuedoublylinkedlist::getrear(){
    if(Isempty()){
        cout<<"queue is empty: ";
        return -1;
    }
    return rear->item;
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
    qd1.insertdata(10);
    qd1.insertdata(20);
    qd1.insertdata(30);
    qd1.insertdata(40);
    cout<<"queue data: ";
    qd1.showdata();
    cout<<"queue doubly linked list rear elements: "<<qd1.getrear();
    return 0;
}