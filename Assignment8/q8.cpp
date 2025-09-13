//define a methods to reverse a stack
//q1 and define a methods to check stack is overflow and Underflow 
#include<iostream>
using namespace std;
class stack{
    private:
      int capsity;
      int top; 
      int* ptr;
    public:
      stack(int);
      ~stack();
      bool Isfull();
      bool Isempty();
      void insertdata(int);
      void recerse();
      void showdata();
};

stack::stack(int size){
    capsity=size;
    top=-1;
    ptr=new int[capsity];
}

stack::~stack(){
    delete []ptr;
}

bool stack::Isempty(){
    return (top==-1);
}

bool stack::Isfull(){
    return (top==capsity-1);
}

void stack::insertdata(int data){
    if(Isfull()){
        cout<<"Overflow Conditions Fllow: "<<endl;
        return ;
    }
    top++;
    ptr[top]=data;
}

void stack::recerse(){
    if(Isempty()){
        cout<<"empty data: ";
        return ;
    }
    int i=0,j=top;
    while(i<j){
        int temp=ptr[i];
        ptr[i]=ptr[j];
        ptr[j]=temp;
        i++;
        j--;
    }
}

void stack::showdata(){
    if(Isempty()){
        cout<<"Stack is Empty: ";
        return ;
    }
    cout<<"stack elements: ";
    for(int i=top; i>=0; i--){
        cout<<ptr[i]<<" ";
    }
    cout<<endl;
}

int main(){
    int size;
    cout<<"enter the size of stack: ";
    cin>>size;
      
    stack s1(size);
    s1.showdata();
    s1.insertdata(10);
    s1.insertdata(20);
    s1.insertdata(30);
    s1.insertdata(40);
    s1.insertdata(50);
    s1.insertdata(60);
    s1.insertdata(70);
    s1.insertdata(80);
    s1.insertdata(90);
    s1.insertdata(100);
  cout<<"original stack: ";
  s1.showdata();
  cout<<endl;
  s1.recerse();
  cout<<"reverse stack: ";
  s1.showdata();

  return 0;
}