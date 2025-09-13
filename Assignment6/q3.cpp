//q1 and define a methods to insertdata into last at the begin
#include<iostream>
using namespace std;

struct node{
    int item;
    node* next;
};

class circularlinkedlist{
private:
    node* last;
public:
    circularlinkedlist();
    void insertatbeginning(int);
    void showdata();
};

circularlinkedlist::circularlinkedlist(){
    last = nullptr;
}

void circularlinkedlist::insertatbeginning(int data){
    node* n = new node;
    n->item = data;

    if(last == nullptr){ // first node
        n->next = n;
        last = n;
    } else {
        n->next = last->next;
        last->next = n;
    }
}

void circularlinkedlist::showdata(){
    if(last == nullptr){
        cout << "List is empty";
        return;
    }

    node* p = last->next; // first node
    do{
        cout << p->item << " ";
        p = p->next;
    }while(p != last->next);
}

int main(){
    circularlinkedlist c1;
    
    c1.showdata();  // empty case
    cout << endl;

    c1.insertatbeginning(10);
    c1.insertatbeginning(20);
    c1.insertatbeginning(30);
    c1.insertatbeginning(40);

    cout << "Circular Linked List Data: ";
    c1.showdata();

    return 0;
}
