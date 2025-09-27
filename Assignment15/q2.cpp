//write the recursive function to print first N natural number in reverse order
#include<iostream>
using namespace std;
 
void f1(int num){
    if(num==0)
      return ;
    cout<<num<<" ";
    f1(num-1);
}
int main(){
    int n;
    cout<<"enter the number: ";
    cin>>n;
    f1(n);

    return 0;
}