class Solution {
public:
    int maxRotateFunction(vector<int>& nums) {
        long long sum=accumulate(nums.begin(),nums.end(),0LL);
        long long x=0;
        int n=nums.size();
        for(int i=0;i<n;i++){
            x+=(nums[i]*i);
        }
        long long ans=x;
        for(int i=n-1;i>0;i--){
            x=x+sum-(n*nums[i]);
            ans=max(ans,x);
        }
        return ans;
    }
};