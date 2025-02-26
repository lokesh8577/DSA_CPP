#include<iostream>
using namespace std;

int ap(int n){
    int ap= 3*n+7;
    return ap;
}
int main(){
int a,b;
cin>>a>>b;
cout<<ap(a)<<endl;
cout<<ap(b)<<endl;
return 0;
}