#include<iostream>
using namespace std;
int sum_array(int *arr,int n){
    if(n==0)return 0;
    if(n==1)return arr[0];
    else{
        return arr[0]+sum_array(arr+1,n-1);
    }
}
int main(){
    int arr[5]={1,2,4,56,6};
    cout<<sum_array(arr,5);
    return 0;
}