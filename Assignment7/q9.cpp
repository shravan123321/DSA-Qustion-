//q1 and define a methods to delete the spacific node.
#include<iostream>
using namespace std;
struct node{
    node* prev;
    int item;
    node* next;
};

class circularlinkedlist{
    private:
      node* start;
    public:
      circularlinkedlist();
      void insertdata(int);
      void deletespacific(int key);
      void showdata();
};

circularlinkedlist::circularlinkedlist(){
    start=nullptr;
}

void circularlinkedlist::insertdata(int data){
    node* n=new node;
    n->item=data;

    if(start==nullptr){
        n->next=n;
        n->prev=n;
        start=n;
    }else{
        node* last=start->prev;
        n->next=start;
        n->prev=last;

        last->next=n;
        start->prev=n;
    }
}

void circularlinkedlist::deletespacific(int key){
  if(start==nullptr){
    cout<<"circularlinked list data: Empty";
    return ;
  }
     node* curr = start;

    // search key
    do {
        if (curr->item == key) {
            // agar sirf 1 node hai
            if (curr->next == curr) {
                delete curr;
                start = nullptr;
                return;
            }

            node* prevNode = curr->prev;
            node* nextNode = curr->next;

            prevNode->next = nextNode;
            nextNode->prev = prevNode;

            // agar delete hone wala node start hai
            if (curr == start)
                start = nextNode;

            delete curr;
            return;
        }
        curr = curr->next;
    } while (curr != start);

    cout << "Node not found\n";
}
void circularlinkedlist::showdata(){
    node* n=start;
    if(start==nullptr){
        cout<<"circular linkedlist data: Empty";
        return ;
    }
    do{
        cout<<n->item<<" ";
        n=n->next;
    }while(n!=start);
    cout<<endl;
}

int main(){
    circularlinkedlist c1;
    cout<<"circularlinked list data: ";
    c1.showdata();
    cout<<endl;
    c1.insertdata(1000);
    c1.insertdata(2000);
    c1.insertdata(3000);
    c1.insertdata(4000);
    cout<<"circularlinkedlist data: ";
    c1.showdata();
    cout<<endl;
    c1.deletespacific(4000);
    cout<<"delete last node data: ";
    c1.showdata();
    return 0;
}