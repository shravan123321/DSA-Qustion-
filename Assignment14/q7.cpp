//q1 and define a methods for postorder traversing of BST
#include<iostream>
using namespace std;

struct node{
    int item;
    node* left;
    node* right;
};

class BSTPostorder{
    private:
      node* root;
      void postorder(node*);
    public:
    BSTPostorder();
      void insertdata(int);
      void postorder();
};

BSTPostorder::BSTPostorder(){
    root=nullptr;
}

void BSTPostorder::insertdata(int data){
    node* n=new node;
    n->item=data;
    n->left=nullptr;
    n->right=nullptr;

    if(root==nullptr){
        root = n;
        return ;
    }

    node* temp =root;
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

void BSTPostorder::postorder(){
    postorder(root);
}

void BSTPostorder::postorder(node* ptr){
    if(ptr!=nullptr){
       postorder(ptr->left);
       postorder(ptr->right);
       cout<<ptr->item<<" ";
    }
}

int main(){
    BSTPostorder bp1;
    bp1.insertdata(20);
    bp1.insertdata(10);
    bp1.insertdata(60);
    bp1.insertdata(30);
    bp1.insertdata(50);

    cout<<"POSTORDER: ";
    bp1.postorder();


    return 0;
}