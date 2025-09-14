//q1 and define a methods to delete the front elements of the queue
#include<iostream>
using namespace std;
#define OVERFLOW
#define UNDERFLOW
class queue{
    private:
       int capsity;
       int front , rear;
       int* ptr;
    public:
       queue(int);
       bool Isfull();
       bool Isempty();
       void setdata(int);
       void deletefront();
       void showdata();
};

queue::queue(int size){
    capsity=size;
    front=-1;
    rear=-1;
    ptr=new int[capsity];
}

bool queue::Isfull(){
    return (rear==capsity-1 && front==0 || rear+1==front);
}

bool queue::Isempty(){
    return (rear==-1);
}

void queue::setdata(int data){
    if(Isfull()){
        cout<<"queue Is Overflow: ";
        return ;
    }
    if(Isempty()){
        front=rear=0;
    }else {
        rear=(rear+1)%capsity;
    }
    ptr[rear]=data;
}

void queue::deletefront(){
    if(Isempty()){
        cout<<"queue Is empty: ";
        return ;
    }
    if(front==rear){
        front=rear=-1;
    }else{
        front=(front+1)%capsity;
    }
}

void queue::showdata(){
    if(Isempty())
        throw UNDERFLOW;
    for(int i=front; i<=rear; i++){
        cout<<ptr[i]<<" ";
    }
}

int main(){
    queue q1(5);
    q1.setdata(10);
    q1.setdata(20);
    q1.setdata(30);
    q1.setdata(40);
    q1.setdata(50);
    cout<<"queue data: ";
    q1.showdata();
   cout<<endl;
    cout<<"delete the front: ";
    q1.deletefront();
    q1.showdata();

    return 0;
}