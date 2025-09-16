//q1 and define the method to delete the rear elements.
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
      node*  rear;
    public:
      queuedoublylinkedlist();
      bool Isempty();
      void insertdatabeginning(int);
      void deleterear();
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

void queuedoublylinkedlist::deleterear(){
    if(Isempty()){
        cout<<"queue is empty: ";
        return ;
    }
    node* temp=rear;
    cout<<"delete the elements: "<<temp->item<<" \n";
    rear=rear->prev;
    if(rear){
        rear->next=nullptr;
    }else{
        front=nullptr;
    }
    delete temp;
}

void queuedoublylinkedlist::showdata(){
    if(Isempty()){
        cout<<"queue is Empty: ";
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
    qd1.insertdatabeginning(10);
    qd1.insertdatabeginning(20);
    qd1.insertdatabeginning(30);
    qd1.insertdatabeginning(40);
    cout<<"show elements: ";
    qd1.showdata();
    cout<<endl;
    qd1.deleterear();
    cout<<"delete the rear elements: ";
    qd1.showdata();
    return 0;
}