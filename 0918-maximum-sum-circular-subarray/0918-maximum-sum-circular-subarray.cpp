class Solution {
public:
    int maxSubarraySumCircular(vector<int>& nums) {
        int total=0;
        int curmi=0,mi=nums[0];
        int curma=0,ma=nums[0];
        for(int i:nums){
            total+=i;

            curmi=min(i,curmi+i);
            mi=min(mi,curmi);

            curma=max(i,curma+i);
            ma=max(ma,curma);

        }
        if(ma<0){
            return ma;
        }
        return max(ma,total-mi);
    }
};