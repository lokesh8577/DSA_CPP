#include<iostream>
using namespace std;
int main(){
    //Fibonacci series
    int n;
    cout<<"Enter the number of terms in the series: ";
    cin>>n;
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
    return 0;
}