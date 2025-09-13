#include<iostream>
using namespace std;

struct node {
    int item;
    node* next;
};

class circularlinkedlist {
private:
    node* last;
public:
    circularlinkedlist();
    ~circularlinkedlist();
    void insertafter(int);
    void deletefirst();
    void showdata();
};

circularlinkedlist::circularlinkedlist() {
    last = nullptr;
}

void circularlinkedlist::insertafter(int data) {
    node* n = new node;
    n->item = data;

    if (last == nullptr) {
        last = n;
        n->next = n;
    } else {
        n->next = last->next;
        last->next = n;
        last = n;
    }
}

void circularlinkedlist::deletefirst() {
    if (last == nullptr) {
        return;
    }
    node* first = last->next;

    if (first == last) {
        delete first;
        last = nullptr;
    } else {
        last->next = first->next;
        delete first;
    }
}

void circularlinkedlist::showdata() {
    if (last == nullptr) {
        cout << "Empty\n";
        return;
    }
    node* temp = last->next;
    do {
        cout << temp->item << " ";
        temp = temp->next;
    } while (temp != last->next);
    cout << "\n";
}

circularlinkedlist::~circularlinkedlist() {
    while (last != nullptr) {
        deletefirst();
    }
}

int main() {
    circularlinkedlist c1;
    c1.insertafter(100);
    c1.insertafter(200);
    c1.insertafter(300);
    c1.showdata();

    cout << "After deleting first node: ";
    c1.deletefirst();
    
    c1.showdata();
    return 0;
}
