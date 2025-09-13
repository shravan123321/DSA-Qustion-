//in q1 and define the methods doubleArray() to increase the size of the array by double of its size
#include<iostream>
using namespace std;
class DynArray{
   private:
      int capsity;
      int lastindex;
      int* ptr;
    protected:
       void DubleArray();
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


void DynArray::insertdata(int index,int data){
   if(index<0 || index>lastindex+1){
      cout<<"Invalid index: "<<index<<" data: "<<data<<endl;
   }else{
      if(Isfull()){
         DubleArray();
      }
      for(int i=lastindex; i>=index; i--){
         ptr[i+1]=ptr[i];
      }
      ptr[index]=data;
      lastindex++;
   }
}


void DynArray::showdata(){
   if(Isempty()){
      cout<<"Array is empty ";
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
   a1.appenddata(10);
   a1.appenddata(20);
   a1.appenddata(30);
   a1.appenddata(40);
   a1.showdata();
   cout<<"what : "<<endl;
   a1.insertdata(2,200);
    a1.appenddata(100);
   a1.appenddata(500);
   a1.appenddata(300);
   a1.appenddata(400);

    a1.showdata();
}