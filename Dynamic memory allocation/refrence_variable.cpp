#include<iostream>
using namespace std;
int& ref(int n){
    n=n+1;
    int &m = n;
    return m;
}
int main(){
    int value = 10;
    // int &j= value;
    // cout<<value<<endl;
    // value++;
    // cout<<value<<endl;
    // cout<<j<<endl;
    // j++;
    // cout<<j<<endl;




    cout<<ref(value);
    return 0;
}