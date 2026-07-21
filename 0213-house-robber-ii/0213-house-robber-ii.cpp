class Solution {
public:
    int a(vector<int>& nums,int i,vector<int>& dp,int start){
        if(i<start)return 0;
        else if(i==start)return nums[i];
        else if(dp[i]!=-1)return dp[i];
        
        return dp[i]=max(nums[i]+a(nums,i-2,dp,start),a(nums,i-1,dp,start));
    }
    int rob(vector<int>& nums) {
        int size=nums.size();
        if(size==1)return nums[0];
        vector<int> dp1(size,-1),dp2(size,-1);
        return max(a(nums,size-2,dp1,0),a(nums,size-1,dp2,1));
    }
};