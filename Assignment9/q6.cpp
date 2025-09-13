//q1 and define the destructore to deallocates the memory.
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
      ~stack();
      void pushdata(int);
      void showdata();
};

stack::stack(){
    top=nullptr;
}

stack::~stack(){
    node* temp;
    cout<<"all elements delete: empty";
    while(temp!=nullptr){
      temp=top;
      top=top->next;
      delete temp;
    }
}

void stack::pushdata(int data){
    node* n=new node;
    n->item=data;
    n->next=top;
    top=n;
}

void stack::showdata(){
    if(top==nullptr){
        cout<<"stack is Empty: ";
        return ;
    }
    node* temp=top;
    while(temp!=nullptr){
        cout<<temp->item<<"-> ";
        temp=temp->next;
    }
}

int main(){
    stack s1;
    s1.showdata();

    s1.pushdata(10);
    s1.pushdata(20);
    s1.pushdata(30);
    s1.pushdata(40);
    cout<<endl;
    s1.showdata();
    cout<<endl;
    return 0;
}