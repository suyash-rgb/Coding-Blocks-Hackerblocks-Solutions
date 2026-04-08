#include<iostream>
#include<vector>
using namespace std;

int maxSubArray(vector<int>& nums) {
    int n = nums.size();
    int cs =0, ms=nums[0];
    for(int i =0; i<n; i++){
        cs = cs + nums[i];
        if(cs < ms){
            ms=cs;
        }
        if(cs<0){
            cs=0;
        }
        return ms;
    }
}

int main(){
    vector<int> nums = {-2,1,-3,4,-1,2,1,-5,4};
    cout<<maxSubArray(nums);
    return 0;
}