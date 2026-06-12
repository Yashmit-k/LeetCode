class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int sum=0,m=nums[0];
        for(auto i:nums){
            sum+=i;
            m=max(m,sum);
            if(sum<0){
                sum=0;
            }

        }
        return m;
    }
};