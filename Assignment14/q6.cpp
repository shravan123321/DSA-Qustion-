//q1 and define a methods for inorder traversing of BST
#include<iostream>
using namespace std;

struct node{
    int item;;
    node* left;
    node* right;
};

class BST{
    private:
      node* root;
      void Inorder(node*);
    public:
      BST();
      void Insertdata(int);
      void Inorder();
};

BST::BST(){
    root=nullptr;
}

void BST::Insertdata(int data){
    node* n=new node;
    n->item=data;
    n->left=nullptr;
    n->right=nullptr;
    
    if(root == nullptr){
        root = n;
        return ;
    }

    node* temp=root;
    node* parent=nullptr;

    while(temp!=nullptr){
        parent=temp;

        if(data<temp->item)
           temp=temp->left;
        else
           temp=temp->right;
    }

    if(data<parent->item)
        parent->left=n;
    else 
        parent->right=n;
}


//INorder data for BST tree
void BST::Inorder(){
    Inorder(root);
}

void BST::Inorder(node* ptr){
   if(ptr!=nullptr){
     Inorder(ptr->left);
     cout<<ptr->item<<" ";
     Inorder(ptr->right);    
   }
}


// Main function for testing
int main() {
    BST b;
    b.Insertdata(50);
    b.Insertdata(30);
    b.Insertdata(70);
    b.Insertdata(20);
    b.Insertdata(40);
    b.Insertdata(60);
    b.Insertdata(80);

    cout << "Inorder Traversal: ";
    b.Inorder();
    return 0;
}