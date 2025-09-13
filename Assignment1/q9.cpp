// define the methods to get elements at spacified index
#include<iostream>
using namespace std;
#define INVALID_INDEX
class Array{
    private:
       int capsity;
       int lastindex;
       int *ptr;
    public:
      void getvalue(int);
      void showdata(); 
};
 
 void Array::getvalue(int index){
    if(index<0 || index>lastindex)
       throw INVALID_INDEX;
    return ptr[index];
 }