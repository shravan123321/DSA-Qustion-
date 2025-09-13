//define the methods to reverse the stack.
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
     void reversedata();
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
void stack::reversedata(){
    node* prev=nullptr;
    node* curr=top;
    node* next=nullptr;
    while(curr!=nullptr){
     next=curr->next;
     curr->next=prev;
     prev=curr;
     curr=next;
    }
    top=prev;
}

void stack::showdata(){
    node* temp=top;
    if(top==nullptr){
        cout<<"stack is Empty: ";
        return ;
    }
    while(temp!=nullptr){
        cout<<temp->item<<"->";
        temp=temp->next;
    }
    cout<<endl;
}

int main(){
    stack s1;
    s1.showdata();
    cout<<endl;
    s1.pushdata(10);
    s1.pushdata(20);
    s1.pushdata(30);
    s1.pushdata(40);
    cout<<"stack elements:       "; 
    s1.showdata();
    cout<<"reverse the elements: ";
    s1.reversedata();
    s1.showdata();
    return 0;
}
