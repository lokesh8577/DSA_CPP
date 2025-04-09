#include<iostream>
using namespace std;
void sort_array(int arr[]){
    int n = sizeof(arr)/sizeof(arr[0]);
    for(int i = 0; i < n-1; i++){
        for(int j = 0; j < n-i-1; j++){
            if(arr[j] > arr[j+1]){
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
                }
                }
                }
}
int main(){
    int arr[] = {5, 2, 8, 1, 9};
    sort_array(arr);
    for(int i = 0; i < sizeof(arr)/sizeof(arr[0]); i++){
        cout << arr[i] << " ";
        }


      
    return 0;
}