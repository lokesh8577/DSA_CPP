#include<iostream>
using namespace std;
bool search(int *arr,int n,int target){
    if(n==0)return false;
    if(arr[0]==target)return 1;
    else{
        return search(arr+1,n-1,target);
    }
}
int main(){
    int arr[5]={1,2,3,4,5};
    cout<<search(arr,5,12);
    return 0;
}