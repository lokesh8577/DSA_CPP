#include<iostream>
using namespace std;
void printArray(int num[],int n){
    for(int i=0;i<n;i++){
        cout<<num[i]<<" ";
}
}
void swap_al(int num[],int n){
    for(int i=0;i<n;i+=2){
        if(i+1<n){
            
        swap(num[i],num[i+1]);
        }
        }
}
int main(){
    int array[6]={1,2,4,5,6,9};
    int odd[5]={3,5,9,2,6};
    printArray(array,6);
    cout<<endl;
    swap_al(array,6);
    printArray(array,6);
    cout<<endl; 
    printArray(odd,5);
    cout<<endl;
    swap_al(odd,5);
    printArray(odd,5);
    return 0;
}