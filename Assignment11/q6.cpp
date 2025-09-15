//q1 and define the destructore to dealllocated the memory.
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
      bool Isempty();
      ~queuelinkedlist();
      void insertdata(int);
      void showdata();
};

queuelinkedlist::queuelinkedlist(){
    front=rear=nullptr;
}

bool queuelinkedlist::Isempty(){
    return front==nullptr;
}

queuelinkedlist::~queuelinkedlist(){
    while(front!=nullptr){
        node* temp=front;
        front=front->next;
        delete temp;
    }
    rear=nullptr;
    cout<<"all nodes deleted: ";
}

void queuelinkedlist::insertdata(int data){
    node* n=new node;

    n->item=data;
    n->next=nullptr;
    if(rear==nullptr){
        rear=front=n;
    }else{
        rear->next=n;
        rear=n;
    }
}

void queuelinkedlist::showdata(){
    node* temp=front;
    if(Isempty()){
        cout<<"queue is empty: ";
        return ;
    }
    while(temp!=nullptr){
        cout<<temp->item<<" ";
        temp=temp->next;
    }
    cout<<endl;
}


int main(){
    queuelinkedlist q1;
    q1.insertdata(100);
    q1.insertdata(200);
    q1.insertdata(300);
    q1.insertdata(400);
    q1.insertdata(500);
    cout<<"queue elements: ";
    q1.showdata();
    cout<<endl;
    q1.~queuelinkedlist();
    cout<<endl;
    cout<<"delete the all elements: ";
    q1.showdata();

    return 0;
}