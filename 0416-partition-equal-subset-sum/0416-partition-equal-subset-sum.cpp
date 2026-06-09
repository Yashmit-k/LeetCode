class Solution {
public:

    vector<vector<int>> dp;

    bool a(vector<int>& nums, int x, int i, int size){

        if(x == 0){
            return true;
        }

        if(i >= size){
            return false;
        }

        if(dp[i][x] != -1){
            return dp[i][x];
        }

        bool take = false;

        if(x >= nums[i]){
            take = a(nums, x - nums[i], i + 1, size);
        }

        bool notTake = a(nums, x, i + 1, size);

        return dp[i][x] = take || notTake;
    }

    bool canPartition(vector<int>& nums) {

        int size = nums.size();

        int sum = 0;

        for(int i=0; i<size; i++){
            sum += nums[i];
        }

        if(sum % 2 != 0){
            return false;
        }

        int target = sum / 2;

        dp.assign(size, vector<int>(target + 1, -1));

        return a(nums, target, 0, size);
    }
};