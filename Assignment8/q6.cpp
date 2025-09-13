//q1 and define a destructore to deallocates the memory
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
      void insertdata(int);
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

void stack::insertdata(int data){
    if(top==capsity-1){
        cout<<"stack is overflow: ";
        return ;
    }
        top++;
         ptr[top]=data;
}

void stack::showdata(){
    if(top==-1){
        cout<<"stack is Empty: ";
        return ;
    }
    cout << "Stack elements: ";
    for(int i = top; i >= 0; i--) {
        cout << ptr[i] << " ";
    }
    cout << endl;
}

int main(){
    stack s1(2);
    s1.insertdata(10);
    s1.insertdata(20);
    cout<<"stack elements: ";
    s1.showdata();
    cout<<endl;

    return 0;
}

