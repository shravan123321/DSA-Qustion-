//q1 and method to view rear and front elements in the queue linkedlist 
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
      bool Isempty();
      void insertdata(int);
      int showrear();
      int showfront();
      void showdata();

};

queuelinkedlist::queuelinkedlist(){
    rear=front=nullptr;
}

bool queuelinkedlist::Isempty(){
    return front==nullptr;
}

void queuelinkedlist::insertdata(int data){
  node* n=new node;
   n->item=data;
   n->next=nullptr;
   if(rear==nullptr){
       front=rear=n;
   }else{
    rear->next=n;
    rear=n;
   } 
}

int queuelinkedlist::showfront(){
    if(Isempty()){
      cout<<"queue is Empty ";
      return -1;
    }
    return front->item;
}

int queuelinkedlist::showrear(){
   if(Isempty()){
    cout<<"queue is Empty: ";
    return -1;
   }
   return rear->item;
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
    cout<<"queue data: ";
    q1.showdata();
   cout<<"show front data: "<<q1.showfront();
   cout<<endl;
   cout<<"show rear data: "<<q1.showrear();

   return 0;
}