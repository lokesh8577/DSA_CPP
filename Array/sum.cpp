#include<iostream>
using namespace std;

int sum(int num[],int n){
    int sum = 0;
    for(int i=0;i<n;i++){
        sum+=num[i];
    }
    return sum;
}
int main(){
    int size;
    cout<<"Enter the size of the array: ";
    cin>>size;
    int num[size];
    cout<<"Enter the elements of the array: ";
    for(int i=0;i<size;i++){
        cin>>num[i];
        }
        cout<<"Sum of the array elements is: "<<sum(num,size);
        return 0;
    
}