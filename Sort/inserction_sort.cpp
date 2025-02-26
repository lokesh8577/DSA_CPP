#include<iostream>
using namespace std;
void Insertion(int arr[],int n){
 for(int i=1;i<n;i++){
        int temp = arr[i];
        int j=i-1;
        for(;j>=0;j--){
            if(arr[j]>temp){
                arr[j+1]=arr[j];
            }
            else{
                break;
            }
        }
        arr[j+1]=temp;
    }
}


int main(){
    int arr[5]={4,41,526,63,3};
    Insertion(arr,5);
    for (int i : arr) {
    cout << i << "\t";
    }
    return 0;
}