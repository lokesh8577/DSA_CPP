#include<iostream>
using namespace std;
bool search(int* arr,int target,int start,int end){
    if(start>end){
        return false;
    }
    int mid = start+(end-start)/2;
    if(arr[mid]==target){
        return true;
    }
    if(arr[mid]<target){
        return search(arr,target,mid+1,end);
        }
        else{
            return search(arr,target,start,mid-1);
        }


}

int main(){
    int arr[5]={1,2,3,4,5};
    int start =0,end=5;

    cout<<"elment is found or not : "<<search(arr,4,0,4);

    return 0;
}