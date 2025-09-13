//define the copy assignment operater in array class to perform deep copy
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
     Array& operator=(Array&);
     void setdata(int);
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

Array& Array::operator=(Array& arr){
    if(ptr!=nullptr){
        delete []ptr;
    }else{
        ptr=new int[capsity];
        for(int i=0; i<=lastindex; i++){
            ptr[i]=arr.ptr[i];
        }
        return *this;
    }
}

void Array::setdata(int data){
    if(Isfull()){
        cout<<"Overflow Array is full ";
    }else{
        lastindex++;
        ptr[lastindex]=data;
    }
}


void Array::showdata(){
  if(Isempty()){
    cout<<"Array is Empty ";
  }else{
    for(int i=0; i<=lastindex; i++){
        cout<<ptr[i]<<" ";
    }
    cout<<endl;
  }
}


int main(){
    Array a1(6);
    a1.showdata();
    cout<<endl;
    a1.setdata(100);
    a1.setdata(200);
    a1.setdata(300);
    a1.showdata();

    return 0;
}