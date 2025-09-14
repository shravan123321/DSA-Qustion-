//q1 and defien a methods to cout the number of elements and destructore to deallucation memory.
#include<iostream>
using namespace std;
class queue{
    private:
      int capsity;
      int rear;
      int front;
      int* ptr;
    public:
      queue(int);
      ~queue();
      bool Isfull();
      bool Isempty();
      void insertdata(int);
      int count();
      void showdata();
};

queue::queue(int size){
    capsity=size;
    rear=-1; 
    front=-1;
    ptr=new int[capsity];
}

queue::~queue(){
    delete []ptr;
}

bool queue::Isfull(){
    return ((rear+1)%capsity==front);
}

bool queue::Isempty(){
    return front==-1;
}

void queue::insertdata(int data){
    if(Isfull()){
        cout<<"queue Data: Overflow";
        return ;
    }
    if(Isempty()){
        front=rear=0;
    }else{
        rear=(rear+1)%capsity;
    }
    ptr[rear]=data;
}

int queue::count(){
    if(Isempty()){
        cout<<"data count:0 ";
        return 0;
    }
    int c=1;
    int i=front;
    while(i!=rear){
        c++;
        i=(i+1)%capsity;
    }
    return c;
}

void queue::showdata(){
    if(Isempty()){
        cout<<"queue is Data: Empty";
        return ;
    }
    int i=front;
    while(true){
        cout<<ptr[i]<<" ";
        if(i==rear) break;
        i=(i+1)%capsity;
    }
    cout<<endl;
}

int main() {
    queue q1(6);

    q1.insertdata(10);
    q1.insertdata(20);
    q1.insertdata(30);
    q1.insertdata(40);
    q1.insertdata(50);

    cout << "Queue elements: ";
    q1.showdata();
    cout<<endl;

    cout<<"count the elements: "<<q1.count();

    return 0;

}