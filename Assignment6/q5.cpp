//q1 and define a methods to serch a node with the given items
#include<iostream>
using namespace std;

struct Node {
    int item;
    Node* next;
};

class Cll {
    private:
        Node* start;  // Start node of circular list
    public:
        Cll();
        void insertdata(int);
        Node* searchdata(int);
        void showdata();
};

Cll::Cll() {
    start = nullptr;
}

void Cll::insertdata(int data) {
    Node* n = new Node;
    n->item = data;

    if (start == nullptr) {
        // First node insertion
        n->next = n;
        start = n;
    } else {
        // Insert at the end
        Node* temp = start;
        while (temp->next != start) {
            temp = temp->next;
        }
        temp->next = n;
        n->next = start;  // Maintain circular structure
    }
}

Node* Cll::searchdata(int data) {
    if (start == nullptr) {
        return nullptr;  // List is empty
    }

    Node* t = start;
    do {
        if (t->item == data) {
            return t;
        }
        t = t->next;
    } while (t != start);  // Loop until we reach starting node again

    return nullptr;  // Node not found
}

void Cll::showdata() {
    if (start == nullptr) {
        cout << "List is empty.\n";
        return;
    }

    Node* temp = start;
    do {
        cout << temp->item << " ";
        temp = temp->next;
    } while (temp != start);
    cout << endl;
}

int main() {
    Cll c1;
    c1.insertdata(10);
    c1.insertdata(20);
    c1.insertdata(30);

    c1.showdata();  // Outputs: 10 20 30

    Node* found = c1.searchdata(200);
    if (found) {
        cout << "Node found: " << found->item << endl;
    } else {
        cout << "Node not found.\n";
    }
}
