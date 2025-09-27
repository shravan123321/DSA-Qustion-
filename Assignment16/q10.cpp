//Write a recursive function to calculate X power Y
#include<iostream>
using namespace std;
 int powersum(int,int);
int main(){
    int x,y;
    cout<<"enter the number: ";
    cin>>x;
    cout<<"enter the number ke power: ";
    cin>>y;
   cout<<"number: "<<x<<" power: "<<y<<" sumpower is: "<<powersum(x,y);
    return 0;
}

int powersum(int n,int m){
    if(n==0 || m==1){
       return n;
    }else if(m==0){
        return 1;
    }
    return n+powersum(n,m-1);
}