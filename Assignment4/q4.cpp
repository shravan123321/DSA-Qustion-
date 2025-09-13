//define the methods to insert the data into the list at the end
#include<iostream>
using namespace std;
struct node{
    int item;
    node* next;
};

class singlylinkedlist{
    private:
      node* start;
    public:
      singlylinkedlist();
      void insertdataend(int);
      void showdata();
};
singlylinkedlist::singlylinkedlist(){
    start=nullptr;
}
void singlylinkedlist::insertdataend(int data){
    node* n=new node;
    node* t;
    n->item=data;
    n->next=nullptr;
    if(start==nullptr){
        start=n;
    }else{
      t=start;
        while(t->next!=nullptr)
          t=t->next;
        t->next=n;
    }
}

void singlylinkedlist::showdata(){
    node* temp=start;
    while(temp){
        cout<<temp->item<<" ";
        temp=temp->next;
    }
    cout<<endl;
}


int main(){
    singlylinkedlist s1;
    cout<<"linkedlist data:";
    s1.showdata();
    cout<<endl; 
    s1.insertdataend(10);
    s1.insertdataend(20);
    s1.insertdataend(30);
    cout<<"linkedlist data: ";
     s1.showdata();
}