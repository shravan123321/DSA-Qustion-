//in q1 and define the methods doubleArray() to increase and HalfArray to decrease the size the size of the array by double of its size
//in q1 and define the methods doubleArray() to increase and HalfArray to decrease the size the size of the array by double of its size
#include<iostream>
using namespace std;
class DynArray{
   private:
      int capsity;
      int lastindex;
      int* ptr;
    protected:
       void DubleArray();
       void HalfArray();
    public:
       DynArray(int);
       ~DynArray();
       bool Isfull();
       bool Isempty();
       void appenddata(int);
       void insertdata(int,int);
       void showdata();

};

DynArray::DynArray(int data){
    capsity=data;
    lastindex=-1;
    ptr=new int[capsity];
}

DynArray::~DynArray(){
    delete []ptr;
}
void DynArray::DubleArray(){
   int* temp=new int[capsity*2];
   for(int i=0; i<=lastindex; i++){
     temp[i]=ptr[i];
   }
   delete []ptr;
   ptr=temp;
   capsity*=2;
}

bool DynArray::Isfull(){
   return (lastindex==capsity-1);
}

bool DynArray::Isempty(){
   return (lastindex==-1);
}

void DynArray::appenddata(int data){
   if(Isfull()){
      DubleArray();
   }
   lastindex++;
   ptr[lastindex] = data;
}
//04 halfArray
void DynArray::HalfArray(){
   int *temp;
   temp=new int(capsity/2);
   for(int i=0; i<=capsity; i++)
     temp[i]=ptr[i];
   delete [] ptr;
   ptr=temp;
   capsity;
   capsity/=2;
}

void DynArray::showdata(){
   if(Isempty()){
      HalfArray();
   }else{
      for(int i=0; i<=lastindex; i++){
         cout<<ptr[i]<<" ";
      }
      cout<<endl;
   }
}



int main(){
    int Size;
    cout<<"enter the size of Array: ";
    cin>>Size;
   DynArray a1(Size);
    a1.showdata();
   a1.appenddata(10);
   a1.appenddata(20);
   a1.appenddata(30);
   a1.appenddata(40);
   a1.showdata();

 return 0;
}