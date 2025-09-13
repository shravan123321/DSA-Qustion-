//define the methods to delete first node frome the list
#include<iostream>
using namespace std;

class Node {
public:
    int item;
    Node *next;

    Node(int data) {
        item = data;
        next = nullptr;
    }
};

class Sll {
private:
    Node *start;
public:
    Sll() { start = nullptr; }
    void insertData(int); 
    void deleteFirst(); // Corrected method declaration
    void display();
};

void Sll::insertData(int data) {
    Node *n = new Node(data);
    
    if (!start) {
        start = n;
    } else {
        Node *t = start;
        while (t->next) {
            t = t->next;
        }
        t->next = n;
    }
}

void Sll::deleteFirst() {
    if (start) { // Fixed spelling mistake
        Node *t = start;
        start = start->next;
        delete t; // Deleting the first node
    }
}

void Sll::display() {
    Node *t = start;
    while (t) {
        cout << t->item << " -> ";
        t = t->next;
    }
    cout << "NULL" << endl;
}

int main() {
    Sll list;
    list.insertData(10);
    list.insertData(20);
    list.insertData(30);

    list.display();
    
    list.deleteFirst(); // Deleting the first node
    list.display();

    return 0;
}