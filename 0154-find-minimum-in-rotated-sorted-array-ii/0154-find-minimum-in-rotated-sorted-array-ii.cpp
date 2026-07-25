class Solution {
public:
    int findMin(vector<int>& nums) {
        int n=nums.size()-1;
        int l=0,r=n;
        while(l<r){
            int m=l+(r-l)/2;
            if(nums[m]>nums[r]){
                l=m+1;
            }
            else if(nums[m]>nums[l])r=m-1;
            else if(nums[m]==nums[r]&& nums[m]==nums[l]){
                r--;
                l++;
            }
            else r=m;
        }
        cout<<r;
        return nums[r];
    }
};