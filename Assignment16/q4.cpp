//Write the recursive function to calculate sum of first N natural numbers
#include<iostream>
using namespace std;
int sumsequare(int);
int main(){
    int n;
    cout<<"enter the number: ";
    cin>>n;
    cout<<"number: "<<n<<"sum of sequarenumber: "<<sumsequare(n);
    return 0;
}

int sumsequare(int num){
    if(num==0)
       return 0;
    return (num*num+sumsequare(num-1));
}