// #include <iostream>
// using namespace std;

// struct Node {
//     Node* prev;
//     int item;
//     Node* next;
// };

// class Dll {
// private:
//     Node* start;
// public:
//     Dll() { start = nullptr; } // Initialize start pointer
//     void insertlast(int);  // Method to insert at the end
//     Node* searchdata(int); // Fixed return type
//     void showdata();
// };

// // Insert data at the end of the list
// void Dll::insertlast(int data) {
//     Node* n = new Node;
//     n->item = data;
//     n->next = nullptr;

//     if (start == nullptr) {
//         n->prev = nullptr;
//         start = n;
//     } else {
//         Node* t = start;
//         while (t->next != nullptr) {
//             t = t->next;
//         }
//         n->prev = t;
//         t->next = n;
//     }
// }

// // Search for a node with the given item
// Node* Dll::searchdata(int data) {
//     Node* t = start;
//     while (t) {
//         if (t->item == data)
//             return t;
//         t = t->next;
//     }
//     return nullptr; // Return nullptr if not found
// }

// // Display elements of the list
// void Dll::showdata() {
//     Node* temp = start;
//     while (temp != nullptr) {
//         cout << temp->item << " ";
//         temp = temp->next;
//     }
//     cout << endl;
// }

// int main() {
//     Dll d;
//     d.insertlast(10);
//     d.insertlast(20);
//     d.insertlast(30);
//     d.insertlast(40);
    
//     cout << "Doubly Linked List elements: ";
//     d.showdata();

//     int searchItem = 20;
//     Node* foundNode = d.searchdata(searchItem);

//     if (foundNode) {
//         cout << "Item " << searchItem << " found in the list!" << endl;
//     } else {
//         cout << "Item " << searchItem << " not found in the list." << endl;
//     }

//     return 0;
// }



//q1 nad defin the methods to serch the Node width the given item 
#include<iostream>
using namespace std;
struct node{
    node* prev;
    int item;
    node* next;
};

class doublylinkedlist{
    private:
     node* start;
    public:
      doublylinkedlist();
      void insertdata(int);
      node* serchdata(int);
      void showdata();
};

doublylinkedlist::doublylinkedlist(){
    start=nullptr;
}

void doublylinkedlist::insertdata(int data){
  node* n=new node;
  n->item=data;
  n->next=nullptr;
  n->next=start;
  if(start!=nullptr)
    start->prev=n;
  start=n; 
}

node* doublylinkedlist::serchdata(int data){
    node* t=start;
    while(t){
        if(t->item==data){
           cout<<"data is avlable: "<<data;
           return t;
        } 
        t=t->next;
    }
    cout<<"Data is Not avlable: ";
    return nullptr;
}


void doublylinkedlist::showdata(){
  node* temp=start;
  while(temp!=nullptr){
    cout<<temp->item<<" ";
    temp=temp->next;
  }
  cout<<endl;
}

int main(){
    doublylinkedlist d1;
    cout<<"doublylinkedlist Data: ";
    d1.showdata();

    cout<<endl;
    d1.insertdata(100);
    d1.insertdata(200);
    d1.insertdata(300);
    d1.insertdata(400);
    
    int s1;
    cout<<"enter the serching Data: ";
    cin>>s1;
    d1.serchdata(s1);
  cout<<endl;
    cout<<"doublylinkedlist All Data: ";
    d1.showdata();
  
    return 0;
}