#include<iostream>
using namespace std;
int count_bits(int n){
    int count=0;
     int bit=0;
while(n!=0){
    bit = n&1;
    if(bit==1){
        count++;
    }
    n=n>>1;
}
return count;
}
int main(){
int a,b;
cin>>a>>b;
cout<<(count_bits(a)+count_bits(b));
return 0;
}
