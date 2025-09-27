//Write the recursive function to print squares of first N natural number in reverse order
#include<iostream>
using namespace std;

void fun1(int);

int main(){
    int k;
    cout<<"enter the number: ";
    cin>>k;
    fun1(k);
    return 0;
}

void fun1(int num){
    if(num==0)
       return ;
    cout<<num<<"  squares->"<<num*num<<endl;
    fun1(num-1);
}