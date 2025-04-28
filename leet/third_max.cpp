#include<iostream>
using namespace std;
int thirdMax(vector<int>& nums) {
    if(nums.size()==2)return max(nums[0],nums[1]);
    int max=INT_MIN;
    for(int i=0;i<nums.size();i++){
        if(nums[i]>max){
            max=nums[i];
        }
    }
    int sec_max = INT_MIN;
    for(int i=0;i<nums.size();i++){
        if(nums[i]>sec_max && nums[i]<max){
            sec_max = nums[i];
        }
    }
    int thi_max=INT_MIN;
    for(int i=0;i<nums.size();i++){
        if(nums[i]>thi_max && nums[i]<sec_max){
            thi_max = nums[i];
        }
    }

    if(thi_max==INT_MIN){
    return max;
    }
    else{
    return thi_max;
    }
}

int main(){

vector<int> arr={1,1,2};
int ans=thirdMax(arr);
cout<<ans<<endl;
return 0;
}