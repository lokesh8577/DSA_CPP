#include<iostream>
using namespace std;
void print(int *p){
cout<<*p<<endl;
}
void update(int *p){
    *p=*p+1;
    cout<<*p<<endl;

}
int getsum(int *arr){
    int sum=0;
    cout<<sizeof(arr)<<endl;
    for(int i=0;i<5;i++){
        sum+=arr[i];
    }
    return sum;
}
int main(){
    // int value =10;
    // int* ptr = &value;
    // print(ptr);
    // update(ptr);


    int arr[5]={1,23,4,5,6};
    int *ptr = & arr[0];
    cout<<getsum(ptr)<<endl;

    return 0;
}