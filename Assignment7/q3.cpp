//q1 and define a methods to insert the data into the list at the beginning
#include<iostream>
using namespace std;
struct node{
    node* prev;
    int item;
    node* next;
};
class circulardoublylinkedlist{
    private:
        node* start;
    public:
       circulardoublylinkedlist();
       void insertdatabeginning(int data);
       void showdata();
};

circulardoublylinkedlist::circulardoublylinkedlist(){
    start=nullptr;
}

void circulardoublylinkedlist::insertdatabeginning(int data){
  node* n=new node;
  n->item=data;
  if(start==nullptr){
    n->next=n;
    n->prev=n;
    start=n;
  }else{
    node* test=start->prev;
    n->next=start;
    n->prev=test;
    test->next=n;
    start->prev=n;
    start=n;
  }
}

void circulardoublylinkedlist::showdata(){
    node* n=start;
    if(start==nullptr){
        cout<<"list is empty: ";
        return ;
    }
    do{
        cout<<n->item<<" ";
        n=n->next;
    }while(n!=start);
    cout<<"endl";
}

int main(){
    circulardoublylinkedlist c1;
    cout<<"Initially: ";
    c1.showdata();
    c1.insertdatabeginning(100);
    c1.insertdatabeginning(200);
    c1.insertdatabeginning(300);

    cout<<"circular doubly linked list data: ";
    c1.showdata();
    return 0;
}