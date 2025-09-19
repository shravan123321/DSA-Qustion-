//q1 and define a methods to insert new item in the priorityqueue according to the priority number
#include<iostream>
using namespace std;

struct node {
    int item;
    node* next;
};

class priorityqueue {
private:
    node* start;
public:
    priorityqueue();
    void insertitem(int);
    void showdata();
};

priorityqueue::priorityqueue() {
    start = nullptr;  // ✅ correct assignment
}

void priorityqueue::insertitem(int data) {
    node* n = new node;
    n->item = data;
    n->next = nullptr;

    // insert at start if queue is empty or data is smallest
    if (start == nullptr || data < start->item) {
        n->next = start;
        start = n;
        return;
    }

    // insert in sorted (ascending) position
    node* temp = start;
    while (temp->next != nullptr && temp->next->item < data) {
        temp = temp->next;
    }
    n->next = temp->next;
    temp->next = n;
}

void priorityqueue::showdata() {
    if (start == nullptr) {
        cout << "priorityqueue is Empty\n";
        return;
    }
    node* temp = start;
    while (temp != nullptr) {
        cout << temp->item << " ";
        temp = temp->next;
    }
    cout << endl;
}

int main() {
    priorityqueue pq1;
    pq1.insertitem(10);
    pq1.insertitem(50);
    pq1.insertitem(30);
    pq1.insertitem(20);
    pq1.insertitem(40);

    cout << "priorityqueue Data: ";
    pq1.showdata();

    return 0;
}
