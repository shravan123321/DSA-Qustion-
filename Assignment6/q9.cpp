//q1 and define a methods to delete a spacific node
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
    void deletespacific(int);
    void showdata();
};

circularlinkedlist::circularlinkedlist() {
    last = nullptr;
}

void circularlinkedlist::insertdata(int data) {
    node* n = new node;
    n->item = data;
    if(last == nullptr) {
        last = n;
        n->next = n;
    } else {
        n->next = last->next;
        last->next = n;
        last = n;
    }
}

void circularlinkedlist::deletespacific(int key) {
    if(last == nullptr) {
        cout << "circularlinked list data: Empty";
        return;
    }
    node* curr = last->next;
    node* prev = last;

    do {
        if(curr->item == key) {
            // only one node
            if(curr == last && curr->next == last) {
                delete curr;
                last = nullptr;
                return;
            }

            // delete first node
            if(curr == last->next) {
                last->next = curr->next;
                delete curr;
                return;
            }

            // delete last node
            if(curr == last) {
                prev->next = curr->next;
                delete curr;
                last = prev;
                return;
            }

            // middle node
            prev->next = curr->next;
            delete curr;
            return;
        }

        prev = curr;
        curr = curr->next;
    } while(curr != last->next);

    cout << "Key not found\n";
}

void circularlinkedlist::showdata() {
    if(last == nullptr) {
        cout << "circularlinked list Data: Empty";
        return;
    }
    node* item = last->next;
    do {
        cout << item->item << " ";   // ✅ data print
        item = item->next;
    } while(item != last->next);
    cout << endl;
}

int main() {
    circularlinkedlist c1;
    cout << "circularlinked list Data: ";
    c1.showdata();
    cout << endl;

    c1.insertdata(10);
    c1.insertdata(20);
    c1.insertdata(30);
    c1.insertdata(40);
    c1.insertdata(50);

    cout << "circularlinked list Data: ";
    c1.showdata();
    cout << endl;

    int data;
    cout<<"Eneter the data to deleter the spacific node:";
    cin>>data;

    c1.deletespacific(data);

    cout << "circularlinked list Data after delete specific node: ";
    c1.showdata();
    return 0;
}
