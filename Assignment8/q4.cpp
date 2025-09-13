//q1 and defien the methods to peek top elements of the stack
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
      void topdata();
      void showdata();

};

stack::stack(int size){
      capsity=size;
      top=-1;
      ptr=new int[capsity];
}

void stack::insertdata(int data){
    if(top==capsity-1){
        cout<<"stack is overflow conditions: ";
        return ;
    }else{
        top++;
        ptr[top]=data;
    }
}

void stack::topdata(){
    if(top==-1){
        cout<<"stack is empty: "<<endl;
        return ;
    }else{
        cout<<"stack top data elements show: "<<ptr[top]<<endl;
    }
}

void stack::showdata(){
    if(top==-1){
        cout<<"stack is Empty:"<<endl;
        return ;
    }else{
        cout<<"stack elements are: ";
      for(int i=0; i<=top; i++){
        cout<<ptr[i]<<" ";
      }
      cout<<endl;
}
}

int main(){
    int cap;
    cout<<"enter the capsity of the stack: ";
    cin>>cap;

    stack s1(cap);

    s1.insertdata(100);
    s1.insertdata(200);
    s1.insertdata(400);
    s1.insertdata(300);

    cout<<"stack elements top data: ";
    s1.topdata();
    cout<<endl;
    cout<<"stack elements data all are: ";
    s1.showdata();

    return 0;
}