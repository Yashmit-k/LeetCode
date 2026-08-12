class Solution {
public:
    int maxSubarrayLength(vector<int>& nums, int k) {
        unordered_map<int,int> m;
        int l=0,len=INT_MIN;
        for(int r=0;r<nums.size();r++){
            m[nums[r]]++;
            while(m[nums[r]]>k && l<=r){
                m[nums[l]]--;
                l++;
            }
            len=max(r-l+1,len);
        }
        return len;
    }
};