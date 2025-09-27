//Write the recursive function to  print cubes of first N natural number.
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

void fun1(int n){
    if(n==0)
      return ;
    fun1(n-1);
    cout<<n<<" = Cubes->"<<n*n*n<<endl;
}