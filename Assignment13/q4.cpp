//q1 and define a methods to delete highest priority elements
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
      void deletehighestelements();
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
void priorityqueue::showdata(){
    node* temp=start;
    if(start==nullptr){
        cout<<"priorityqueue is Empty: ";
        return ;
    }
    while(temp!=nullptr){
        cout<<temp->item<<" ";
        temp=temp->next;
    }
}

void priorityqueue::deletehighestelements() {
    if (start == nullptr) {
        cout << "priorityqueue is Empty\n";
        return;
    }

    node* maxNode = start;
    node* prevMax = nullptr;

    node* temp = start;
    node* prev = nullptr;

    while (temp != nullptr) {
        if (temp->item > maxNode->item) {
            maxNode = temp;
            prevMax = prev;
        }
        prev = temp;
        temp = temp->next;
    }

    if (prevMax == nullptr)
        start = start->next;
    else
        prevMax->next = maxNode->next;

    cout << "Deleted highest value: " << maxNode->item << endl;
    delete maxNode;
}


int main(){
    priorityqueue pq1;
    pq1.showdata();
    cout<<endl;
    pq1.insertdata(10);
    pq1.insertdata(70);
    pq1.insertdata(20);
    pq1.insertdata(30);
    pq1.insertdata(40);
    cout<<"priority Data: ";
    pq1.showdata();
    cout<<endl<<"delete the hight value: ";
    pq1.deletehighestelements();
    pq1.showdata();

    return 0;
}