#include<iostream>
using namespace std;

class dynArray {
private:
    int capsity;
    int lastindex;
    int* ptr;

public:
    dynArray(int);
    ~dynArray();
    bool Isfull();
    bool Isempty();
    void setdata(int data);
    void showdata();
};

dynArray::dynArray(int data) {
    capsity = data;
    lastindex = -1;
    ptr = new int[capsity];
}

dynArray::~dynArray() {
    delete[] ptr;
}

bool dynArray::Isfull() {
    return (lastindex == capsity - 1);
}

bool dynArray::Isempty() {
    return (lastindex == -1);
}

void dynArray::setdata(int data) {
    if (Isfull()) {
        cout << "DynArray is Full" << endl;
        return;
    }
    lastindex++;
    ptr[lastindex] = data;
}

void dynArray::showdata() {
    if (Isempty()) {
        cout << "DynArray is Empty" << endl;
    } else {
        for (int i = 0; i <= lastindex; i++) {
            cout << ptr[i] << " ";
        }
        cout << endl;
    }
}

int main() {
    int a1;
    cout << "Enter the Array size: ";
    cin >> a1;

    dynArray arr(a1);

    arr.showdata();   // Initially empty
    cout << endl;

    arr.setdata(10);
    arr.setdata(20);
    arr.setdata(30);

    cout << endl;
    arr.showdata();

    return 0;
}
