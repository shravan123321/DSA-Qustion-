//q1 and define a methods to pop the top elements of the stack
#include<iostream>
using namespace std;
struct node{
    int item;
    node* next;
};

class stack{
    private:
      node* top;
    public:
      stack();
      void toppop();
      void pushdata(int);
      void showdata();
};

stack::stack(){
    top=nullptr;
}
void stack::pushdata(int data){
    node* n=new node;
    n->item=data;
    n->next=top;
    top=n;
}
void stack::toppop(){
   if(top==nullptr){
    cout<<"stack is Empty: ";
    return ;
   } 
   node* temp=top;
   cout<<"poptop "<<temp->item<<endl;
   top=top->next;
   delete temp;
}

void stack::showdata(){
    node* temp=top;
    if(top==nullptr){
        cout<<"stack is Empty: ";
        return ;
    }
    while(temp!=nullptr){
        cout<<temp->item<<"-> ";
        temp=temp->next;
    }
}

int main(){
    stack s1;
    s1.showdata();
    cout<<endl;
    s1.pushdata(100);
    s1.pushdata(200);
    s1.pushdata(300);
    s1.pushdata(400);
    s1.pushdata(500);
    cout<<"stack elements: ";
    s1.showdata();
    cout<<endl;
    cout<<"pop the top elements of stack: ";
    s1.toppop();
    s1.showdata();

    return 0;
}