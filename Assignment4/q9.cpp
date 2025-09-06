//define the methods to delete specific node
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
    void deleteFirst();
    void deleteLast();
    void deleteNode(int);
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
    if (start) {
        Node *t = start;
        start = start->next;
        delete t;
    }
}

void Sll::deleteLast() {
    if (!start) return;

    if (!start->next) {
        delete start;
        start = nullptr;
        return;
    }

    Node *t = start;
    while (t->next->next) {
        t = t->next;
    }

    delete t->next;
    t->next = nullptr;
}

void Sll::deleteNode(int key) {
    if (!start) return;

    if (start->item == key) {
        Node *t = start;
        start = start->next;
        delete t;
        return;
    }

    Node *t = start;
    while (t->next && t->next->item != key) {
        t = t->next;
    }

    if (t->next) {
        Node *temp = t->next;
        t->next = t->next->next;
        delete temp;
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
    
    cout << "Original List: ";
    list.display();

    list.deleteNode(20);
    cout << "After Deleting Node with Value 20: ";
    list.display();

    list.deleteFirst();
    cout << "After Deleting First Node: ";
    list.display();

    list.deleteLast();
    cout << "After Deleting Last Node: ";
    list.display();

    return 0;
}