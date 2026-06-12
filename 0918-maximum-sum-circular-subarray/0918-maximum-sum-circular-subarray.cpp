class Solution {
public:
    int maxSubarraySumCircular(vector<int>& nums) {
        int curr2=0,mi=nums[0];
        int curr1=0,ma=nums[0];
        int temp=0;
        for(auto i:nums){
            temp+=i;

            curr1+=i;
            ma=max(curr1,ma);
            if(curr1<0) curr1=0;

            curr2+=i;
            mi=min(curr2,mi);
            if(curr2>0) curr2=0;
        }
        if(ma<0){
            return ma;
        }
        return max(ma,temp-mi);
    }
};