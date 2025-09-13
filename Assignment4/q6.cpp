//define the methods to insert the data in to the list after the specified node of the list
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
    void insertAfter(int, int);
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

void Sll::insertAfter(int key, int data) {
    Node *t = start;
    
    while (t && t->item != key) {
        t = t->next;
    }
    
    if (t) {
        Node *n = new Node(data);
        n->next = t->next;
        t->next = n;
    } else {
        cout << "Node with item " << key << " not found." << endl;
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
    
    list.insertAfter(20, 25);
    list.display();

    return 0;
}