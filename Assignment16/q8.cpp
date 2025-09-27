//Write a recursion function to find nth term of the fibonacci series
#include<iostream>
using namespace std;
int fibonacciserized(int num){
    if(num==0 || num==1)
       return num;
    return fibonacciserized(num-1)+fibonacciserized(num-2);
}
int main(){
    int n;
    cout<<"enter the number: ";
    cin>>n;
    cout<<"number: "<<n<<" fibonacci serized: "<<fibonacciserized(n);
    return 0;
}