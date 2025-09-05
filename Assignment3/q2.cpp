//in q1 and define the paramertized constructor to create an array of spacified size
#include<iostream>
using namespace std;
class DynArray{
    private:
       int capsity;
       int lastindex;
       int* ptr;
    public:
      DynArray(int);
};

DynArray::DynArray(int data){
    capsity=data;
    lastindex=-1;
    ptr=new int[capsity];
}
int main(){
  int array;
   cout<<"enter the array elements: ";
   cin>>array;
   DynArray a1(array);
   cout<<endl;
    cout<<"Array elements spacific  size: "<<array;
  return 0;
}