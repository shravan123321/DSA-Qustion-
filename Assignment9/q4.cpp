//q1 and define a methods to peek top elements of stack
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
      void peektop();
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

void stack::peektop(){
  node* n=top;
  if(top==nullptr){
    cout<<"stack top data  Empty: ";
    return ;
  }
  cout<<"stack top elements: "<<n->item;
}

void stack::showdata(){
    node* temp=top;
    if(top==nullptr){
        cout<<"stack is Empty: ";
        return ;
    }
    while(temp!=nullptr){
        cout<<temp->item<<" ";
        temp=temp->next;
    }
}

int main(){
    stack s1;
    s1.peektop();
    cout<<endl;
    s1.showdata();
    cout<<endl;
    s1.pushdata(10);
    s1.pushdata(20);
    s1.pushdata(30);
    s1.pushdata(40);
    s1.pushdata(50);
    s1.peektop();
    cout<<endl;
    s1.showdata();

    return 0;

}
