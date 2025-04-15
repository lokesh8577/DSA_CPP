#include<iostream>
using namespace std;
int minElement(int* arr , int n){
    int min=INT_MAX;
    for(int i=0;i<n;i++){
        int sum=0;
    while(arr[i]!=0){
        int digit=arr[i]%10;
        sum+=digit;
        arr[i]/=10;
    }
    if(sum<min){
        min = sum;
    }
}
return min;
}

int main(){
int n;
cout<<"Enter the number of elements in the array: ";
cin>>n;
int arr[n];
cout<<"Enter the elements of the array: ";
for(int i=0;i<n;i++){
    cin>>arr[i];
    }
    cout<<"The minimum sum of digits of the array elements is: "<<minElement(arr,n);
    return 0;

}