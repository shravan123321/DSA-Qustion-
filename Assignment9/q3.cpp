//q1 and define a methods to push the new elements on the stack
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

void stack::showdata(){
    if(top==nullptr){
        cout<<"stack is Empty: ";
        return ;
    }
    node* temp=top;
    while(top!=nullptr){
        cout<<temp->item<<" ";
        temp=temp->next;
    }
}

int main(){
    stack s1;
    s1.showdata();
    cout<<endl;
    s1.pushdata(10);
    s1.pushdata(20);
    s1.pushdata(30);
    s1.pushdata(40);
    s1.pushdata(50);
    cout<<"stack elements: ";
    s1.showdata();

    return 0;
}