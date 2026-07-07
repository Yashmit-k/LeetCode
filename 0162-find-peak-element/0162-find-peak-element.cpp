class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        int n=nums.size();
        if(n==1){
            return 0;
        }
        int l=0,r=n-1;
        while(l<=r){
            int mid=l+(r-l)/2;
            if(mid==n-1){
                if(nums[mid]>nums[mid-1]){
                    return mid;
                }
                else{
                    r=mid-1;
                }
            }
            else if(mid==0){
                if(nums[mid]>nums[mid+1])return mid;
                else l=mid+1;
            }
            else if(nums[mid]>nums[mid-1] && nums[mid]>nums[mid+1])return mid;
            else{
                if(nums[mid]>nums[mid-1]){
                    l=mid+1;
                }
                else{
                    r=mid-1;
                }
            }
        }
        return 0;
    }
};