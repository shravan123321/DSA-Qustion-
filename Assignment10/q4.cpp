//q1 and define a methods to view rear and front elements 
#include<iostream>
using namespace std;

class queue {
private:
    int capacity;
    int rear;
    int front;
    int* ptr;

public:
    queue(int);
    bool Isfull();
    bool Isempty();
    void setdata(int);
    int viewrear();
    int viewfront();
    void showdata();
};

// Constructor
queue::queue(int size) {
    capacity = size;
    front = -1;
    rear = -1;
    ptr = new int[capacity];
}

// Check if queue is full
bool queue::Isfull() {
    return ((rear + 1) % capacity == front);
}

// Check if queue is empty
bool queue::Isempty() {
    return (front == -1);
}

// Insert data into queue
void queue::setdata(int data) {
    if (Isfull()) {
        cout << "Overflow queue\n";
        return;
    }

    if (Isempty()) {
        front = rear = 0;
    } else {
        rear = (rear + 1) % capacity;
    }

    ptr[rear] = data;
}

// View rear element
int queue::viewrear() {
    if (Isempty()) {
        cout << "Queue is empty\n";
        return -1;
    }
    return ptr[rear];
}

// View front element
int queue::viewfront() {
    if (Isempty()) {
        cout << "Queue is empty\n";
        return -1;
    }
    return ptr[front];
}

// Display all elements in queue
void queue::showdata() {
    if (Isempty()) {
        cout << "Queue is empty\n";
        return;
    }

    int i = front;
    while (true) {
        cout << ptr[i] << " ";
        if (i == rear) break;
        i = (i + 1) % capacity;
    }
    cout << endl;
}

// Main function
int main() {
    queue q1(6);

    q1.setdata(10);
    q1.setdata(20);
    q1.setdata(30);
    q1.setdata(40);
    q1.setdata(50);

    cout << "Queue elements: ";
    q1.showdata();

    cout << "Rear element: " << q1.viewrear() << endl;
    cout << "Front element: " << q1.viewfront() << endl;

    return 0;
}