//q1 and define a methods to insert a new elements at the rear in the queue
#include<iostream>
using namespace std;
#define underflow
#define OVERFLOW
class queue{
    private:
      int capacity;
      int front , rear;
      int* ptr;
    public:
      queue(int);
      bool Isfull();
      bool Isempty();
      void insert(int);
      void showdata();

};

queue::queue(int size){
    capacity=size;
    front=-1;
    rear=-1;
    ptr=new int[capacity];
}


void queue::insert(int data)
{
    if(Isfull())
        throw OVERFLOW;
    if(Isempty())
    {
        front=0;
        rear=0;
        ptr[rear]=data;
    }
    else if(rear==capacity-1)
    {
        rear=0;
        ptr[rear]=data;
    }
    else
    {
        rear++;
        ptr[rear]=data;
    }
}
bool queue::Isfull()
{
    return (capacity-1==rear&&front==0 || rear+1==front);      
}
bool queue::Isempty()
{
    return front==-1;
}


void queue::showdata(){
    if(Isempty()){
        cout<<"queue is Empty: ";
        return ;
    }
    for(int i=front; i<=rear; i++){
        cout<<ptr[i]<<" ";
    }
    cout<<endl;

}


int main(){
    queue s1(5);
    cout<<"queue data: Empty";
    s1.showdata();
    cout<<endl;
    s1.insert(1);
    s1.insert(2);
    s1.insert(3);
    s1.insert(4);
    s1.insert(5);
    cout<<"queue data: ";
    s1.showdata();
    cout<<endl;
    s1.insert(6);

    return 0;
}