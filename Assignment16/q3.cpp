//Write a recursive function to calculate sum of first N even natural number
#include<iostream>
using namespace std;

int sumeven(int);

int main(){
    int n;
    cout<<"enter the number: ";
    cin>>n;
    cout<<"number: "<<n<<"total evennumber sum: "<<sumeven(n);
    return 0;
}

int sumeven(int num){
    if(num==0)
       return 0;
    if(num%2==0)
       return num+sumeven(num-1);
    else  
       return sumeven(num-1);
}