//Heap/priority queue
   // print the data hight priority 
#include<iostream>
#include<queue>
using namespace std;
int main(){
    priority_queue<int> pq;
   pq.push(20);
   pq.push(200);
   pq.push(30);
   pq.push(10);
   pq.push(1000);
   
    while(!pq.empty()){
       cout<<"top : "<<pq.top()<<endl;
       pq.pop();
    }
   return 0;
}