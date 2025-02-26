#include<iostream>
using namespace std;
int main(){
    for(int i=1;i<=4;i++){
        for(int k=1;k<=i;k++){
            cout<<" ";
        }
        for(int j=4;j>=i;j--){
            cout<<i;
    }
    cout<<endl;
}
return 0;
}