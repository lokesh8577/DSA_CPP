#include<iostream>
using namespace std;
void count(int n, string number[]){
    if(n==0)
    return ;
    int digit=n%10;
    n=n/10;
    count(n , number);
    cout<<number[digit]<<" ";
}
int main(){
 string number[10]={"zero","one","two","three","four","five","six","seven","eight","nine"};
 int n;
 cout<<"enter the value of n :"<<endl;
 cin>>n;
 count(n,number);
 return 0;
}