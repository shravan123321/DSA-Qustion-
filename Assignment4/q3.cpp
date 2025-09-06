//q1 and define the method to insert a data into the list at the begining
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
      void insertdatabeging(int);
      void showdata();
};

singlylinkedlist::singlylinkedlist(){
    start=nullptr;
}

void singlylinkedlist::insertdatabeging(int data){
    node* n=new node;
    n->item=data;
    n->next=start;
    start=n;
}

void singlylinkedlist::showdata(){
  node* temp=start;
   while(temp){
    cout<<temp->item<<" ";
    temp=temp->next;
  }
}


int main(){
    singlylinkedlist s1;
    cout<<"linkedlist data: ";
    s1.showdata();
    cout<<endl;
    s1.insertdatabeging(10);
    s1.insertdatabeging(20);
    s1.insertdatabeging(30);
   
    cout<<"linkedlist data: ";
    s1.showdata();

 return 0;
}

