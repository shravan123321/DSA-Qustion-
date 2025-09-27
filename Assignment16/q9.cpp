//Write the recursive function to calculate HCF of two number 
#include<iostream>
using namespace std;

int HCF(int,int);
int main(){
    int n,m;
    cout<<"enter the first number: ";
    cin>>n;
    cout<<"enter the second number: ";
    cin>>m;

    cout<<"first: "<<n<<"second: "<<m<<" HCF: "<<HCF(n,m);
  return 0;
}

int HCF(int a,int b){
    if(b==0)
       return a;
    return HCF(b,a%b);
}