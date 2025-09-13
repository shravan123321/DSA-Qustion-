//q1 and define a methods to insert data into the list after the spacific node of the list
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
        void insertdata(int);
        void insertspacificnode(int,int);
        void showdata();

};

circulardoublylinkedlist::circulardoublylinkedlist(){
         start=nullptr;
}

void circulardoublylinkedlist::insertdata(int data){
    node* n=new node;
    n->item=data;

    if(start==nullptr){
        n->next=n;
        n->prev=n;
        start=n;
    }else{
        node* temp=start->prev;
        n->next=start;
        n->prev=temp;
        temp->next=n;
        start->prev=n;
    }
}

void circulardoublylinkedlist::insertspacificnode(int key, int data) {
    if (start == nullptr) {
        cout << "List is empty\n";
        return;
    }

    node* temp = start;
    do {
        if (temp->item == key) {
            node* n = new node;
            n->item = data;

            node* nextNode = temp->next;

            n->next = nextNode;
            n->prev = temp;

            temp->next = n;
            nextNode->prev = n;

            return;  // inserted successfully
        }
        temp = temp->next;
    } while (temp != start);

    cout << "Key not found\n";
}


void circulardoublylinkedlist::showdata(){
    node* n=start;
    if(start==nullptr){
        cout<<"list is empty:";
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
    c1.insertdata(100);
    c1.insertdata(200);
    c1.insertdata(300);
    c1.insertdata(400);
    c1.insertdata(500);
    cout<<"circulardoublylinked list data: ";
    c1.showdata();
    cout<<endl;
    cout<<"insert data after the spacific node: ";
    c1.insertspacificnode(300,350);
    c1.showdata();
    return 0;
}