//define a copy constructor in Array class to perform deep copy
#include<iostream>
using namespace std;
class Array{
    private:
      int capsity;
      int lastindex;
      int* ptr;
    public:
       Array(int);
       Array(Array&);
      ~Array();
      bool Isfull();
      bool Isempty();
      void append(int);
      void showdata();
};

Array::Array(int data){
    capsity=data;
    lastindex=-1;
    ptr=new int[capsity];
    for(int i=0; i<=capsity; i++){
        ptr[i]=0;
    }
}

Array::~Array(){
    delete []ptr;
}

Array::Array(Array &arr){
    capsity=arr.capsity;
    lastindex=arr.lastindex;
    ptr=new int[capsity];
    for(int i=0; i<=lastindex; i++){
        ptr[i]=arr.ptr[i];
    }
}

      bool Array::Isfull(){
        return (lastindex==capsity-1);
      }
      bool Array::Isempty(){
        return (lastindex==-1);
      }
      void Array::append(int data){
        if(Isfull()){
            cout<<"Array is full: ";
        }else{
            lastindex++;
            ptr[lastindex]=data;
        }
      }
      void Array::showdata(){
          if(Isempty()){
            cout<<"array is empty ";
          }else{
            for(int i=0; i<=lastindex; i++){
                cout<<ptr[i]<<" ";
            }
            cout<<endl;
          }
      }

      int main(){
        Array a1(5);
        a1.showdata();
        cout<<endl;
        a1.append(10);
        a1.append(20);
        a1.append(30);
        a1.append(40);
        a1.showdata();

        return 0;
      }