//q1 and define a constructor to initialise last pointer with null
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
       circularlinkedlist(){
        last=nullptr;
       };

       void showdata();

};

void circularlinkedlist::showdata(){
    if(last==nullptr){
        cout<<"circular linkedlist data: NULL";
    }else{
         cout<<"circular data: ";
    }
}

int main(){
    circularlinkedlist c1;

    c1.showdata();

    return 0;
}