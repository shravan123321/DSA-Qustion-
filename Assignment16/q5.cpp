//Write a recursive function to calculate factorial of a number
#include<iostream>
using namespace std;
int sumfactorial(int);
int main(){
    int n;
    cout<<"enter the number: ";
    cin>>n;
    cout<<"number: "<<n<<" factorial number: "<<sumfactorial(n); 
    return 0;
}

int sumfactorial(int num){
    if(num==0 || num==1)
        return 1;
    return num*sumfactorial(num-1);
}