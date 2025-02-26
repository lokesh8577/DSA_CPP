#include<iostream>
using namespace std;
void selection(int arr[],int n){
 for(int i=0; i<n-1; i++){
        int minIndex = i;
        for(int j=i+1; j<n; j++){
            if(arr[j] < arr[minIndex])
                minIndex = j;
                
        }
        swap(arr[minIndex],arr[i]);
    }
  
}

int main(){
    int arr[5]={4,41,526,63,3};
    selection(arr,5);
    for (int i : arr) {
    cout << i << "\t";
    }
    return 0;
}