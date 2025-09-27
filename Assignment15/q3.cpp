//write the recursive function to print first N odd natural number
#include<iostream>
using namespace std;
  void fun(int num){
    if(num==0)
       return;
    fun(num-1);
    if(num%2!=0)
       cout<<num<<" ";
  }
int main(){
  int n;
  cout<<"enter the number: ";
  cin>>n;
  fun(n);

  return 0;
}