//q1 and define a methods to delete a node frome the list.
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
      void deletefirst();
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

void circularlinkedlist::deletefirst(){
    if(start==nullptr){
        cout<<"list is Empty";
        return ;
    }

    if(start->next==start){
        delete start;
        start=nullptr;
        return;
    }
    node* last=start->prev;
    node* temp=start;

    start=start->next;
    start->prev=last;
    last->next=start;

    delete temp;
}

void circularlinkedlist::showdata(){
    node* n=start;
    if(start==nullptr){
        cout<<"circularlinked List Data: Empty";
        return ;
    }
    do{
        cout<<n->item<<" ";
        n=n->next;
    }while(n!=start);
    cout<<endl;
}

int main(){
  circularlinkedlist c1;
  cout<<"circularlinked data: ";
  c1.showdata();
  cout<<endl;
  
  c1.insertdata(10);
  c1.insertdata(20);
  c1.insertdata(30);
  c1.insertdata(40);
  c1.insertdata(50);
  cout<<"linkec data: ";
  c1.showdata();
  cout<<endl;

  cout<<"delete the first node: ";
  c1.deletefirst();
  c1.showdata();
  return 0;
}