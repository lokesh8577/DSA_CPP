#include<iostream>
using namespace std;

bool search(int num[],int n,int key){
    for(int i=0;i<n;i++){
        if(num[i]==key){
            return true;
        }
    }
    return false;
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
        int key;
        cout<<"Enter the key to search: ";
        cin>>key;
        if(search(num,size,key)){
            cout<<"Element is present in the array";
            }
            else{
                cout<<"Element is not present in the array";
                }
                return 0;
}