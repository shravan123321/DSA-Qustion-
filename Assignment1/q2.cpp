//q1 and define the parametrized constructore to create the array spacified size
// #include<iostream>
// using namespace std;
// class Array{
//     private:
//       int capaity;
//       int lastindex;
//       int* ptr;
//     public:
//         Array(int);  //parametrized constructore
//         ~Array();
//         void showdata();
// };
// Array::Array(int data){
//     capaity=data;
//     lastindex=-1;
//     ptr=new int[capaity];
// }
// Array::~Array(){
//     delete[] ptr;
// }
// void Array::showdata(){
//     cout<<"capacity of the array: "<<capaity<<endl;
// }
// int main(){
//     Array a1(20);
//     a1.showdata();
//     return 0;
// }


//qustion 1, define a parametrized constructor to create the an array spacific size 
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
      void showdata();
};

Array::Array(int data){
    capsity=data;
    lastindex=1;
    ptr=new int[capsity];   
}
Array::~Array(){
    delete[]ptr;
}
void Array::showdata(){
    cout<<"array of the capsity :  "<<capsity;
}

int main(){
    
    int a1; 
    cout<<"enter the capsity of the array : ";
    cin>>a1;

    Array b(a1);
    b.showdata();
    return 0;
}