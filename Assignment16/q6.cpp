//Write a recursive function to calculate sum of the digit of a given number
#include<iostream>
using namespace std;

int sumdigitnum(int);

int main(){
    int n;
    cout<<"enter the number: ";
    cin>>n;
    cout<<"number: "<<n<<" sum all digit number: "<<sumdigitnum(n);
    return 0;
}

int sumdigitnum(int num){
    if(num==0)
       return 0;
    return num%10+sumdigitnum(num/10);
}
