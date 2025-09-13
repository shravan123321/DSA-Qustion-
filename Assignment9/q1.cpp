//define a class stack with node type ponter top as member variable. implement stack using linked list
#include<iostream>
using namespace std;
struct node{
    int item;
    node* next;
};
class stack{
    private:
      node* top;
};