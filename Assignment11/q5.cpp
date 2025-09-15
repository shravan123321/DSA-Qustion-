//q1 and define a methods to delete the front elements of queue.
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
      void deletefront();
      void insertdata(int);
      void showdata();
};

queuelinkedlist::queuelinkedlist(){
       front=rear=nullptr;
}
bool queuelinkedlist::Isempty(){
    return front==nullptr;
}
void queuelinkedlist::insertdata(int data){
    node* n=new node;

    n->item=data;
    n->next=nullptr;
    if(front==nullptr){
        front=rear=n;
    }else{
        rear->next=n;
        rear=n;
    }
}
void queuelinkedlist::deletefront(){
    if(Isempty()){
        cout<<"Queue is empty.\n";
        return;
    }

    node* temp = front;       // sirf ek hi baar declare karein
    front = front->next;

    if(front == nullptr){     // agar last element delete hua
        rear = nullptr;
    }

    delete temp;               // memory free karein
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
    cout<<"queue linkedlist data: ";
    q1.showdata();
    cout<<"delete the front node: ";
    q1.deletefront();
    cout<<endl;
    cout<<"queue linkedlist data: ";
    q1.showdata();
    

    return 0;
}