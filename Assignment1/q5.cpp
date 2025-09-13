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
    void appends(int);
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

    void Array::appends(int data) {
        if (Isfull()) {
            cout << "Overflow: Array is full.\n";
        } else {
            lastindex++;
            ptr[lastindex] = data;
        }
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

   a1.appends(10);
  a1.appends(20);
  a1.appends(30);
  a1.insertdata(3,40);
  a1.insertdata(1,50);

  a1.showdata();

  return 0;
}