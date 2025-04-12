#include<iostream>
using namespace std;
bool ugly_number(int n){
    if(n<=0) return false;
    if(n==1) return true;
    if(n%2==0) return ugly_number(n/2);
    if(n%3==0) return ugly_number(n/3);
    if(n%5==0) return ugly_number(n/5);
    return false;
}
int main(){
    int n;
    cin>>n;
    if(ugly_number(n)) cout<<"Yes"<<endl;
    else cout<<"No"<<endl;
    return 0;
}