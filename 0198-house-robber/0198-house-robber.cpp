class Solution {
public:

    int a(vector<int>& nums, int i, vector<int>& dp) {

        if(i < 0) {
            return 0;
        }

        if(i == 0) {
            return nums[0];
        }

        if(dp[i] != -1) {
            return dp[i];
        }

        int pick = nums[i] + a(nums, i - 2, dp);

        int notp = a(nums, i - 1, dp);

        return dp[i] = max(pick, notp);
    }

    int rob(vector<int>& nums) {

        int n = nums.size();

        vector<int> dp(n, -1);

        return a(nums, n - 1, dp);
    }
};