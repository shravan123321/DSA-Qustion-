//define the methods the check if the array is full returning true or false
// #include<iostream>
// using namespace std;
//  class Array{
//     private:
//          int capsity;
//          int lastindex;
//          int *ptr;
//     public:
//        bool isfull();
//  };
//  bool Array::isfull(){
//     return lastindex-1;
//  }



// define the methods the check if the array is full runtime true and false
#include<iostream>
using namespace std;
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
     void insertdata(int);
     void showdata();


};


Array::Array(int data){
   capsity=data;
   lastindex=-1;
   ptr=new int[capsity];
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

void Array::insertdata(int data){
   if(Isfull()){
      cout<<"Array is full ";
   }else{
      lastindex++;
       ptr[lastindex]=data;
   }
}

void Array::showdata(){
   if(Isempty()){
      cout<<"Array is empty: ";
      return;
   }else{
      for(int i=0; i<=lastindex; i++){
         cout<<ptr[i]<<" ";
      }
   }
   cout<<endl;
}

int main(){
   Array a1(5);
   a1.showdata();
   cout<<endl;
   a1.insertdata(10);
   a1.insertdata(20);
   a1.insertdata(30);
   a1.insertdata(40);
   a1.insertdata(50);
   a1.showdata();
   cout<<endl;
   a1.insertdata(60);
   a1.showdata();

   return 0;
}