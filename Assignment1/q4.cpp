//q1 and defin the methods to appends a new elements in the array
// #include<iostream>
// using namespace std;
// class Array{
//   private:
//     int capsity;
//     int lastindex;
//     int* ptr;
//   public:
//      void parametrized(int);
//      bool Isfull();
//      void insertdata(int);
//      void showdata();    
// };

// void Array::parametrized(int data){
//   capsity=data;
//   lastindex=-1;
//   ptr=new int[capsity];
// }

// bool Array::Isfull(){
//   return (lastindex==capsity-1);
// }

// void Array::insertdata(int data){
//   if(Isfull()){
//     cout<<"data is overflow: ";
//   }else{
//     lastindex++;
//     ptr[lastindex]=data;
//   }
// }

// void Array::showdata(){
//   if(lastindex==-1){
//     cout<<"Array is Empty "<<endl;
//   }else{
//     for(int i=0; i<=lastindex; i++){
//       cout<<ptr[i]<<" ";
//     }
//     cout<<endl;
//   }
// }

// int main(){
//   Array a1;
//   a1.parametrized(3);
//   a1.insertdata(10);
//   a1.insertdata(20);
//   a1.insertdata(30);
//   a1.insertdata(40);
//   a1.showdata();
//    return 0;
// }


// q1 and define the methods to appends the new element in the array
#include <iostream>
using namespace std;

class Array {
private:
    int capacity;
    int lastindex;
    int* ptr;

public:
    // Constructor to initialize array with given capacity
    Array(int cap) {
        capacity = cap;
        lastindex = -1; // No element yet
        ptr = new int[capacity];
    }

    // Destructor to free memory
    ~Array() {
        delete[] ptr;
    }

    bool IsFull() {
        return (lastindex == capacity - 1);
    }

    void setdata(int data) {
        if (IsFull()) {
            cout << "Overflow: Array is full.\n";
        } else {
            lastindex++;
            ptr[lastindex] = data;
        }
    }

    void showdata() {
        if (lastindex == -1) {
            cout << "Array is empty.\n";
        } else {
            for (int i = 0; i <= lastindex; i++) {
                cout << ptr[i] << " ";
            }
            cout << endl;
        }
    }
};

int main() {
    Array a1(5); // Initialize array with capacity 5

    a1.setdata(10);
    a1.setdata(200);
    a1.setdata(100);
    a1.setdata(10);
    a1.setdata(200);
    a1.setdata(100);
        
    a1.showdata();

    return 0;
}
