//qustion1 and define the methods to insert a data into a list at the begining
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
      void insertdata(int);
      void showdata();

};

doublylinkedlist::doublylinkedlist(){
    start=nullptr;
}

void doublylinkedlist::insertdata(int data){
    node* n=new node;
    n->item=data;
    n->next=nullptr;
    n->next=start;
    if(start!=nullptr)
        start->prev=n;
    start=n;  
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
    cout<<"Initially: ";
    d1.showdata();
    d1.insertdata(100);
    d1.insertdata(200);
    d1.insertdata(300);

    cout<<"Doublylinkedlist data: ";
    d1.showdata();
    return 0;

}