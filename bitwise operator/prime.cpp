#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter the value of n :"<<endl;
    cin>>n;
    bool isPrime =1;
    for(int i=2;i<=n/2;i++){
        if(n%i==0){
            isPrime=0;
            break;
        }

    }
    if(isPrime==1){
        cout<<"number is prime"<<endl;
        }
        else
        cout<<"number is not prime"<<endl;
        return 0;


}