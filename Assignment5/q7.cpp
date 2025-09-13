//q1 and define the methods to delete first node from the list
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
      void deletefirstnode();
      void showdata();
};

doublylinkedlist::doublylinkedlist(){
    start=nullptr;
}

void doublylinkedlist::insertdata(int data){
    node*n =new node;
    n->item=data;
    n->next=nullptr;
    if(start==nullptr){
        n->prev=nullptr;
        start=n;
    }else{
        node* temp=start;
        while(temp->next!=nullptr){
            temp=temp->next;
        }
        temp->next=n;
        n->prev=temp;
    }
}

void doublylinkedlist::deletefirstnode(){
    if(start == nullptr){
        cout << "List is empty\n";
        return;
    }
    node* temp = start;
    start = start->next;
    if(start != nullptr)
        start->prev = nullptr;
    delete temp;
}


void doublylinkedlist::showdata(){
    node* n=start;
    while(n!=nullptr){
        cout<<n->item<<" ";
        n=n->next;
    }
    cout<<endl;
}

int main(){
    doublylinkedlist d1;
    cout<<"doublylinked data: ";
    d1.showdata();
    cout<<endl;

    d1.insertdata(10);
    d1.insertdata(20);
    d1.insertdata(30);
    d1.insertdata(40);
    cout<<"doublylinkedlist data: ";
    d1.showdata();
    cout<<endl;

    cout<<"delete the data first node: ";
    d1.deletefirstnode();
    d1.showdata();

    return 0;
}