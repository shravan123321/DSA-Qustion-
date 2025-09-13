// define the destrucate vthe memory of array
#include<iostream>
using namespace std;
class Array{
    private:
        int capsity;
        int lastindex;
        int *ptr;
    public:
       Array(int);//constructor inslized
      ~Array();     
};

 Array::Array(int size){
    capsity=size;
    lastindex=-1;
    ptr= new int[capsity];
 }

 Array::~Array(){
    delete []ptr;
    cout<<"Array memory deleted successfully!";
 }

 int main(){
    Array a1(4);
     return 0;
 }
