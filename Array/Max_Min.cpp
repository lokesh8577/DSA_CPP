#include<iostream>
using namespace std;
int getMax(int num[],int n){
    int Max = INT_MIN;
    for(int i=0;i<n;i++){
        if(num[i]>Max){
            Max = num[i];
            }
    }
    return Max;
}
int getMin(int num[],int n){
    int Min = INT_MAX;
    for(int i=0;i<n;i++){
        if(num[i]<Min){
            Min = num[i];
            }
    }
    return Min;
}
int main(){
int size;
cout<<"Enter the size of array: ";
cin>>size;
int num[size];
cout<<"Enter the elements of array: ";
for(int i=0;i<size;i++){
    cin>>num[i];
    }
    cout<<"maximum element in array is : "<<getMax(num,size)<<endl;
    cout<<"minimum element in array is : "<<getMin(num,size)<<endl;
    return 0;

}