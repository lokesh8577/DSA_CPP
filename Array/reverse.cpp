#include<iostream>
using namespace std;
void printArray(int num[],int n){
for(int i=0;i<n;i++)
cout<<num[i]<<" ";  
}
void reverseArray(int num[],int n){
    int start =0,end=n-1;
    while(start<=end){
        swap(num[start],num[end]);
        start++;
        end--;
    }
    }
int main(){
    int a1[]={1,2,3,4,5,6,7};
    int n=7;
    cout<<"Original array: ";
    printArray(a1,n);
    reverseArray(a1,n);
    cout<<"\nReversed array: ";
    printArray(a1,n);
    return 0;

}