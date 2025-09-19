//q1 and define a methods to get highest priority elements 
#include<iostream>
using namespace std;
struct node{
    int item;
    node* next;
};

class priorityqueue{
    private:
     node* start;
    public:
      priorityqueue();
      void insertdata(int);
      int heightelements();
      void showdata();
};

priorityqueue::priorityqueue(){
    start=nullptr;
}

void priorityqueue::insertdata(int data){
    node* n=new node;
    n->item=data;
    n->next=start;
    start=n;
}

int priorityqueue::heightelements(){
    if(start==nullptr){
        cout<<"priority Data: Empty";
        return -1;
    }
    return start->item;
}

void priorityqueue::showdata(){
    if(start==nullptr){
        cout<<"priorityqueue is Empty ";
        return ;
    }
    node* temp = start;
    while(temp!=nullptr){
        cout<<temp->item<<" ";
        temp=temp->next;
    }
}

int main(){
    priorityqueue pq1;
    pq1.showdata();
    cout<<endl;
    pq1.insertdata(10);
    pq1.insertdata(20);
    pq1.insertdata(30);
    pq1.insertdata(40);
    cout<<"height number: "<<pq1.heightelements();
    cout<<endl;
    cout<<"priorityqueue Data: ";
    pq1.showdata();
    return 0;
}