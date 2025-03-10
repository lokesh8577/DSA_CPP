#include<iostream>
using namespace std;
bool sorted(int *arr,int n){
    if(n==0 || n==1){
        return true;
        }
        else if(arr[0]>arr[1]){
            return false;
        }
        else{
            return sorted(arr+1,n-1);
        }
}
int main(){
    int arr[5]={1,3,42,252,45235};
    cout<<sorted(arr,5);
    return 0;
}