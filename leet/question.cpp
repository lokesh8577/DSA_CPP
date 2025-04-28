#include<iostream>
using namespace std;
long long int fact(int n){
    if(n==1)return 1;
    return n*fact(n-1);
}
int trailingZeroes(int n) {
    if(n==1)return 0;
    long long int facto = fact(n);
    int count=0;
    while(facto!=0){
        if((facto%10)!=0){
            break;
        }
        count++;
        facto = facto/10;

    }
    return count;
    
}
int main(){
    int n=25;
    int ans = trailingZeroes(n);
    cout<<ans<<endl;
    return 0;
}