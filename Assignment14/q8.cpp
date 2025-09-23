//q1 and define a methods to delete an elements from BST
#include<iostream>
using namespace std;

struct node {
    int item;
    node* left;
    node* right;
};

class BST {
private:
    node* root;
    node* DeleteNode(node* root, int key);
    node* MinValueNode(node* ptr);
    void Inorder(node* ptr);

public:
    BST();
    void Insertdata(int);
    void Delete(int);
    void Inorder();
};

BST::BST() {
    root = nullptr;
}

void BST::Insertdata(int data) {
    node* n = new node;
    n->item = data;
    n->left = nullptr;
    n->right = nullptr;

    if (root == nullptr) {
        root = n;
        return;
    }

    node* temp = root;
    node* parent = nullptr;

    while (temp != nullptr) {
        parent = temp;
        if (data < temp->item)
            temp = temp->left;
        else
            temp = temp->right;
    }

    if (data < parent->item)
        parent->left = n;
    else
        parent->right = n;
}

void BST::Inorder() {
    Inorder(root);
    cout << endl;
}

void BST::Inorder(node* ptr) {
    if (ptr != nullptr) {
        Inorder(ptr->left);
        cout << ptr->item << " ";
        Inorder(ptr->right);
    }
}

node* BST::MinValueNode(node* ptr) {
    node* current = ptr;
    while (current && current->left != nullptr)
        current = current->left;
    return current;
}

node* BST::DeleteNode(node* root, int key) {
    if (root == nullptr)
        return root;

    if (key < root->item)
        root->left = DeleteNode(root->left, key);
    else if (key > root->item)
        root->right = DeleteNode(root->right, key);
    else {
        if (root->left == nullptr) {
            node* temp = root->right;
            delete root;
            return temp;
        } else if (root->right == nullptr) {
            node* temp = root->left;
            delete root;
            return temp;
        }
        node* temp = MinValueNode(root->right);
        root->item = temp->item;
        root->right = DeleteNode(root->right, temp->item);
    }
    return root;
}

void BST::Delete(int key) {
    root = DeleteNode(root, key);
}

int main() {
    BST b;
    b.Insertdata(50);
    b.Insertdata(30);
    b.Insertdata(70);
    b.Insertdata(20);
    b.Insertdata(40);
    b.Insertdata(60);
    b.Insertdata(80);

    cout << "Inorder before deletion: ";
    b.Inorder();

    b.Delete(20);
    cout << "Inorder after deleting 20: ";
    b.Inorder();

    b.Delete(30);
    cout << "Inorder after deleting 30: ";
    b.Inorder();

    b.Delete(50);
    cout << "Inorder after deleting 50: ";
    b.Inorder();

    return 0;
}
