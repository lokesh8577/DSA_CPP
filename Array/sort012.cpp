#include<iostream>
using namespace std;
void print(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
        }
        cout<<endl;
}
void sort012(int arr[], int n) {
    int low = 0, mid = 0, high = n - 1;

    while (mid <= high) {
        if (arr[mid] == 0) {
            swap(arr[low], arr[mid]);
            low++;
            mid++;
        }
        else if (arr[mid] == 1) {
            mid++;
        }
        else {  // arr[mid] == 2
            swap(arr[mid], arr[high]);
            high--;
        }
    }
}
int main(){
    int arr[]={0,1,2,0,1,2};
    int n=sizeof(arr)/sizeof(arr[0]);
    print(arr,n);
    sort012(arr,n);
    print(arr,n);
    return 0;
    }