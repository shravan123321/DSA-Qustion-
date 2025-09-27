//write the recursive function to print first N natural number
#include<iostream>
using namespace std;

void f1(int num){
  if(num==0)
     return;
  f1(num-1);
  cout<<num<<" ";
}
int main(){
  int n;
  cout<<"enter the number: ";
  cin>>n;
  f1(n);
  return 0;
}