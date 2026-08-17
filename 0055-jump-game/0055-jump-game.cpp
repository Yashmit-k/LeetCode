class Solution {
public:
    
    bool canJump(vector<int>& nums) {
        int n=nums.size();
        vector<bool> dp(n,false);
        dp[0]=true;
        for(int i=0;i<n;i++){
            if(dp[i]==true){
                for(int j=nums[i];j>=0;j--){
                    if(i+j<n)dp[i+j]=true;
                    
                }
            }
        }
        return dp[n-1];
    }
};