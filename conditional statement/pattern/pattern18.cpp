#include<iostream>
using namespace std;
int main(){
    int n=1;
    for(int i=5;i>=1;i--){
        for(int j=1;j<=i;j++){
            cout<<j;
        }
        if(i<5){
            for(int k=1;k<=n*2;k++){
                cout<<"*";
            }
            // if() 
                n++;
        }
        for(int j=i;j>=1;j--){
            cout<<j;
        }
        cout<<endl;
    }
    return 0;
}