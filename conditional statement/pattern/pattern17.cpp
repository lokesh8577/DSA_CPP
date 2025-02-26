#include<iostream>
using namespace std;
int main(){
    for(int i=1;i<=4;i++){
        for(int k=1;k<=(4-i);k++){
            cout<<" ";
        }
        for(int j=1;j<=i;j++){
            cout<<j;
    }
    if(i>=2){
        for(int k =1;k<i;k++){
            cout<<k;
        }
    }
    cout<<endl;
}
return 0;
}