//q1 and define the method to insert data into the list after the spacified node of the list
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
    void insertdata(int);            // insert at end
    void insertdataafter(int,int);   // insert after key
    void showdata();
};

doublylinkedlist::doublylinkedlist(){
    start=nullptr;
}

void doublylinkedlist::insertdata(int data){
    node* n=new node;
    n->item=data;
    n->next=nullptr;
    n->prev=nullptr;
    if(start==nullptr){
        start=n;
    }else{
        node* t=start;
        while(t->next != nullptr){   // ✅ fixed
            t=t->next;
        }
        t->next=n;
        n->prev=t;
    }
}

void doublylinkedlist::insertdataafter(int key, int data){
    node* t = start;
    while(t && t->item != key)
        t = t->next;
    if(t){
        node* n = new node;
        n->item = data;
        n->next = t->next;
        n->prev = t;
        if(t->next != nullptr)
            t->next->prev = n;
        t->next = n;
    } else {
        cout << "Node with item " << key << " not found\n";
    }
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
    cout<<"linkedlist data: ";
    d1.showdata();
    cout<<endl;

    d1.insertdata(100);
    d1.insertdata(200);
    d1.insertdata(300);
    d1.insertdata(400);

    cout<<"doublelinkeslist data: ";
    d1.showdata();
    cout<<endl;

    int key,data;
    cout<<"enter the key: ";
    cout<<"enter the data: ";
    cin>>key>>data;

    d1.insertdataafter(key,data);

    cout<<"doublylinkedlist data: ";
    d1.showdata();

    return 0;
}

