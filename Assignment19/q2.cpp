//priority queue 
  // print the data lowerst to uper 
#include<iostream>
#include<queue>
#include<stack>
using namespace std;

int main(){
    priority_queue<int, vector<int>,greater<int>> pq;

    pq.push(10);
    pq.push(200);
    pq.push(100);
    pq.push(300);
    pq.push(500);

    while(!pq.empty()){
        cout<<"top: "<<pq.top()<<endl;
        pq.pop();
    }
    return 0;
}