class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int n=nums.size(),l=0,r=n-1;
        while(l<=r){
            int mid=l+(r-l)/2;
            if(nums[mid]>=target)r=mid-1;
            else l=mid+1;
        }
        int first;
        if(l<n && nums[l]==target){
            first=l;
        }
        else{
            return {-1,-1};
        }
        r=n-1;
        while(l<=r){
            int mid=l+(r-l)/2;
            if(nums[mid]<=target)l=mid+1;
            else r=mid-1;;
        }
        return {first,r};
    }
};