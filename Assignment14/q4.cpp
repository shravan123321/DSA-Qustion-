//q1 and define a methods to insert a new elements in the BST

#include<iostream>
using namespace std;

struct node{
    node* left;
    int item;
    node* right;
};

class BST{
    private:
      node* root;
    public:
      BST();
      bool Isempty();
      void insertdata(int);
      void showdata();
};

BST::BST(){
    root=nullptr;
}

bool BST::Isempty(){
    return (root==nullptr);
}

void BST::insertdata(int data){
    node* n = new node;
    n->left = nullptr;
    n->item = data;
    n->right = nullptr;

    if (Isempty()) {
        root = n;
        return;
    }

    node* temp = root;
    node* parent = nullptr;

    while (temp != nullptr) {
        parent = temp;
        if (data == temp->item) {
            delete n; // Avoid duplicates
            return;
        } else if (data < temp->item) {
            temp = temp->left;
        } else {
            temp = temp->right;
        }
    }

    if (data < parent->item)
        parent->left = n;
    else
        parent->right = n;
}

void BST::showdata() {
    inorder(root);
}

void inorder(node* temp) {
    if (temp != nullptr) {
        inorder(temp->left);
        cout << temp->item << " ";
        inorder(temp->right);
    }
}


int main(){
    BST b1;
    cout<<"BST Data: ";
    b1.showdata();
    b1.insertdata(10);
    b1.insertdata(200);
    b1.insertdata(100);
    b1.insertdata(20);

    cout<<"data: ";
    b1.showdata();

  return 0;
}