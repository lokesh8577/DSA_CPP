#include<iostream>
using namespace std;
void print(int arr[],int n,int start=0){
    for(int i=start;i<n;i++){
        cout<<arr[i]<<" ";
    }
}
int main(){
    int arr[5]={1,2,34,4,5};
    // print(arr,5);
    print(arr,5,3);
    return 0;
}