//q1 and add methods to check the Array is Empty or Not returing true and false
// #include<iostream>
// using namespace std;
// class Array{
//     private:
//       int capsity;
//       int lastindex;
//       int* ptr;
//     public:
//       void parametrize(int);
//       bool Isempty();
//       void showdata();
// };

// void Array::parametrize(int data){
//     capsity=data;
//     lastindex=-1;
//     ptr=new int[capsity];
// }

// bool Array::Isempty(){
//     return (lastindex==-1);
// }

// void Array::showdata(){
//     cout<<"Array capsity: "<<capsity<<"\n";
//     cout<<"Array lastindex : "<<lastindex<<"\n";
// }
// int main(){
//     Array a1;
//     // a1.parametrize(6);
//     if(a1.Isempty()){
//         cout<<"Array is Empty: "<<"true";
//     }else{
//         cout<<"Array is not Empty: "<<"false";
//     }
//     return 0;
// }



// qustion 1 add a methods to check whether an array is empty or not by returing true or false.

#include<iostream>
using namespace std;
class Array{
    private:
      int capsity;
      int lastindex;
      int* ptr;
    public:
      void  array(int);
      ~Array();
      bool Isempty();
      void showdata();
};
 
void Array::array(int data){
    capsity=data;
    lastindex=1;
    ptr=new int[capsity];
}
Array::~Array(){
    delete []ptr;
}
bool Array::Isempty(){
    return (lastindex=-1);
}

void Array::showdata(){
    cout<<"array capsity "<<capsity<<endl;
}

int main(){
    int arr;
    cout<<"enter the array elements ";
    cin>>arr;

    Array a1;
    a1.array(arr);
   
    if(a1.Isempty()){
        cout<<"array is empty ";
    }else{
        cout<<"array is not empty ";
    }
 
  return 0;
}