#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
    vector<int> ans;
    int i=0,j=0;
      while (i < m || j < n) {
          if (i < m && (j >= n || nums1[i] <= nums2[j])) {
              ans.push_back(nums1[i]);
              i++;
          } else if (j < n) {
              ans.push_back(nums2[j]);
              j++;
          }
      }
      nums1=ans;
  }
int main(){
    vector<int> arr1;
    arr1.push_back(1);
    arr1.push_back(2);
    arr1.push_back(3);
    arr1.push_back(4);
    arr1.push_back(5);
    vector<int> arr2;
    arr2.push_back(2);
    arr2.push_back(4);
    arr2.push_back(6);
    arr2.push_back(8);
    arr2.push_back(10);

    int m=2;
    vector <int> ans;
    merge(arr1,5,arr2,5);
    for(int i=0;i<arr1.size();i++){
        cout<<arr1[i]<<" ";
        }
        return 0;
}