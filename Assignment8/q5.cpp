//q1 and define a methods to pop the elements of the stack
#include<iostream>
using namespace std;
class stack{
    private:
       int capsity;
       int top;
       int *ptr;
    public:
       stack(int);
       void insertdata(int);
       void popdata();
       void showdata();
};
 stack::stack(int size){
    capsity=size;
    top=-1;
    ptr=new int[capsity];
 }

 void stack::insertdata(int data){
    if(top==capsity-1){
        cout<<"stack is over flow condition: "<<endl;
        return ;
    }else{
        top++;
        ptr[top]=data;
    }
 }

 void stack::popdata(){
    if(top==-1){
        cout<<"stack is emepty: "<<endl;
        return ; 
    }else{
        cout<<"pop elements in the stack: "<<ptr[top]<<endl;
        top--;
    }
    cout<<endl;
 }
void stack::showdata(){
    if(top == -1){
        cout << "Stack is Empty" << endl;
        return;
    }
    cout << "Stack elements: ";
    for(int i = top; i >= 0; i--){
        cout << ptr[i] << " ";
    }
    cout << endl;
}

 int main(){
    stack s1(5);
    cout<<"stack elements are: "<<endl;
    s1.showdata();
    cout<<endl;
    cout<<"insert data in the stack: "<<endl;
    s1.insertdata(10);
    s1.insertdata(20);
    s1.insertdata(15);
    s1.insertdata(30);
    s1.insertdata(50);
    s1.showdata();
    cout<<endl;
    s1.popdata();
    cout<<"after pop the elements of the stack: "<<endl;
    s1.showdata();

    return 0;

 }