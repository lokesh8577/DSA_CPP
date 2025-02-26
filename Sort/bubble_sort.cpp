#include<iostream>
using namespace std;
void Bubble(int arr[],int n){
   for(int i=1;i<n;i++){
        for(int j=0;j<n-i;j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
            }
            
        }
    }
}

int main(){
    int arr[5]={4,41,526,63,3};
    Bubble(arr,5);
    for (int i : arr) {
    cout << i << "\t";
    }
    return 0;
}