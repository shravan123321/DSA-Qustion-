// lowerest value find out the and then value are the string

#include<iostream>
#include<queue>
#include<string>
#include<stack>
using namespace std;

int main(){
    priority_queue<string, vector<string>, greater<string>> pq;

    pq.push("shravan kumar");
    pq.push("sujit kumar");
    pq.push("karan kumar");
    pq.push("santosh kumar");

    while(!pq.empty()){
        cout<<"top: "<<pq.top()<<endl;
        pq.pop();
    }
    return 0;
}