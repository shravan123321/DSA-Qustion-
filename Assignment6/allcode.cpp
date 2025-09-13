//define the class cll to implements circular link data structore width member variable last pointer of type node
#include<iostream>
using namespace std;
struct node{
    int item;
    node* next;
};
class Cll{
    private:
      node* last;
    public:
      Cll();
      ~Cll();
      void insertatstart(int);
      void insertatlast(int);
      node* serch(int);
      void insetafter(node*,int);
      void deletefirst();
      void deletelast();
      void deletenode(int);
};
Cll::Cll(){
    last=nullptr;
}
void Cll::insertatstart(int data){
    node* n=new node;
    n->item=data;
    if(last){
        n->next=last->next;
        last->next=n;
    }else{
       n->next=n;
       last=n;
    }
}

void Cll::insertatlast(int data){
   node* n=new node;
    n->item=data;
    if(last){
        n->next=last->next;
        last->next=n;
    }else{
        n->next=n;
        last=n;
    }
    last=n;
}

node* Cll::serch(int data){
    node* t;
    if(last){
       t=last->next;
        do{
            if(t->item==data)
                 return t;
            t=t->next;
        }while(t!=last->next)
    }
    return nullptr;
}


void Cll::insetafter(node* temp,int data){
    if(temp){
        node* n=new node;
        n->item=data;
        n->next=temp->next;
        temp->next=n;
        if(last==temp)
          last=n;

    }
}


void Cll::deletefirst(){
    if(last)
     {
        if(last->next==last){
            delete last;
            last=nullptr;
        }else{
            node* t;
            t=last->next;
            last->next=t->next;
            delete t;
        }
     } 
}

void Cll::deletelast(){
    if(last){
        if(last->next==last){
            delete last;
            last=nullptr;
        }else{
            node* t;
            t=last->next;
            while(t->next!=last)
               t=t->next;
            t->next=last->next;
            delete last;
            last=t;
        }
    }
}


void Cll::deletenode(int data){
    node*temp,*t;
    temp=serch(data);
     if(temp)  {
          deletelast();      
        }else{
            t=last->next;
            while(t->next!=temp)
                t=t->next;
            t->next=temp->next;
            delete temp;
        }
}


Cll::~Cll(){
    while(last)
       deletefirst();
}