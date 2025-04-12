#include<iostream>
using namespace std;
double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
    vector<int> ans;
        int i=0;
        int j=0;
        int n=(nums1.size()+nums2.size())/2;
        n++;
        while(ans.size()<=n && i<nums1.size() && j<nums2.size()){
            if(nums1[i]>nums2[j]){
                ans.push_back(nums2[j]);
                j++;
            }
            else{
                ans.push_back(nums1[i]);
                i++;
            }
        }
        while(ans.size()<=n && i<nums1.size()){
            ans.push_back(nums1[i]);
            i++;
        }
        while(ans.size()<=n && j<nums2.size()){
            ans.push_back(nums2[j]);
            j++;
        }

        if((nums1.size()+nums2.size())%2==0){
            return (double)(ans[n-1]+ans[n-2])/2;
        }
        return (double)ans[n-1];
}
int main(){
    vector<int> nums1 = {1, 3};
    vector<int> nums2 = {2};
    cout<<findMedianSortedArrays(nums1,nums2);
    return 0;

}