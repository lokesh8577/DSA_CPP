#include<iostream>
using namespace std;
void counting(int n){
    if(n==0){ 
        return ;
    }
    counting(n-1);
    cout<<n<<" ";
}
int main(){
    int n;
    cin>>n;
    cout<<n<<endl;
    counting(n);
    return 0;
}