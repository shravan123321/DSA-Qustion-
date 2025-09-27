//Write the recursive function to print squares of first N natural number
#include<iostream>
using namespace std;
 void fun1(int);
int main(){
    int num;
    cout<<"enter the number: ";
    cin>>num;
    fun1(num);
    return 0;
}

void fun1(int n){
    if(n==0)
       return ;
    fun1(n-1);
    cout<<n<<" squares-> "<<n*n<<endl;
}