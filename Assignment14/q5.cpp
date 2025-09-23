//q1 and define a methods for preorder traversing of BST
#include<iostream>
using namespace std;

struct node{
    int item;
    node* left;
    node* right;
};

class BST{
    private:
       node* root;
       void preorder(node* ptr);
    public:
       BST();
       void insertdata(int);
       void preorder();
};

BST::BST(){
    root=nullptr;
}

 void BST::insertdata(int data){
    node* n=new node;
    n->item=data;
    n->left=nullptr;
    n->right=nullptr;
    if(root == nullptr){
        root = n;
        return ;
    }

    node* temp = root;
    node* parent =nullptr;

    while(temp!=nullptr){
        parent=temp;
        if(data<temp->item)
           temp = temp->left;
        else
           temp=temp->right;
    }
    if(data<parent->item)
       parent->left=n;
    else
       parent->right = n;
 }

 //preOrder Tree
void BST::preorder(){
    preorder(root);
}

void BST::preorder(node* ptr){
    if(ptr){
        cout<<ptr->item<<" ";
        preorder(ptr->left);
        preorder(ptr->right);
    }
}


int main() {
    BST t;
    t.insertdata(50);
    t.insertdata(30);
    t.insertdata(70);
    t.insertdata(20);
    t.insertdata(40);
    t.insertdata(60);
    t.insertdata(80);

    cout << "Preorder Traversal: ";
    t.preorder();

    return 0;
}