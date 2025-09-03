//define the methods to edit an elements at spacified index
// #include<iostream>
// using namespace std;
// #define INVALID_INDEX
//  class Array{
//     private:
//        int capsity;
//        int lastindex;
//        int* ptr;
//     public:
//     void editindex(int,int);
//       void showdata();
//  };
//  void Array::editindex(int index,int data){
//     if(index<0 || index>lastindex)
//        throw INVALID_INDEX;
//     ptr[index]=data;  
// } 



//define the methods to editing the elements at spacific index
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
     void Editing(int,int);
     void showdata();
};

Array::Array(int data){
    capsity = data;
    lastindex = -1;
    ptr = new int[capsity];
    for(int i=0; i<capsity; i++)
        ptr[i] = 0;
}
Array::~Array(){
    delete []ptr;
}
bool Array::Isfull(){
    return (lastindex == capsity-1);
}
bool Array::Isempty(){
    return (lastindex == -1);
}

void Array::insertdata(int index, int data){
    if(Isfull()){
        cout << "Array full\n";
    }
    else if(index < 0 || index > lastindex+1){
        cout << "Invalid index for insert: " << index << endl;
    }
    else{
        for(int i = lastindex; i >= index; i--){
            ptr[i+1] = ptr[i];
        }
        ptr[index] = data;
        lastindex++;
    }
}

void Array::Editing(int index,int data){
    if(index < 0 || index > lastindex){
        cout << "Invalid index for editing: " << index << endl;
    } else {
        ptr[index] = data;
    }
}

void Array::showdata(){
    if(Isempty()){
        cout << "Array is Empty\n";
    } else {
        for(int i=0; i<=lastindex; i++){
            cout << ptr[i] << " ";
        }
        cout << endl;
    }
}

int main(){
    Array a1(5);

    // Pehle insert karo
    a1.insertdata(0,10);
    a1.insertdata(1,20);
    a1.insertdata(2,30);
    a1.showdata();

    // Ab edit karo
    a1.Editing(1,100);

    cout<<"After Editing:"<<endl;    
    a1.showdata();

    return 0;
}
