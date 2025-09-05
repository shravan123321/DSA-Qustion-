//q1 and define the method to edit an elements at spacified index
#include<iostream>
using namespace std;

class DynArray{
private:
    int capsity;
    int lastindex;
    int* ptr;
public:
    DynArray(int n);
    ~DynArray();
    bool Isfull();
    bool Isempty();
    void appenddata(int data);
    void Edit(int index, int data);
    void deletedata(int index);
    void showdata();
};

DynArray::DynArray(int n){
    capsity = n;
    lastindex = -1;
    ptr = new int[capsity];
}
DynArray::~DynArray(){ 
    delete[] ptr; 
}

bool DynArray::Isfull(){ return lastindex == capsity - 1; }
bool DynArray::Isempty(){ return lastindex == -1; }

void DynArray::appenddata(int data){
    if (Isfull()){ 
        cout << "Overflow\n"; 
        return; 
    }
    ptr[++lastindex] = data;
}

void DynArray::Edit(int index,int data){
    if(index < 0 || index > lastindex){
        cout << "Invalid index\n";
        return;
    }
    ptr[index] = data;
}

void DynArray::deletedata(int index){
    if (Isempty()){ 
        cout << "Array is Empty\n"; 
        return; 
    }
    if (index < 0 || index > lastindex){
        cout << "Invalid index\n"; 
        return;
    }
    for (int i = index; i < lastindex; i++)
        ptr[i] = ptr[i + 1];
    lastindex--;
}

void DynArray::showdata(){
    if (Isempty()){ 
        cout << "Empty\n"; 
        return; 
    }
    for (int i = 0; i <= lastindex; ++i) 
        cout << ptr[i] << " ";
    cout << "\n";
}

int main(){
    int size;
    cout << "Enter the DynArray Size: ";
    cin >> size;

    DynArray arr(size);

    arr.appenddata(100);
    arr.appenddata(200);
    arr.appenddata(300);
    arr.appenddata(400);
    arr.showdata();
cout<<"editing the elements "<<endl;
    arr.Edit(2, 350);
    arr.Edit(3, 450);
    arr.showdata();
cout<<"delete the elements ";
    arr.deletedata(1);
    arr.deletedata(2);
    arr.showdata();

    return 0;
}

