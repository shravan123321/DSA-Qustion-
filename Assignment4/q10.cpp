//define the destructor to deallocates memory for all the node in the linked list
#include<iostream>
using namespace std;

struct node {
    int item;
    node* next;
};

class singlylinkedlist {
private:
    node* start;
public:
    singlylinkedlist();
    ~singlylinkedlist();
    void setdata(int);
    void showdata();
};

singlylinkedlist::singlylinkedlist() {
    start = nullptr;  
}

singlylinkedlist::~singlylinkedlist() {
    node* temp;
    while (start != nullptr) {
        temp = start;
        start = start->next;
        delete temp;
    }
    cout << "\nDestructor called: Memory freed for all nodes.\n"; // Optional message
}

void singlylinkedlist::setdata(int data) {
    node* n = new node;
    n->item = data;
    n->next = start;
    start = n;
}

void singlylinkedlist::showdata() {
    node* temp = start;
    while (temp) {
        cout << temp->item << " ";
        temp = temp->next;
    }
    cout << endl;
}

int main() {
    singlylinkedlist s1;
    cout << "linkedlist data: ";
    s1.showdata();

    s1.setdata(100);
    s1.setdata(200);
    s1.setdata(300);
    s1.setdata(400);
    s1.setdata(500);

    cout << "linkedlist data: ";
    s1.showdata();
    return 0;
}
