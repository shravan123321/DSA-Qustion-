//define the methods to delete an elements at specified index
// #include<iostream>
// using namespace std;
// #define INVILADE_INDEX
// class Array{
//   private:
//         int capsity;
//         int lastindex;
//         int *ptr;
//     public:
//        void del(int);
// };

// void Array::del(int index){
//     if(index<0 || index > lastindex )
//        throw INVILADE_INDEX;
//    for(int i=0; i<lastindex; i++){
//     ptr[i]=ptr[i+1];
//     lastindex--;
//    }
// }



//define the methods to delete the elements at spacified index
#include<iostream>
using namespace std;
#define INVILADE_INDEX-1;
class Array{
    private:
      int capsity;
      int lastindex;
      int* ptr;
    public:
      Array(int);
      ~Array();
      bool Isfull();
      bool Isempty();
      void setdata(int);
      void del(int);
      void showdata();
};

    Array::Array(int data){
        capsity=data;
        lastindex=-1;
        ptr=new int[capsity];
        for(int i=0; i<=lastindex; i++){
            ptr[i]=0;
        }
    }
      Array::~Array(){
        delete []ptr;
      }
      bool Array::Isfull(){
        return (lastindex==capsity-1);
      }
      bool Array::Isempty(){
        return (lastindex==-1);
      }
      void Array::setdata(int data){
        if(Isfull()){
            cout<<"OverFlow: "<<endl;
        }else{
            lastindex++;
            ptr[lastindex]=data;
        }
      }
      void Array::del(int data){
        if(data<0 || data>lastindex)
            throw INVILADE_INDEX;
        for(int i=0; i<lastindex; i++){
              ptr[i]=ptr[i+1];
        }
              lastindex--;
      }
      void Array::showdata(){
         if(Isempty()){
            cout<<"Array Is Empty: ";
         }else{
            for(int i=0; i<=lastindex; i++){
                cout<<ptr[i]<<" ";
            }
            cout<<endl;
         }
      }

      int main(){
        Array a1(8);
        a1.setdata(10);
        a1.setdata(20);
        a1.setdata(30);
        a1.setdata(40);
        a1.setdata(50);
        a1.setdata(60);

        a1.showdata();


        //delete the data
        a1.del(2);
        a1.showdata();
      }
