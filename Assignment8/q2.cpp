//q1 and define a parametrized constructor to initialize member variables
#include<iostream>
using namespace std;
class stack{
    private:
      int capsity;
      int top;
      int* ptr;
    public:
      stack(int);
      void showdata();
};

stack::stack(int size){
    capsity=size;
    top=-1;
    ptr=new int[capsity];
}

void stack::showdata(){
    if(top==-1){
        cout<<"stack is Empty: "<<endl;
        return ;
    }else{
        cout<<"stack elements are: ";
        for(int i=0; i<=top; i++){
            cout<<ptr[i]<<" ";
        }
    }
    cout<<endl;
}

int main(){
    stack s1(5);
    cout<<"staclk elements are: "<<endl;
    s1.showdata();
    return 0;
}