//write the recursive function to print first N odd natural number reverse order
#include<iostream>
using namespace std;

void fun(int num){
    if(num==0)
       return;
    if(num%2!=0)
      cout<<num<<" ";
    fun(num-1);
}

int main(){
    int n;
    cout<<"enter the number: ";
    cin>>n;
    fun(n);

    return 0;
}