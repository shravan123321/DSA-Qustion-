//q1 and define a constructor to initialise start pointer with null
#include<iostream>
using namespace std;
struct node{
    node* prev;
    int item;
    node* next;
};
class circulardoublylinkedlist{
    private:
      node* start;
    public:
      circulardoublylinkedlist();
};
circulardoublylinkedlist::circulardoublylinkedlist(){
    start = nullptr;
}
