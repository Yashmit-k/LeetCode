class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int l=0,n=nums.size(),sum=0,len,mlen=INT_MAX;
        for(int r=0;r<n;r++){
            sum+=nums[r];
            while(l<=r && sum>=target){
                len=r-l+1;
                mlen=min(mlen,len);
                sum-=nums[l];
                l++;
            }
        }
        return mlen==INT_MAX?0:mlen;
    }
};