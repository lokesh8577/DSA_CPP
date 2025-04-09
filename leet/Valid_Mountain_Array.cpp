#include<iostream>
using namespace std;
bool validMountainArray(int* arr) {
    bool ans = false;
    for (int i = 0; i < arr.size() - 1; i++) {
        if (arr[i] == arr[i + 1]) return ans;
    }
    
    int max=INT_MIN,index=-1;
    for(int i=0;i<arr.size();i++){
        if(max<arr[i]){
            max= arr[i];
            index = i;
        }
    }
   if(arr[index]>arr[index-1] && arr[index]<arr[index+1]){
    ans = true;
   }
   return ans;
}
int main(){
int arr[] = {0,3,2,1};
int n = sizeof(arr)/sizeof(arr[0]);
cout<<validMountainArray(arr)<<endl;
return 0;
}