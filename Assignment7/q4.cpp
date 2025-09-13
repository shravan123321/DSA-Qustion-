//q1 and define a methods to insert a data into the list at the end
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
        void insertdataend(int);
        void showdata();
};
circulardoublylinkedlist::circulardoublylinkedlist(){
     start=nullptr;
}

void circulardoublylinkedlist::insertdataend(int data){
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
    cout<<endl;
}

int main(){
    circulardoublylinkedlist c1;
    cout<<"Invalid data: ";
    c1.showdata();

    c1.insertdataend(100);
    c1.insertdataend(200);
    c1.insertdataend(300);
    c1.insertdataend(400);
    cout<<"circulardoubly linked list data: ";
    c1.showdata();
    
    return 0;
}