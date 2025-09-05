//define the class dynArray to implement dynamicaly array dsa with member variable to store capsity ,last block pointer to holed address of the first block of the dynamically create array
#include<iostream>
using namespace std;
class DynArray{
    private:
      int capsity; 
      int lastindex;
      int* ptr;
    public:
      DynArray(int);
      ~DynArray();
      bool Isfull();
      bool Isempty();
      void setdata(int);
      void showdata();
};
       
      DynArray::DynArray(int data){
        capsity=data;
        lastindex=-1;
        ptr=new int[capsity];
        for(int i=0; i<=lastindex; i++){
            ptr[i]=0;
        }
      }
      DynArray::~DynArray(){
          delete []ptr;
      }
      bool DynArray::Isfull(){
          return (lastindex==capsity-1);
      }
      bool DynArray::Isempty(){
          return(lastindex==-1);
      }
      void DynArray::setdata(int data){
         if(Isfull()){
            cout<<"overfloww array: ";
            return;
         }else{
            lastindex++;
            ptr[capsity]=data;
         }
      }
      void DynArray::showdata(){
        if(Isempty()){
            cout<<"Array is empty:  ";
        }else{
            for(int i=0; i<=lastindex; i++){
                cout<<ptr[i]<<" ";
            }
            cout<<endl;
        }
      }


      int main(){
        DynArray a1(4);
        a1.showdata();
        cout<<endl;
        a1.setdata(10);
        a1.setdata(20);
        a1.setdata(30);
        a1.setdata(40);
        a1.showdata();
        cout<<endl;
        a1.setdata(50);
        a1.showdata();

        return 0;
      }