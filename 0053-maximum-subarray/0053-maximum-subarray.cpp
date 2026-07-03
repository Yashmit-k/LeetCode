class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int sum=0,msum=INT_MIN;
        for(int i:nums){
            sum+=i;
            msum=max(sum,msum);
            if(sum<0)sum=0;
        }
        return msum;
    }
};