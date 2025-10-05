// define the priority queue in heaps
#include<iostream>
#include<queue>
using namespace std;

class students{
    public:
       string name;
       int Roll_no;
       int marks;
    students(string n,int R,int m){
    this->name=n;
    this->Roll_no=R;
    this->marks=m;
}
    bool operator < (const students &obj) const {
        return this->marks < obj.marks;
    }
};


int main(){
    priority_queue<students> pq;
    pq.push(students("apj abdul kalam", 22, 70));
    pq.push(students("nilkmal shreeyashto", 10, 50));
    pq.push(students("suresh thakur", 2, 30));
    pq.push(students("bhupendera mahto", 30, 70));
    pq.push(students("sudhir yadav", 12, 90));
    pq.push(students("shivam kumar", 31, 80));

   while(!pq.empty()){
    students s=pq.top();
    cout<<s.name<<" "<<"Roll_no: "<<s.Roll_no<<" marks: "<<s.marks<<endl;
    pq.pop();
   } 
    return 0;
}