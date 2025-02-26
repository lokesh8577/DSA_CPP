#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
void reverseArray(vector<int> &arr , int m) {
    int start=m+1;
    int end=arr.size()-1;
   while(start<end){
       swap(arr[start],arr[end]);
       start++;
       end--;
   }
}
int main(){
    vector<int> arr;
    arr.push_back(1);
    arr.push_back(2);
    arr.push_back(3);
    arr.push_back(4);
    arr.push_back(5);
    int m=2;
    reverseArray(arr,m);
    for(int i=0;i<arr.size();i++){
        cout<<arr[i]<<" ";
        }
        return 0;
}