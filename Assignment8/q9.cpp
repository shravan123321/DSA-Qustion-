//define a solution to keep track of minimum value elements in the stack
#include<iostream>
using namespace std;
class stack{
    private:
      int capsity;
      int top;
      int *ptr;
    public:
      stack(int);
      ~stack();
      bool Isfull();
      bool Isempty();
      void insertdata(int);
      int minvalue();
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

bool stack::Isfull(){
    return (top==capsity-1);
}

bool stack::Isempty(){
    return (top==-1);
}

void stack::insertdata(int data){
    if(Isfull()){
        cout<<"stack elements Overflow: ";
        return ;
    }
    top++;
    ptr[top]=data;
}

int stack::minvalue(){
    if(Isempty()){
        cout<<"stack is empty: ";
        return -1;
    }
    int minval =ptr[0];
    for(int i=1; i<=top; i++){
        if(ptr[i]<minval)
            minval=ptr[i];
    }
    return minval;
}


void stack::showdata(){
    if(Isempty()){
        cout<<"stack is Empty: ";
        return ;
    }
    for(int i=top; i>=0;  i--){
        cout<<ptr[i]<<" ";
    }
    cout<<endl;
}

int main(){
    stack s1(5);

    cout<<"insert the elements in stack: ";
    s1.insertdata(5);
    s1.insertdata(10);
    s1.insertdata(15);
    s1.insertdata(20);
    s1.insertdata(25);
    cout<<"stack elements: ";
    s1.showdata();
    cout<<endl;
   cout << "minimum value in stack: " << s1.minvalue() << endl;
    return 0;
}