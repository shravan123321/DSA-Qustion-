//q1 and define the deta to delete first node from the list
#include<iostream>
using namespace std;
struct node{
    int item;
    node* next;
};

class circularlinkedlist{
    private:
      node* last;
    public:
      circularlinkedlist();
      void insertdata(int);
      void deletefirst();
      void showdata();
};

circularlinkedlist::circularlinkedlist(){
    last=nullptr;
}

void circularlinkedlist::insertdata(int data){
  node* n=new node;
  n->item=data;
  if(last==nullptr){
    last=n;
    n->next=n;
  }else{
    n->next=last->next;
    last->next=n;
    last=n;
  }
}

void circularlinkedlist::deletefirst(){
    
    if(last==nullptr){
        cout<<"Array is empty: ";
        return ;
    }

    node* first=last->next;

    if(first==last){
        delete first;
        last=nullptr;
    }else{
        last->next=first->next;
        delete first;
    }

}

void circularlinkedlist::showdata(){
    if(last==nullptr){
        cout<<"circularlinked list data: Empty";
        return;
    }
    node* n=last->next;
    do{
        cout<<n->item<<" ";
        n=n->next;
    }while(n!=last->next);
    cout<<endl;
}


int main(){
    circularlinkedlist c1;
    cout<<"circularlinked list data: Empty";
    c1.showdata();
    cout<<endl;

    c1.insertdata(100);
    c1.insertdata(200);
    c1.insertdata(400);
   cout<<"circularlinked list data: ";
   c1.showdata();

   c1.deletefirst();

   cout<<"delete the first node data: ";
   c1.showdata();
   return 0;

}