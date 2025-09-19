//q1 and define a methods a destructor to deallocate the memory
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
      ~priorityqueue();
      void insertdata(int);
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

priorityqueue::~priorityqueue() {
    while (start != nullptr) {
        node* temp = start;
        start = start->next;
        delete temp;
    }
    cout << "\nAll nodes deleted\n";
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
    pq1.showdata();

    cout<<endl;
    pq1.~priorityqueue();
    cout<<endl;
    cout<<"priorityqueue Data: ";
    pq1.showdata();
    return 0;
}