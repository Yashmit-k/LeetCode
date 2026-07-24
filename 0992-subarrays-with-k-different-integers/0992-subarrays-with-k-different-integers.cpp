class Solution {
public:
    int atmost(vector<int>& nums, int k){
        if(k<0)return 0;
        int l=0,c=0,ans=0;
        unordered_map<int,int> m;
        for(int r=0;r<nums.size();r++){
            if(m.find(nums[r])==m.end())c++;
            m[nums[r]]++;
            while(c>k){
                m[nums[l]]--;
                if(m[nums[l]]==0){
                    m.erase(nums[l]);
                    c--;
                }
                l++;
            }
            if(c<=k){
                ans+=(r-l+1);
            }
        }
        return ans;
    }
    int subarraysWithKDistinct(vector<int>& nums, int k) {
        return atmost(nums,k)-atmost(nums,k-1);
    }
};