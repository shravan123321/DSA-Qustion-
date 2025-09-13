// Assignments 5

#include<iostream>
using namespace std;
struct Node{
    Node *prev;
    int item;
    Node *next;
      
};

class Dll{
    private:
         Node *start;
    public:
       Dll();
       ~Dll();
    void insertatstart(int);
    void insertlast(int);
   Node* search(int);
   void insertafter(Node*,int);
   void deletefirst();
   void deletelast();
   void deleteNode(int);
      
};
//02
Dll::Dll(){
    start=nullptr;
}
//03
void Dll::insertatstart(int data){
    Node *n=new Node;
    n->item=data;
    n->prev=nullptr;
    n->next=start;
    if(start)
        start->prev=n;
    start=n;
}
//04
void Dll::insertlast(int data){
    Node *n=new Node;
    Node *t;
    n->item=data;
    n->next=nullptr;
    if(start == nullptr ){
        n->prev=start;
        start=n;
    }else{
        t=start;
            while(t->next!=nullptr)
                 t=t->next;
            n->prev=t;
            t->next=n;
    }
}

//05 

Node* Dll::search(int data){
    Node *t;

    t=start;
    while(t){
        if(t->item==data)
            return t;
        t=t->next;
    }
    return nullptr;
}

//06
void Dll::insertafter(Node *temp,int data){
    if(temp){
        Node *n=new Node;
        n->item=data;
        n->next=temp->next;
        n->prev=temp;
        if(temp->next!=nullptr)
            temp->next->prev=n;
        temp->next=n;
    }
}

//07
void Dll::deletefirst(){
  Node *t;
  if(start){
    t=start;
    start=start->next;
    if(start)
       start->prev=nullptr;
    delete t; 
  }
}
//08
void Dll::deletelast(){
   Node *t;
   if(start){
      t=start;
       if(t->next==nullptr){//single node
            delete start;
            start=nullptr;
       }
        else{
            while(t->next->next!=nullptr)
               t=t->next;
            delete t->next;
            t->next=nullptr;
        }
    }
}
//09
void Dll::deleteNode(int data){
    Node *temp;
    temp=search(data);
    if(temp->next!=nullptr){
        if(temp->next!=nullptr)
          temp->next->prev=temp->prev;
        if(temp->prev!=nullptr)
          temp->prev->next=temp->next;
        else
           start=temp->next;
        delete temp;     
    }  
}
//10
Dll::~Dll(){
    while(start)
       deletefirst();
}