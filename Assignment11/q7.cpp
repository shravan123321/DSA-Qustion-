//q1 and define the methods to count number of elements prent in the queue linkedlist.
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
      bool Isempty(){ return front==nullptr;}
      int countelements();
      void insertdata(int);
      void showdata();
};

queuelinkedlist::queuelinkedlist(){
    front=rear=nullptr;
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

int queuelinkedlist::countelements(){
    if(Isempty()){
        cout<<"data is empty ";
        return 0;
    }
    int c=0;
    node* count=front;
    while(count!=nullptr){
       c++;
       count=count->next;
    }
    return c;
    
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
    q1.insertdata(10);
    q1.insertdata(20);
    q1.insertdata(30);
    q1.insertdata(40);
    cout<<"queue elements: ";
    q1.showdata();
     cout<<endl;
     cout<<"count the elements: "<<q1.countelements()<<endl;

     return 0;
}