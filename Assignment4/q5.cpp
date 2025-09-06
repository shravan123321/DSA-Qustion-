//q1 and define the methos to serch the node with given item
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
    void insertdata(int);
    node* searchNode(int);   
    void showdata();
};

singlylinkedlist::singlylinkedlist() {
    start = nullptr;
}

void singlylinkedlist::insertdata(int data) {
    node* n = new node;
    n->item = data;
    n->next = start;
    start = n;
}

node* singlylinkedlist::searchNode(int data) {  
    node* t = start;
    while (t) {
        if (t->item == data) {
            return t;  
        }
        t = t->next;
    }
    return nullptr;   // नहीं मिला
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

    s1.insertdata(100);
    s1.insertdata(200);
    s1.insertdata(300);
    s1.insertdata(400);

    cout << "linkedlist data: ";
    s1.showdata();

    int data;
    cout << "enter the searching data: ";
    cin >> data;

    node* result = s1.searchNode(data);  // ✅ सही call
    if (result != nullptr)
        cout << "Found: " << result->item << endl;
    else
        cout << "Not Found" << endl;

    return 0;
}
