#include<iostream>
using namespace std;
void fibbo(int n){
    int fb[n];
    fb[0]=0;
    fb[1]=1;
    for(int i=2;i<n;i++){
        fb[i]=fb[i-1]+fb[i-2];  
        }
        cout<<"Fibonacci series is: ";
        for(int i=0;i<n;i++){
            cout<<fb[i]<<" ";
        }
}
int main(){
    int n;
    cout<<"Enter the number of terms: ";
    cin>>n;
    fibbo(n);
    return 0;
}