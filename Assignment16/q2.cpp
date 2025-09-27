//write the recursive function to calculate sum of first N odd natural number
#include<iostream>
using namespace std;

int sumodd(int);

int main(){
    int n;
    cout<<"enter the number: ";
    cin>>n;
    cout<<"number:"<<n<<"sum all odd number"<<sumodd(n);
    return 0;
}

int sumodd(int num){
    if(num==0)
       return 0;
    if(num%2!=0)
       return num+sumodd(num-1);
    else
      return sumodd(num-1);
}