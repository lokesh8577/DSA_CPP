#include<iostream>
using namespace std;
inline int getmax(int &a,int &b){
    return (a>b)?a : b;
}
int main(){
    int a= 10 , b= 20;
    int ans=0;
    ans = getmax(a,b);
    cout<<ans<<endl;
    a+=2;
    b-=1;
    ans = getmax(a,b);
    cout<<ans<<endl;
    return 0;
}