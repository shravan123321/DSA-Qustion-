//q1 and define a method to insert a data into the list at the end
#include<iostream>
using namespace std;
struct node{
    node* prev;
    int item;
    node* next;
};

class doublylinkedlist{
    private:
      node* start;
    public:
       doublylinkedlist();
       void insertdataend(int);
       void showdata();
};

doublylinkedlist::doublylinkedlist(){
    start=nullptr;
}

void doublylinkedlist::insertdataend(int data){
    node* n=new node;
    n->item=data;
    n->next=nullptr;
    if(start==nullptr){
        n->prev=nullptr;
        start=n;
    }else{
        node* t=start;
        while(t->next!=nullptr)
            t=t->next;
        n->prev=t;
        t->next=n;
    }
}

void doublylinkedlist::showdata(){
    node* temp=start;
    while(temp!=nullptr){
        cout<<temp->item<<" ";
        temp=temp->next;
    }
    cout<<endl;
}


int main(){
    doublylinkedlist d1;
    cout<<"doublylinkeslist data: ";
    d1.showdata();
      cout<<endl;
    d1.insertdataend(100);
    d1.insertdataend(200);
    d1.insertdataend(300);
    d1.insertdataend(400);

    cout<<"doublylinledlist data: ";
    d1.showdata();
    
    return 0;
}