#include<iostream>
using namespace std;

struct node {
    int item;
    node *next;
};

class Sll {
  private:
     node *start;
  public:
     Sll();  // Constructor declaration
      void insertatstart(int);
      void insertatlast(int);
      node* serchitem(int);
      void insertafter(node*,int);
      void deletefirst();
      void deletelastnode();
      void deletenode(int);
      ~Sll();
 };
//02  initalise start pointer with NuLL
Sll::Sll() {   // Corrected constructor definition
    start = nullptr;  
}
//03 methods to insert a data into the list at the beginning
   void Sll::insertatstart(int data){
      node *n=new node;
      n->item=data;
      n->next=start;
      start=n;
   }
// 04 insert the data into the list at the end
void Sll::insertatlast(int data){
   node *n=new node;
   
   n->item=data;
   n->next=nullptr;
   if(start==nullptr){
    start=n;
   }else{
      t=start;
        while(t->next!=nullptr)
           t=t->nest;
        t->nest=n;
   }
}

//05 to search the node with the given item
 node* Sll::serchitem(int data){
    node *t;
    t=start;
    while(t!=nullptr){
        if(t->item=data){
            return t;
        }else{
            t=t->next;
        }
    }
    return nullptr;
 }

 //06 
void Sll::insertafter(node *t,int data){
    if(t!=nullptr){
        node *n=new node;
        n->item=data;
        n->next=t->next;
        t->next=n;
    }
}

//07 delete the first node
void Sll::deletefirst(){
    node *t;
    if(strat){
      t=start;
      start=start->next;
      delete t;
    }
}
//08 deleted the last node 
void Sll::deletelastnode(){
    node *t;
    if(start){
        if(start->next==nullptr){
            deletestart;
            start=nullptr;
        }else{
            t=start;
            while(t->next->next!=nullptr)
              t=t->next;
            deletet->next;
            t->next=nullptr;
        }
    }
}

//09 spacifice node deleted
coid Sll::deletenode(int data){
    node *t1,*t2;
    if(start){
        search(data);
        if(t2){
            t2=start;
            if(t1==t2)
              deletefirst();
            else 
              while(t1->next!=t2)
                 t1=t1->next; 
              t1->next=t2->next;
              delete t2; 
        }
    }
}
//10 deleted the destructor to deallocates 
Sll::~Sll(){
    while(start)
       deletefirst();
}
int main() {
    Sll list; // Creating an object of Sll
    return 0;
}