//q1 and define a parameterized constructor to initialise member variable
#include<iostream>
using namespace std;
class queue{
    private:
       int capsity;
       int front , rear;
       int* ptr;
    public:
       queue(int);
};

 queue::queue(int size){
    capsity=size;
    front=-1;
    rear=-1;
    ptr=new int[capsity];
 }