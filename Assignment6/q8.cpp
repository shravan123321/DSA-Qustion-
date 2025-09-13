//q1 and define a methods to delete the last node of the list
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
    void insertdata(int);
    void deleteatlast();
    void showdata();
};

circularlinkedlist::circularlinkedlist() {
    last = nullptr;
}

void circularlinkedlist::insertdata(int data) {
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

void circularlinkedlist::deleteatlast() {
    if (last == nullptr) {
        cout << "List is empty\n";
        return;
    }

    // Only one node
    if (last == last->next) {
        delete last;
        last = nullptr;
        return;
    }

    // Find second last
    node* temp = last->next;
    while (temp->next != last) {
        temp = temp->next;
    }

    temp->next = last->next;
    delete last;
    last = temp;
}

void circularlinkedlist::showdata() {
    if (last == nullptr) {
        cout << "circularlinkedlist data: Empty";
        return;
    }
    node* n = last->next;
    do {
        cout << n->item << " ";
        n = n->next;
    } while (n != last->next);
    cout << "\n";
}

int main() {
    circularlinkedlist c1;
    cout << "circularlinkedlist Data: ";
    c1.showdata();
    cout << endl;

    c1.insertdata(10);
    c1.insertdata(20);
    c1.insertdata(30);
    c1.insertdata(40);
    c1.insertdata(50);

    cout << "circularlinkedlist data: ";
    c1.showdata();
    cout << endl;

    cout << "delete the last data: ";
    c1.deleteatlast();
    c1.showdata();

    return 0;
}
