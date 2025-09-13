//qustion1 and define the methods to deleted the spacific node
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
    void showdata();  // Display list elements
    void deletespacific(int); // Fixed function signature
};

// Insert a new node at the beginning
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

// Display list elements
void Dll::showdata() {
    Node* temp = start;
    while (temp != nullptr) {
        cout << temp->item << " ";
        temp = temp->next;
    }
    cout << endl;
}

// Delete a specific node from the list
void Dll::deletespacific(int data) {
    if (start == nullptr) {
        cout << "List is empty, nothing to delete." << endl;
        return;
    }

    Node* temp = start;

    // Traverse to find the node with the given value
    while (temp != nullptr && temp->item != data) {
        temp = temp->next;
    }

    // If node is not found
    if (temp == nullptr) {
        cout << "Node with value " << data << " not found." << endl;
        return;
    }

    // If node to be deleted is the first node
    if (temp == start) {
        start = temp->next;
        if (start != nullptr) {
            start->prev = nullptr;
        }
    } else {
        temp->prev->next = temp->next;
        if (temp->next != nullptr) {
            temp->next->prev = temp->prev;
        }
    }

    delete temp;  // Free memory
    cout << "Node with value " << data << " deleted successfully." << endl;
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

    // Fixed function call with parameter
    d.deletespacific(30); // Deletes node with value 30
    cout << "Updated Doubly Linked List elements: ";
    d.showdata();  // Expected Output: 60 50 40 20 10

    return 0;
}