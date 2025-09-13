// define the class dynamic Array to implements dynamic array data structure with member variable to store capsity
#include<iostream>
using namespace std;
#define INVALID_INDEX;
class DynArray{
   private:
      int capsity;
      int lastindex;
      int *ptr;
    protected:
       void doubleArray();
       void halfArray();
    public:
       DynArray(int);
       bool isfull();
       bool isEmpty();
       void appends(int);
       void insert(int,int);
       void del(int);
       int count();

};
//02 
DynArray::DynArray(int cap){
    capsity=cap;
    lastindex=-1;
    ptr=new int(capsity);
}
//03 buble array
bool DynArray::isfull(){
    return lastindex==-1;
}
bool DynArray::isEmpty(){
   return lastindex==capsity-1;
}
void DynArray::appends(int data){
    if(isfull())
       doubleArray();
    ptr[lastindex+1]=data;
    lastindex++;
}
void DynArray::insert(int index,int data){
    if(index<0 || index>lastindex+1)
       throw INVALID_INDEX;
    if(isfull())
        doubleArray();
    for(int i=lastindex; i>=index; i--)
       ptr[i+1]=ptr[i];
    ptr[index]=data; 
    lastindex++;
}
void DynArray::doubleArray(){
   int *temp;
   temp= new int[capsity*2];
   for(int i=0; i<=lastindex;i++)
      temp[i]=ptr[i];
   delete []ptr;
   ptr=temp;
   capsity*=2;
}

//04 halfArray
void DynArray::halfArray(){
   int *temp;
   temp=new int(capsity/2);
   for(int i=0; i<=capsity; i++)
     temp[i]=ptr[i];
   delete [] ptr;
   ptr=temp;
   capsity;
   capsity/=2;
}
int DynArray::count(){
   return lastindex;
}
void DynArray::del(int index){
   if(index<0 || index>lastindex)
      throw INVALID_INDEX;
   for(int i=index; i<lastindex; i++)
      ptr[i]=ptr[i+1];
   lastindex--;
   if(capsity>1 && count()==capsity/2)
     halfArray();
}