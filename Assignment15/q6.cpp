// write the recursive function to print first N even natural number in reverse order
#include<iostream>
using namespace std;
void fun(int);
int main(){
    int n;
    cout<<"enter the number: ";
    cin>>n;
    fun(n);
    return 0;
}

void fun(int n){
    if(n==0)
       return ;
    if(n%2==0)
       cout<<n<<" ";
    fun(n-1);
}