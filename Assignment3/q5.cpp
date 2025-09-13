//q1 and add the methods to check whether an array is empty or not by the return type ture and false
#include<iostream>
using namespace std;
class DyArray{
    private:
      int capsity;
      int lastindex;
      int* ptr;
    public:
      DyArray(int);
      ~DyArray();
      bool Isfull();
      bool Isempty();
      void append(int);
      void showdata();
};

      DyArray::DyArray(int data){
          capsity=data;
          lastindex=-1;
          ptr=new int[capsity];
      }


      DyArray::~DyArray(){
        delete []ptr;
      }


      bool DyArray::Isfull(){
        return (lastindex==capsity-1);
      }


      bool DyArray::Isempty(){
        return (lastindex==-1);
      }


      void DyArray::append(int data){
        if(Isfull()){
            cout<<"Array is Overflow:  true";
        }else{
            cout<<"Array is Empty:   false";
        }
      }
    

      int main(){
        DyArray arr(0);
        arr.append(10);

         return 0;
      }