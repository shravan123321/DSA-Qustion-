//q1 and define a constructor to initialise root pointer NULL

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
 };

 BST::BST(){
    root=nullptr;
 }