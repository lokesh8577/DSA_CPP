#include<iostream>
using namespace std;
void print(int arr[],int n){
for (int i = 0; i < n; i++)
    cout << arr[i] << " ";
    cout<<endl;
}
void sort012(int arr[], int n)
{
   int i=0,j=n-1;
   while(i<j){
     
      while(arr[i]==0 && i<j){
         i++;
      }
      while(arr[j] == 1 && i<j){
         j--;
      }
      if(i<j){
      swap(arr[i],arr[j]);
      i++;
      j--;
      }
   }
}
int main(){
    int arr[] = {0, 1, 0, 0, 1,0,1,0};
    int n = sizeof(arr)/sizeof(arr[0]);
    print(arr,n);
    sort012(arr, n);
    print(arr,n);
    return 0;
}