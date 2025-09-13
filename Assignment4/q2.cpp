//q1 and define a contructor to initialise start pointer with null
#include<iostream>
using namespace std;
struct node{
    int item;
    node* next;
};

class singlylinkedlist{
    private:
      node* start;
    public:
     singlylinkedlist();
     void showdata();
};

singlylinkedlist::singlylinkedlist(){
   start=nullptr;
}

void singlylinkedlist::showdata(){
  if(start==nullptr){
    cout<<"linkedlist is empty: ";
  }else{
    cout<<"linkedlist data: ";
  }
}

int main(){
    singlylinkedlist s1;
    s1.showdata();
    return 0;
}