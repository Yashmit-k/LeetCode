class Solution {
public:
    int search(vector<int>& nums, int target) {
        int n=nums.size()-1;
        int l=0,r=n;
        while(l<=r){
            int mid=l+(r-l)/2;
            if(nums[mid]==target)return mid;
            else if(nums[l]<=nums[mid]){
                if(target<nums[mid] && target >= nums[l]){
                    r=mid-1;
                }
                else{
                    l=mid+1;
                }
            }
            else{
                if(nums[mid]<target && target<=nums[r]){
                    l=mid+1;
                }
                else{
                    r=mid-1;
                }
            }
        }
        return -1;
    }
};