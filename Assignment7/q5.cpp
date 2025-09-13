//q1 and define a methods to serch a node with given item 
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
       void serchdata(int);
       void showdata();
};

circulardoublylinkedlist::circulardoublylinkedlist(){
     start=nullptr;
}

void circulardoublylinkedlist::insertdata(int data){
    node*n=new node;
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

void circulardoublylinkedlist::serchdata(int key){
    if(start==nullptr){
        cout<<"list is empty data: ";
        return ;
    }
    node* temp=start;
    do{
        if(temp->item==key){
            cout<<"item "<<key<<"found in the list"<<endl;
            return ;
        }

    }while(temp!=start);
}

void circulardoublylinkedlist::showdata(){
    node* n=start;
    if(start==nullptr){
        cout<<"list is empty: ";
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
    int key;
    cout<<"enter the item to serch the given key: ";
    cin>>key;

    cout<<"Invalid  data: ";
    c1.showdata();
    cout<<endl;
    c1.serchdata(key);
    cout<<endl;

    c1.insertdata(100);
    c1.insertdata(200);
    c1.insertdata(300);
    c1.insertdata(400);
    cout<<"circulardoublylinkedlist data: ";
    c1.showdata();
    cout<<endl;
    cin>>key;
    c1.serchdata(key);
    c1.showdata();
    return 0;
     
}