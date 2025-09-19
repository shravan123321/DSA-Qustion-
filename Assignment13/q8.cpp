//q1 and define the methods to check if priority queue empty
#include<iostream>
using namespace std;
struct node{
    int item;
    node* node;
};

class priorityqueue{
    private:
      node* start;
    public:
      bool Isempty();
};

bool priorityqueue::Isempty(){
    return (start==nullptr);
}