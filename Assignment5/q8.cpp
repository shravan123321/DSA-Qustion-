//qustion1 and define the method to delete last Node of list
#include <iostream>
using namespace std;

struct Node {
    Node* prev;
    int item;
    Node* next;
};

class Dll {
private:
    Node* start;
public:
    Dll() { start = nullptr; } // Constructor to initialize the list
    void insertdata(int);  // Insert at the beginning
    void showdata();  
    void deletelast();
};

void Dll::insertdata(int data) {
    Node* n = new Node;
    n->item = data;
    n->prev = nullptr;
    n->next = start;

    if (start) {
        start->prev = n;
    }
    start = n;
}

void Dll::showdata() {
    Node* temp = start;
    while (temp != nullptr) {
        cout << temp->item << " ";
        temp = temp->next;
    }
    cout << endl;
}

void Dll::deletelast() {
    if (start == nullptr) {
        cout << "List is empty, nothing to delete." << endl;
        return;
    }

    Node* temp = start;

    // If there's only one node
    if (start->next == nullptr) {
        delete start;
        start = nullptr;
        return;
    }

    // Traverse to the last node
    while (temp->next != nullptr) {
        temp = temp->next;
    }

    // Update second-last node's next pointer to null
    temp->prev->next = nullptr;

    delete temp; // Free memory of last node
}
int main() {
    Dll d;
    d.insertdata(10);
    d.insertdata(20);
    d.insertdata(30);
    d.insertdata(40);
    d.insertdata(50);
    d.insertdata(60);

    cout << "Doubly Linked List elements: ";
    d.showdata();  // Expected Output: 60 50 40 30 20 10

    d.deletelast();
    cout<<"updata the data ";
    d.showdata();

    return 0;
}