//q1 and define the methods to insert the new elements at spacified ined
// #include<iostream>
// using namespace std;
// class Array{
//     private:
//       int capsity;
//       int lastindex;
//       int* ptr;
//     public:
//        void parametrized(int);
//        bool Isempty();
//        void insertdata(int);
//        void showdat();
// };


// q1 and define the method to insert the new elements at spacified index
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
    void insertdata(int,int);
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

void Array::insertdata(int index , int data){
  if(Isfull()){
    cout<<"Array is overflow condition lastindex: "<<lastindex<<endl;
  }else if(index<0 || index > lastindex+1){
    cout<<"Invalid index input : "<<index<<"  "<<"data: "<<data<<endl;
  }else{
    for(int i=lastindex; i>=index; i--){
      ptr[i+1]=ptr[i];
    }
    ptr[index]=data;
    lastindex++;
  }
}



// void Array::insertdata(int index,int data){
//   if(index<0 || index>= capsity){
//     cout<<"Invalid Index: "<<index<<" "<<"data: "<<data<<endl;
//   }else{
//     ptr[index]=data;
//     if(index>lastindex)
//        lastindex=index;
//   }
// }


void Array::showdata(){
  if(Isempty()){
    cout<<"Array is Empty: ";
  }else{
    for(int i=0; i<=lastindex; i++){
      cout<<ptr[i]<<" ";
    }
    cout<<endl;
  }
} 


int main(){
  Array a1(5);

   a1.insertdata(0,10);
  a1.insertdata(1,20);
  a1.insertdata(2,30);
  a1.insertdata(3,40);
  a1.insertdata(1,50);

  a1.showdata();

  return 0;
}