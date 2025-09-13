//q1 and define a methods to push a new elements on the stack
#include<iostream>
using namespace std;
class stack{
    private:
      int capsity;
      int top;
      int* ptr;
    public:
       stack(int);
       void insertdata(int);
       void showdata();

};

stack::stack(int size){
     capsity=size;
     top=-1;
     ptr=new int[capsity];
}

void stack::insertdata(int data){
    if(top==capsity-1){
        cout<<"stack is overflow Condition "<<endl;
        return ;
    }else{
        top++;
        ptr[top]=data;
        
    }
}

void stack::showdata(){
    if(top==-1){
        cout<<"stack is Empty: "<<endl;
        return;
    }else{
        cout<<"stack elements are: ";
        for(int i=top; i>=0; i--){
            cout<<ptr[i]<<" ";
        }
    }
    cout<<endl;
}

int main(){
    int cap;
    cout<<"enter the stack capsity: ";
    cin>>cap;
    
    stack s1(cap);
    cout<<"stack elements are: "<<endl;
    s1.showdata();
    cout<<endl;;
   s1.insertdata(10);
   s1.insertdata(20);
   s1.insertdata(30);
   s1.insertdata(40);
   s1.showdata();
   cout<<endl;
   
   return 0; 
}
