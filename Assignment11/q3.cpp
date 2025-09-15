//q1 and define a methods to insert a new elements at rear in the queue.
#include<iostream>
using namespace std;
struct node{
    int item;
    node* next;
};

class queuelinkedlist{
    private:
      node* front;
      node* rear;
    public:
      queuelinkedlist();
      void insertdata(int);
      void showdata();
};

queuelinkedlist::queuelinkedlist(){
    rear=front=nullptr;
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
    cout<<"queue linkedlist data: ";
    q1.showdata();

    return 0;
}