//define the methods to deleted last node of the list
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
    void deleteLast();
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
    
    list.deleteLast();
    list.display();

    return 0;
}