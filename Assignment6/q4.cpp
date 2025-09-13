//q1 and define the methods to insert the data in to the lisat in to the end
#include<iostream>
using namespace std;
struct Node{
    int item;
    Node* next;
};
class Cll{
    private:
      Node* last;
    public:
      Cll();
      void insertatlast(int);
      void showdata();
};
Cll::Cll(){
    last=nullptr;
}
void Cll::insertatlast(int data){
    Node* n=new Node;
    n->item=data;
    if (last == nullptr) {
        // First node in the list
        n->next = n;  // Circular reference
        last = n;
    } else {
        // Insert at the end
        n->next = last->next;  // Point new node to first node
        last->next = n;        // Last node points to new node
        last = n;              // Update last pointer
    }

}

void Cll::showdata(){
    if(last==nullptr){
        cout<<"list is empty.\n ";
        return;
    }
    Node* temp=last->next;
    do{
        cout<<temp->item<<" ";
        temp=temp->next;
    }while(temp!=last->next);
    cout<<endl;
}

int main(){
    Cll c1;
    c1.insertatlast(100);
    c1.insertatlast(200);
    c1.insertatlast(300);
    c1.insertatlast(400);
    c1.showdata();
    return 0;
}
