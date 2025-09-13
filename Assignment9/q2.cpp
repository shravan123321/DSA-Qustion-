//q1 and define the constructore to initialise member variable
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
       stack(int);
};

stack::stack(int data){
    top=nullptr;
}