//Define a class priorityqueue with node type pointer start as member variable implements pointerqueue using singly linked list
#include<iostream>
using namespace std;
struct node{
    int item;
    node* next;
};

class priorityqueue{
    private:
      node* start;
};