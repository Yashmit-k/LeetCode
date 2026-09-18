class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int n=nums.size();
        int l=0,r=n-1;
        while(l<=r){
            int mid=l+(r-l)/2;
            if(nums[mid]>=target)r=mid-1;
            else l=mid+1;
        }
        int x=-1;
        if(l<n && nums[l]==target)x=l;
        l=0,r=n-1;
        while(l<=r){
            int mid=l+(r-l)/2;
            if(nums[mid]<=target)l=mid+1;
            else r=mid-1;
        }
        int y=-1;
        if(r>=0 && nums[r]==target)y=r;
        return {x,y};
    }
};