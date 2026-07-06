class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int l=0,r=nums.size()-1,mid;
        if(target<nums[l]){
            return 0;
        }
        else if(target>nums[r]){
            return r+1;
        }
        while(l<=r){
            mid=l+(r-l)/2;
            if(nums[mid]==target){
                return mid;
            }
            else if(target>nums[mid]){
                l=mid+1;
            }
            else{
                r=mid-1;
            }
        }
        return l;
    }
};