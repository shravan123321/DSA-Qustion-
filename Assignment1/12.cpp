// define the method to find an elements in the array return index if the elements found otherwised return 1
#include<iostream>
using namespace std;
class Array{
    private:
      int capsity;
      int lastindex;
      int *ptr;
    public:
       Array(int);
       int finalelements(int);
       void addelements(int,int);
       ~Array();
};
 Array::Array(int size){
    capsity=size;
    lastindex=-1;
    ptr = new int[capsity];
 }
 void Array::addelements(int index , int value){
    if(index >= 0 || index < capsity){
        ptr[index]=value;
        lastindex=index;
    }
 }
  int Array::finalelements(int value){
    for(int i=0; i<=lastindex; i++){
        if(ptr[i]==value)
        return i;
    }
    return -1;
  }
  Array::~Array(){
    delete[] ptr;
  }


  int main(){
    Array arr(5);

    arr.addelements(0,10);
    arr.addelements(1,200);
    arr.addelements(2,300);
    arr.addelements(4,90);


     int serchvalue=300;
     int index=arr.finalelements(serchvalue);

     if(index != -1)
        cout<<"Elements "<<serchvalue<<"found at index "<<index<<endl;
     else 
        cout<<"elements not founds "<<endl;
    
  return 0;

  }