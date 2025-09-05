//q1 and ddefine a methods to appends and insetdata  new in array 
#include <iostream>
using namespace std;

class DynArray{
private:
    int capsity;
    int lastindex;
    int* ptr;
public:
    DynArray(int n){
        capsity = n;
        lastindex = -1;
        ptr = new int[capsity];
    }
    ~DynArray(){ delete[] ptr; }

    bool Isfull(){ return lastindex == capsity - 1; }
    bool Isempty(){ return lastindex == -1; }

    void appenddata(int data){
        if (Isfull()){ cout << "Overflow\n"; return; }
        ptr[++lastindex] = data;
    }

void insertdata(int index, int data){
    if (Isfull()) {
        cout << "Overflow\n";
        return;
    }
    if (index < 0 || index > lastindex + 1) {
        cout << "Invalid index\n";
        return;
    }

    for (int i = lastindex; i >= index; --i) {   // shift right
        ptr[i + 1] = ptr[i];
    }

    ptr[index] = data;
    ++lastindex;
}


    void showdata(){
        if (Isempty()){ 
            cout << "Empty\n"; return;
         }
        for (int i = 0; i <= lastindex; ++i) cout << ptr[i] << " ";
        cout << "\n";
    }
};

int main(){
    int size;
    cout << "enter the DynArray Size: ";
    cin >> size;

    DynArray arr(size);

    // append
    arr.appenddata(100);
    arr.appenddata(200);
    arr.appenddata(300);
    arr.appenddata(400);
    arr.showdata();

    // insert
    arr.insertdata(3, 50);  // before index 3
    arr.insertdata(4, 40);  // before index 4
    arr.showdata();
    return 0;
}
