#include<iostream>
#include <vector>
#include <algorithm> 

using namespace std;

bool check_number(int* nums, int target, int size) {
    for (int i = 0; i < size; i++) {
        if (nums[i] == target) {
            return true;
        }
    }
    return false;
}

vector<int> intersection(int* nums1, int* nums2, int m, int n) {
    vector<int> ans;
    for (int i = 0; i < m; i++) {
        if (check_number(nums2, nums1[i], n)) {
            ans.push_back(nums1[i]);
        }
    }
    sort(ans.begin(), ans.end());
    ans.erase(unique(ans.begin(), ans.end()), ans.end());
    return ans;
}

int main(){
    int nums1[] = {1, 2, 2, 1};
    int nums2[] = {2, 2};
    int m = sizeof(nums1) / sizeof(nums1[0]);
    int n = sizeof(nums2) / sizeof(nums2[0]);
    vector<int> result = intersection(nums1, nums2, m, n);
    for (int i = 0; i < result.size(); i++) {
        cout << result[i] << " ";
        }
        return 0;

}