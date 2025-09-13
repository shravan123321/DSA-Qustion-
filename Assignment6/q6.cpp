// Q1: Insert a node after a specified node in Circular Linked List
#include<iostream>
using namespace std;

struct node{
    int data;
    node* next;
};

class circularlinkedlist{
private:
    node* last;
public:
    circularlinkedlist();
    void insertdata(int);
    void insertspacificnode(int,int); // after key
    void showdata();
};

circularlinkedlist::circularlinkedlist(){
    last=nullptr;
}

void circularlinkedlist::insertdata(int data){
    node* n = new node;
    n->data = data;

    if(last==nullptr){
        last = n;
        n->next = n;
    } else {
        n->next = last->next;
        last->next = n;
        last = n;
    }
}

void circularlinkedlist::insertspacificnode(int key, int data) {
    if(last == nullptr) {
        cout << "List empty\n";
        return;
    }

    node* temp = last->next; // start from first node
    do {
        if(temp->data == key) {
            node* n = new node;
            n->data = data;
            n->next = temp->next;
            temp->next = n;

            if(temp == last)
                last = n;
            return;
        }
        temp = temp->next;
    } while(temp != last->next);

    cout << "Key not found\n";
}

void circularlinkedlist::showdata(){
    if(last==nullptr){
        cout<<"Linked list empty\n";
        return;
    }
    node* temp = last->next;  // first node
    do{
        cout << temp->data << " ";
        temp = temp->next;
    }while(temp != last->next);
    cout << endl;
}

int main(){
    circularlinkedlist c1;
    c1.showdata();

    c1.insertdata(100);
    c1.insertdata(200);
    c1.insertdata(300);
    c1.insertdata(400);

    cout<<"Circular linked list data: ";
    c1.showdata();

    int key ,data;
    cout<<"\nEnter the key: ";
    cin>>key;
    cout<<"Enter the data: ";
    cin>>data;

    c1.insertspacificnode(key,data);
    cout<<"Circular linked list after insert: ";
    c1.showdata();

    return 0;
}
