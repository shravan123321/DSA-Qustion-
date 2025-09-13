//q1 and define the methods to delete the last node of the list
#include<iostream>
using namespace std;
struct node{
    node* prev;
    int item;
    node* next;
};

class circularlinkedlist{
    private:
      node* start;
    public:
      circularlinkedlist();
      void insertdata(int);
      void deletelast();
      void showdata();
};

circularlinkedlist::circularlinkedlist(){
    start=nullptr;
}

void circularlinkedlist::insertdata(int data){
    node* n=new node;
    n->item=data;

    if(start==nullptr){
        n->next=n;
        n->prev=n;
        start=n;
    }else{
        node* last=start->prev;
        n->next=start;
        n->prev=last;

        last->next=n;
        start->prev=n;
    }
}

void circularlinkedlist::deletelast(){
  if(start==nullptr){
    cout<<"circularlinked list data: Empty";
    return ;
  }
  if(start->next==start){
    delete start;
    start=nullptr;
    return ;
  }
  node* last =start->prev;
  node* secondlist=last->prev;

  secondlist->next=start;
  start->prev=secondlist;

  delete last;
}

void circularlinkedlist::showdata(){
    node* temp=start;
    if(start==nullptr){
        cout<<"circularlinked list data: Empty";
        return ;
    }
    do{
        cout<<temp->item<<" ";
        temp=temp->next;
    }while(temp!=start);
    cout<<endl;
}

int main(){
    circularlinkedlist c1;
    cout<<"circularlinked list data: ";
    c1.showdata();
    cout<<endl;
    c1.insertdata(1000);
    c1.insertdata(2000);
    c1.insertdata(3000);
    c1.insertdata(4000);
    cout<<"circularlinkedlist data: ";
    c1.showdata();
    cout<<endl;
    c1.deletelast();
    cout<<"delete last node data: ";
    c1.showdata();
    return 0;
}