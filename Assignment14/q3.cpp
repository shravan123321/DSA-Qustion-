//q1 and define a methods to check if the tree is empty
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
};

bool BST::Isempty(){
    return (root==nullptr);
}