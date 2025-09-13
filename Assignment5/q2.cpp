//q1 and define a constructor to initialise start pointer null
#include<iostream>
using namespace std;
struct node{
  node* prev;
  int item;
  node* nest;
};

class doublylinkedlist{
  private:
    node* start;
  public:
    doublylinkedlist();
    void showdata();
};

doublylinkedlist::doublylinkedlist(){
  start=nullptr;
}

void doublylinkedlist::showdata(){
  if(start==nullptr){
    cout<<"start is empty ";
  }else{
    cout<<"start is data: ";
  }
}


int main(){
  doublylinkedlist d1;
  d1.showdata();
  return 0;
}
