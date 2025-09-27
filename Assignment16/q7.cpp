//Write a recursive function to print binary of a given decimal number
#include<iostream>
using namespace std;

void decimaltobinary(int num){
    if(num==0)
        return ;
    decimaltobinary(num/2);
    cout<<num%2;
  
}

int main(){
    int n;
    cout<<"enter the number: ";
    cin>>n;
    cout<<"decimal number: "<<n<<"convert to binary: ";
    if(n==0){
        return 0;
    }else{
        decimaltobinary(n); 
    }
   
    return 0;
}