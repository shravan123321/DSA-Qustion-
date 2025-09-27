//write a recursive function to calculate sum of first N natural number
#include<iostream>
using namespace std;
int fun1(int);
int main(){
    int n;
    cout<<"enter the number: ";
    cin>>n;
    fun1(n);
    cout<<"number:"<<n<<" total count natural  number: "<<fun1(n);
    return 0;
}

int fun1(int num){
    if(num==0)
      return 0;
    int count=0;
    return num+fun1(num-1);
}