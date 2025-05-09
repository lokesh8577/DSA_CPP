#include<iostream>
#include<vector>
using namespace std;

int pivotIndex(vector<int>& nums) {
        int sum=0;
        for(int i=0;i<nums.size();i++){
            sum+=nums[i];
        }
        int new_sum=0;
        for(int i=0;i<nums.size();i++){
            sum=sum-nums[i];
            if(new_sum==sum){
                return i;
            }
            new_sum+=nums[i];
        }
        return -1;
    }
int main(){
    vector<int> arr={1,7,3,6,5,6};
    cout<<pivotIndex(arr)<<endl;
    return 0;
}