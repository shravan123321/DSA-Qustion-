//define a class BST(Binary serch tree ) with node type pointer root as member variable. implement Binary Serch tree Using linked representation
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
};