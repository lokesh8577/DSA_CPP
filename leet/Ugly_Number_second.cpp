#include<iostream>
using namespace std;
int ugly(int n){
    int count=1;
    cout<<1;
    for(int i=1;i<INT_MAX;i++){
        if(i%2==0 || i%3==0 || i%5==0){
            cout<<i<<"\t";
            count++;
        }
        if(count==n){
            return i;
        }
    }  
    return 1;
}
int main(){
    int n;
    cin>>n;
    cout<<ugly(n)<<endl;
    
    return 0;
}